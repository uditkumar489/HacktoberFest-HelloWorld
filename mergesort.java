package p;

import java.util.Scanner;

public class mergesort {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] input = takeInput();
		mergeSort(input);
		printArray(input);
	}
	public static int[] takeInput() {
		Scanner s = new Scanner(System.in);
		int size = s.nextInt();
		int arr[] = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = s.nextInt();
		}
		return arr;
	}
	
	public static void printArray(int input[]) {
		for(int i = 0; i < input.length; i++) {
			System.out.print(input[i] + " ");
		}
	}
	
	    public static void mergeSort(int[] input){
	        // Write your code here
	        mergesorted(input,0,input.length-1);
	    }

	    private static void mergesorted(int[] input, int si,int ei){

	        if(si>=ei){
	            return;
	        }
	        int mid= (si+ei)/2;
	        mergesorted(input,si,mid);
	        mergesorted(input,mid+1,ei);
	        merge(input,si,ei);
	    }
	    private static void merge(int[] input, int si,int ei){
	        int mid= (si+ei)/2;
	        int j=mid+1;
	        int i=si;
	        int c=0;
	        int[] temp= new int[ei-si+1];

	        while(i<=mid && j<=ei){
	            if(input[i]<input[j]){
	                temp[c]=input[i];
	                i++;
	                c++;
	            }
	            else{
	                temp[c]=input[j];
	                j++;
	                c++;
	            }
	        }
	        while(i<mid+1){
	            temp[c]=input[i];
	            i++;
	            c++;
	        }

	        while(j<ei+1){
	            temp[c]=input[j];
	            j++;
	            c++;
	        }



	        for(int k= 0;k<temp.length;k++){
	            input[si+k]=temp[k];
	        } 
	    }

	}
