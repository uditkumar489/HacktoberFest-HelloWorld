#include<iostream>
#include<map>
#include<set>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include <limits>
#include <cstdint>
#include <stack>
using namespace std;

bool isOperand(char);
int precedence(char);
void evaluateExpression(string);
int identifyOperatorAndCalculateResult(int, int, char);

bool isOperand(char character)
{
	if(character == '*' || character == '+' || character == '-' || character == '/')
		return false;
	else
		return true;
}

int precedence(char character)
{
	if(character == '+' || character == '-')
		return 1;
	else
	{
		if(character == '*' || character == '/')
			return 2;
		else
			return 0;
	}
}

int main(){
	
	string infixExpression = "3*5+6/2-4";
	string postfixExpression;
	stack<char> tempStack;
	int expressionSize = infixExpression.size();
	int i = 0;

	while(i < expressionSize)
	{
		if(isOperand(infixExpression[i])){
			postfixExpression += infixExpression[i];
			i++;
		}
		else
		{

			if( tempStack.empty() || ( precedence(infixExpression[i]) > precedence(tempStack.top()) ))
			{
				tempStack.push(infixExpression[i]);
				i++;
			}
			else
			{
				postfixExpression += tempStack.top();
				tempStack.pop();
			}
		}
	}


	while(!tempStack.empty())
	{
		postfixExpression += tempStack.top();
		tempStack.pop();
	}

	cout<<"Infix Expression: "<<infixExpression<<"\n";
	cout<<"Postfix Expression: "<<postfixExpression<<"\n";
	evaluateExpression(postfixExpression);
	return 0;
}

void evaluateExpression(string postfixExpression)
{
	stack<int> postfixStack;
	int i = 0;
	int size = postfixExpression.size();
	int num1;
	int num2;
	int result;
	while(i < size)
	{

		if(isOperand(postfixExpression[i])){
			postfixStack.push(postfixExpression[i]-'0');
			i++;
		}
		else{
			num1 = postfixStack.top();
			postfixStack.pop();
			num2 = postfixStack.top();
			postfixStack.pop();
			postfixStack.push(identifyOperatorAndCalculateResult(num2, num1,postfixExpression[i]));
			i++;
		}
	}
	
	result = postfixStack.top();
	postfixStack.pop();
	cout<<"Result: "<<result;
}

int identifyOperatorAndCalculateResult(int num2,int num1, char oper)
{
		switch(oper){
		case '*': return num2 *  num1; break;
		case '+': return num2  + num1; break;
		case '-': return num2  - num1; break;
		case '/': return num2  / num1; break;
	}
}