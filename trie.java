import java.util.*;
class Trie{
static class trieNode{
    trieNode[] child;
    boolean end;
    trieNode(){
            child=new trieNode[26];
            end=false;
            for(int i=0;i<26;i++)
            {
                child[i]=null;
            }
    }


}
static trieNode root;

static void insert(String s){
    int len=s.length();
    trieNode crawl=root;

        for(int i=0;i<len;i++){
        int index=s.charAt(i)-'a';
        if(crawl.child[index]==null)
            crawl.child[index]=new trieNode();

        crawl=crawl.child[index];

        }
        crawl.end=true;
}


static boolean search(String s){
 trieNode crawl=root;
 for(int i=0;i<s.length();i++){
     int index=s.charAt(i)-'a';
    if(crawl.child[index]!=null){
    crawl=crawl.child[index];


 }}
return crawl.end;
}


static boolean startswith(String s){
    trieNode crawl=root;
    for(int i=0;i<s.length();i++){
       int index=s.charAt(i)-'a';
        if(crawl.child[index]==null) return false;
    crawl=crawl.child[index];
    }
    return true;

}


public static void printTrie(trieNode curr,List<Character> li){
    if(curr==null) return;
    if(curr.end==true){
        System.out.println(li);
    }
    for(int i=0;i<26;i++){
        if(curr.child[i]!=null){
            li.add((char)(i+'a'));
            printTrie(curr.child[i],li);
            li.remove(li.size()-1);
        }
    }



}


public static void main(String[] args){
  String s="these";
  root=new trieNode();
  insert(s);
  insert("hepl");
  insert("thr");
  insert("th");
  //int i=0;
 /* while(root.end!=true){
      System.out.print(s.charAt(i)+"--");
        root=root.child[s.charAt(i)-'a'];
        i++;
    }*/
System.out.println(startswith("he"));
System.out.println(search("hthese"));
List<Character> li=new ArrayList<>();
printTrie(root,li);
}

}