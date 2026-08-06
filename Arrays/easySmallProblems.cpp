// // Largest number in array
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={1,2,3,4,5,6,7};
//     int largest = INT8_MIN;
//     for(int i = 0; i < 7; i++){
//         if(ar[i] > largest){
//             largest = ar[i];
//         }
//     }
//     cout<<"Largest number in array is "<<largest<<endl;
//     return 0;
// }

// // Smallest number in array
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={1,2,3,4,5,6,7};
//     int smallest = INT8_MAX;
//     for(int i = 0; i < 7; i++){
//         if(ar[i] < smallest){
//             smallest = ar[i];
//         }
//     }
//     cout<<"smallest no. in array is "<<smallest<<endl;
// }

// // 2nd Largest number
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int ar[] = {12,11,15,43,76,65,35,87,67,33,66};
//     int s1 = INT_MIN;
//     int s2 = INT_MIN;
//     for(int i = 0; i<11; i++){
//         if(s1 < ar[i]){
//             s2 = s1;
//             s1 = ar[i];
//         }
//         else if(ar[i] > s2 && ar[i] != s1){
//             s2 = ar[2];
//         }
//         }  
//     cout<<s2<<endl;
//     return 0;
// }

// // Reverse an array
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[] = {12,11,15,43,76,65,35,87,67,33,66};
//     int arr[11];
//     for(int i=0; i<11; i++){
//         arr[i] = ar[10-i];
//     }
//     for (int i = 0; i < 11; i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }

// // sorting the array
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[] = {12,11,15,43,76,65,35,87,67,33,66};
//     int arr[] = {12,11,15,43,76,65,35,87,67,33,66};
//     int temp;
//     for(int i=0; i<11; i++){
//         for(int j=0; j<11; j++){
//             if(ar[j]>=ar[i]){
//                 temp = ar[j];
//                 ar[j] = ar[i];
//                 ar[i] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 11; i++){
//         cout<<ar[i]<<" ";
//     }
//     return 0;
// }

// // Check array is sorted or not
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[] = {12,11,15,43,76,65,35,87,67,33,66};
//     int n = sizeof(ar)/sizeof(0);
//     // cout<<n;
//     bool sorted = true;
//     for(int i=0; i<n; i++){
//         if(ar[i]>ar[i+1]){
//         sorted = false;
//         break;
//         }
//     }
//     if (sorted){
//         cout<<"Array is Sorted in ascending"<<endl; 
//     }else{
//         cout<<"Array is not sorted in ascending"<<endl;
//     }
//     return 0;
// }

// // move all zeros to the end
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={0,12,21,23,02,0,3,1,5,0,0,67};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int j=0;
//     for(int i=0; i<n; i++){
//         if(ar[i]!=0){
//             swap(ar[i],ar[j]);
//             j++;
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout<<ar[i]<<" ";
//     }
//     return 0;
// }

// // Remove duplicate from Array
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={0,12,21,5,23,12,02,0,3,1,5,0,0,67};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     for(int i=0; i<n; i++){
//         bool duplicate = false;
//         for(int j=0; j<i; j++){
//             if(ar[i]==ar[j]){
//                 duplicate = true;
//                 break;
//             } 
//         }
//         if (!duplicate){
//             cout<<ar[i]<<" ";
//         }
//     }
//     return 0;
// }

// // Rotate array by one elements right
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={1,2,3,4,5,6};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int last = ar[n-1]; 
//     for(int i=n-1; i>0; i--){
//         ar[i]=ar[i-1];
//     }
//     ar[0]=last;
//     for(int i =0; i<n; i++){
//         cout<<ar[i]<<" ";
//     }
//     return 0;
// }

// // Sum of Array Elements
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={1,2,3,4,5,6};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int sum = 0;
//     for (int i = 0; i < n; i++){
//         sum = sum + ar[i];
//     }
//     cout<<"Total Sum: "<<sum<<endl;
//     return 0;
// }

// // If One Missing Number between 1 to N
// #include<iostream>
// using namespace std;
// int main(){
//     int stdAr[]={1,2,3,4,5,6};
//     int s1=0;
//     int ar[]={1,2,4,5,6};
//     int s2=0;
//     for(int i=0; i<6; i++){
//         s1 += stdAr[i];
//     }
//     for(int i=0; i<5; i++){
//         s2 += ar[i];
//     }
//     cout<<"Missing value: "<<s1 - s2<<endl;
//     return 0;
// }

// // If more than one missing number between 1 to N
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[] = {1,2,4,6};
//     int n = 6;
//     bool present[n+1] = {false};
//     for(int i = 0; i < 4; i++){
//         present[ar[i]] = true;
//     }
//     for(int i = 1; i <= n; i++){
//         if(!present[i]){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// // LINEAR SEARCH
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={0,12,21,5,23,12,02,0,3,1,5,0,0,67};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     cout<<"Enter the element want to search: ";
//     int a;
//     int j = -1;
//     cin>>a;
//     bool found = false;
//     for(int i = 0; i<n; i++){
//         if(ar[i]==a){
//             found = true;
//             j=i;
//             break;
//         }
//     }
//     if (found){
//         cout<<"The Element "<<a<<" found at index "<<j<<endl;
//     }
//     else{
//         cout<<"The Element "<<a<<" Not found!"<<endl;
//     }
//     return 0;
// }

// // BINARY SEARCH
// #include<iostream>
// using namespace std;
// int mid(int min,int max){
//         int midl = ((max - min)/2) + min;
//     return midl;
// }

// int main(){
//     int ar[]={12,5,91,38,8,56,72,16,23,2};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int a;
//     cout<<"Enter the element want to find: ";
//     cin>>a;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(ar[i]<ar[j]){
//                 swap(ar[i],ar[j]);
//             }
//         }
//     }
//     int min=0, max=n-1;
//     bool found = false;
//     while(min<=max){
//         int m = mid(min,max);
//         if(a == ar[m]){
//             cout<<"Element Found at index "<<m<<endl;
//             found = true;
//             break;
//         }
//         else if(a < ar[m]){
//             max = m-1; 
//         }
//         else{
//             min = m+1;
//         }
//     }
//     if(!found){
//         cout<<"Element Not Found!"<<endl;
//     }
//     return 0;
// }

// // REVERSE ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={23,45,64,32,67,88,21,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int revAr[n];
//     for (int i = 0; i < n; i++){
//         revAr[i] = ar[n-i-1];
//     }
//     for (int i = 0; i < n; i++){
//         cout<<revAr[i]<<" ";
//     }
//     return 0;
// }

// // Find Max
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int ar[]={23,45,64,32,67,88,21,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int maxVal = INT_MIN;
//     int j=-1;
//     for(int i=0; i<n; i++){
//         if(ar[i]>maxVal){
//             maxVal = ar[i];
//             j=i;
//         }
//     }
//     cout<<"The max number element is "<<maxVal<<" at index "<<j<<endl;
//     return 0;
// }

// // Find Min
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int ar[]={23,45,64,32,67,88,21,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int minVal = INT_MAX;
//     int j=-1;
//     for(int i=0; i<n; i++){
//         if(ar[i]<minVal){
//             minVal=ar[i];
//             j=i;
//         }
//     }
//     cout<<"The Min Number element is "<<minVal<<" at the index "<<j<<endl;
//     return 0;
// }

// // Count Even/Odd
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={23,45,64,32,67,88,21,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int oddCount=0, evenCount=0;
//     for(int i=0; i<n; i++){
//         if(ar[i]%2==0){
//             evenCount++;
//         }
//         else{
//             oddCount++;
//         }
//     }
//     cout<<"No. of Even Elements in the given array: "<<evenCount<<endl;
//     cout<<"No. of Odd Elements in the given array: "<<oddCount<<endl;
//     return 0;
// }

// // Rotate Array
// // 1. Right Rotation
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={23,45,64,32,67,88,21,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int temp = ar[n-1];
//     for(int i=n-1; i>0; i--){
//         ar[i] = ar[i-1];
//     }
//     ar[0]=temp;
//     cout<<"Right rotation by one step of the given array is: ";
//     for (int i = 0; i < n; i++){
//         cout<<ar[i]<<" ";
//     }
//     return 0;
// }
// // 2. Left Rotation
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={23,45,64,32,67,88,21,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int temp = ar[0];
//     for (int i = 0; i < n-1; i++){
//         ar[i]=ar[i+1];
//     }
//     ar[n-1]=temp;
//     cout<<"Left rotation by one step of the given array is: ";
//     for (int i = 0; i < n; i++){
//         cout<<ar[i]<<" ";
//     }
//     return 0;
// }

// // Bubble sort
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={23,45,64,32,67,88,21,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(ar[i]<ar[j]){
//                 swap(ar[i],ar[j]);
//             }
//         }
//     }
//     cout<<"Sorted array by bubble method"<<endl;
//     for(int i=0; i<n; i++){
//         cout<<ar[i]<<" ";
//     }
//     return 0;
// }

// // Selection sort
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int ar[]={23,45,64,32,67,88,21,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int temp = 0, smallestElement=INT_MAX, smallestIndex=-1;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             if(ar[j]<smallestElement){
//                 smallestElement=ar[j];
//                 smallestIndex = j;
//             }
//         }
//         swap(ar[i],ar[smallestIndex]);
//         smallestElement=INT_MAX;
//         smallestIndex = i;
//     }
//     for(int i=0; i<n; i++){
//        cout<<ar[i]<<" "; 
//     }
//     return 0;
// }

// // Insertion sort
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={23,45,64,32,67,88,21,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     for(int i=1; i<n; i++){
//         int key=ar[i], j = i-1;
//         while(j >= 0 && ar[j]>key){
//             ar[j+1] = ar[j];
//             j--;
//         }
//         ar[j+1] = key;
//     }
//     for(int i=0; i<n; i++){
//        cout<<ar[i]<<" "; 
//     }
//     return 0;
// }

// // First Occurence and Last Occurence of an element
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={2,1,3,4,2,2,6,7,3,9,3,3,1,2,3,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     cout<<"Given array is: "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<ar[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Number of elements in given array is "<<n<<endl;
//     cout<<"Enter the Element whose 1st & Last occurence want: ";
//     int a, firstIndex=-1, lastIndex=-1;
//     cin>>a;
//     for(int i=0; i<n; i++){
//         if(ar[i]==a){
//             firstIndex = i;
//             break;
//         }
//     }
//     if(firstIndex==-1){
//         cout<<"Element not found in given array"<<endl;
//         return 0;
//     }
//     for(int i=n-1; i>-1; i--){
//         if(ar[i]==a){
//             lastIndex = i;
//             break;
//         }
//     }
//     cout<<"First Occurence of the Element "<<a<<" is at Index "<<firstIndex<<endl;
//     cout<<"Last Occurence of the Element "<<a<<" is at Index "<<lastIndex<<endl;
//     return 0;
// }

// // Counting Occurence of an Element
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={2,1,3,4,2,2,6,7,3,9,3,3,1,2,3,1};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     cout<<"Given array is: "<<endl;
//     for(int i=0; i<n; i++){
//     cout<<ar[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Number of elements in given array is "<<n<<endl;
//     cout<<"Enter the Element whose occurence counting want: ";
//     int a, count=0;
//     cin>>a;
//     for(int i=0; i<n; i++){
//         if(ar[i]==a){
//             count++;
//         }
//     }
//     if(count==0){
//         cout<<"Element not found in given array"<<endl;
//         return 0;
//     }
//     cout<<"Total number of Occurence of Element "<<a<<" in given array is "<<count<<endl;
//     return 0;
// }

// // concatinate Two sorted array
// #include<iostream>
// using namespace std;
// int main(){
//     int ar1[5] = {1,2,3,4,5};
//     int ar2[5] = {11,12,13,14,15};
//     int ar3[10];
//     for(int i=0; i<5; i++){
//         ar3[i]=ar1[i];
//     }
//     for(int i=0; i<5; i++){
//         ar3[i+5]=ar2[i];
//     }
//     cout<<"concatinated Array is"<<endl;
//     for(int i=0; i<10; i++){
//         cout<<ar3[i]<<" ";
//     }
//     return 0;
// }

// // Merge two sorted array
// #include<iostream>
// using namespace std;
// int main(){
//     int ar1[5] = {1,3,5,7,9};
//     int ar2[5] = {2,4,6,8,10};
//     int ar3[10];
//     for (int i=0,j=0,k=0; i<5 && j<5;){
//             if(ar1[i] <= ar2[j]){
//                 ar3[k]=ar1[i];
//                 i++;
//                 k++;
//             }
//             else{
//                 ar3[k] = ar2[j];
//                 j++;
//                 k++;
//             }
//         }
//     for(int i=0; i<10; i++){ 
//         cout<<ar3[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int ar1[5] = {1,3,5,7,9};
//     int ar2[5] = {2,4,6,8,10};
//     int ar3[10];
//     int i=0, j=0, k=0;
//     while (i<5 && j<5){
//         if(ar1[i]<ar2[j]){
//             ar3[k]=ar1[i];
//             i++;
//         }else{
//             ar3[k]=ar2[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<5){
//         ar3[k++] = ar1[i++];
//     }
//     while(j<5){
//         ar3[k++] = ar2[j++];
//     }
//     for(int i=0; i<10; i++){ 
//         cout<<ar3[i]<<" ";
//     }
//     return 0;
// }

// // STRING
// // Reverse a string
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the string: ";
//     string s;
//     cin>>s;
//     cout<<"given string: "<<s<<endl;
//     cout<<"Reverse String: ";
//     for(int i=s.length()-1; i>-1; i--){
//         cout<<s[i];
//     }
//     return 0;
// }

// // Check Palindrom
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the string: ";
//     string str,revStr="";
//     cin>>str;
//     cout<<"given string: "<<str<<endl;  
//     for(int i=0; i<str.length(); i++){
//         revStr+=str[str.length()-1-i];
//     }
//     if(str==revStr){
//         cout<<"Yes, It is Palindrome"<<endl;
//     }else{
//         cout<<"No, It is not Palindrome"<<endl;
//     }
//     return 0;
// }

// // Count Vowel and consonent
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the string: ";
//     string str,revStr;
//     cin>>str;
//     cout<<"given string: "<<str<<endl;  
//     char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
//     int count=0;
//     for(int i=0; i<str.length(); i++){
//         for(int j=0; j<10; j++){
//             if(str[i]==vowel[j]){
//                 count++;
//                 break;
//             }
//         }
//     }
//     cout<<"Total no. of vowels in given string "<<str<<" is "<<count<<endl;
//     cout<<"Total no. of consonent in given string "<<str<<" is "<<str.length()-count<<endl;
//     return 0;
// }

// // Covert Lowecase to Uppercase
// #include<iostream>
// #include<cctype>
// using namespace std;
// int main(){
//     cout<<"Enter the string: ";
//     string str;
//     cin>>str;
//     cout<<"given string: "<<str<<endl; 
//     for(int i=0; i<str.length(); i++){
//         str[i]= toupper(str[i]);
//     }
//     cout<<str<<endl;
//     return 0;
// }

// // Frequency of each charecter in the string
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the string: ";
//     string str;
//     cin>>str;
//     cout<<"given string: "<<str<<endl;
//     int frq[256]={0};
//     for (int i = 0; i < str.length(); i++){
//         frq[str[i]]++;
//     }
//     cout<<"Character Frequencies in given string:\n";
//     for (int i = 0; i < str.length(); i++){
//         if(frq[str[i]]!=0){
//             cout<<str[i]<<" = "<<frq[str[i]]<<endl;
//             frq[str[i]] = 0;
//         }
//     }
//     return 0;
// }

// // Remove spaces from string
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the string: ";
//     string str;
//     getline(cin,str);
//     cout<<"given string: "<<str<<endl; 
//     string result="";
//     for(int i=0; i<str.length(); i++){
//         if(str[i] !=' '){
//             result+=str[i];
//         }
//     }
//     cout<<"Without space given string is "<<result<<endl;
//     return 0;
// }

// // Check Anagram
// #include<iostream> 
// using namespace std;
// int main(){
//     string str1, str2;
//     cout<<"Enter the string 1: ";
//     cin>>str1;
//     cout<<"Enter the string2: ";
//     cin>>str2;
//     cout<<"given strings are: "<<str1<<endl<<str2<<endl;
//     if(str1.length() != str2.length()){
//         cout<<"Strings are not Anagram"<<endl;
//         return 0;
//     }
//     int frq[256]={0};
//     for(int i=0; i<str1.length(); i++){
//         frq[str1[i]]++;
//         frq[str2[i]]--;

//     }
//     bool anagram = true;
//     for(int i=0; i<256; i++){
//         if(frq[i]!=0){
//             anagram=false;
//         }
//     }
//     if(anagram){
//         cout<<"String are Anagrams"<<endl;
//     }else{
//         cout<<"Strings are not Anagrams"<<endl;
//     }
//     return 0;
// }

// // HASHING
// // Counting the frequency of element
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={1,2,1,2,1,2,3,4,3,4,3,4,5};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int freq[256]={0};
//     for(int i=0; i<n; i++){
//         freq[ar[i]]++;
//     }
//     cout<<" Frequencies of elements of given array: "<<endl;
//     for(int i=0; i<n; i++){
//         if(freq[ar[i]]!=0){
//             cout<<ar[i]<<" = "<<freq[ar[i]]<<endl;
//         }
//         freq[ar[i]]=0;
//     }
//     return 0;
// }

// // Find first non-repeating character
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the String: ";
//     string str;
//     cin>>str;
//     int freq[256] = {0};
//     for(int i=0; i<str.length(); i++){
//         freq[str[i]]++;
//     }
//     char ch=0;
//     bool nonRep = false;
//     for(int i=0; i<str.length(); i++){
//         if(freq[str[i]]==1){
//             ch=str[i];
//             nonRep = true;
//             break;
//         }
//     }
//     if(nonRep){
//         cout<<ch<<" is First non-repeating charecter in given string"<<endl;
//     }else{
//         cout<<"All characters are repeating more than 1 times"<<endl; 
//     }
//     return 0;
// }

// // Find duplicate elements
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the String: ";
//     string str;
//     cin>>str;
//     int freq[256]={0};
//     for(int i=0; i<str.length(); i++){
//         freq[str[i]]++;
//     }
//     bool duplicate = false;
//     for(int i=0; i<str.length(); i++){
//         if(freq[str[i]]!=1){
//             duplicate = true;
//             cout<<str[i]<<" is duplicated with frequency "<<freq[str[i]]<<endl;
//         }
//         freq[str[i]]=1;
//     }
//     if(!duplicate){
//         cout<<"All characters are single in the give string"<<endl;
//     }
//     return 0;
// }

// // Find the most frequent character in string
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the string: ";
//     string str;
//     cin>>str;
//     int freq[256]={0}, maximum=0;
//     char ch;
//     for(int i=0; i<str.length(); i++){
//         freq[str[i]]++;
//     }
//     for(int i=0; i<str.length(); i++){
//         if(freq[str[i]]>maximum){
//             maximum=freq[str[i]];
//             ch = str[i];
//         }
//     }
//     cout<<"Maximum frequency character is "<<ch<<" with frequency "<<maximum<<endl;
//     if(maximum==0){
//         cout<<"No character has more than zero frquency";
//     }
//     return 0;
// }

// // Find most frequent Element
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={1,2,1,2,1,2,3,4,3,4,3,4,5};
//     int freq[256]={0}, maximum=0, x;
//     int n = sizeof(ar)/sizeof(ar[0]);
//     for(int i=0; i<n; i++){
//         freq[ar[i]]++;
//     }
//     for(int i=0; i<n; i++){
//         if(freq[ar[i]]>maximum){
//             maximum = freq[ar[i]];
//             x=ar[i];
//         }
//     }
//     if(maximum==0){
//         cout<<"No Elements in array"<<endl;
//     }else{
//         cout<<"Most Frequent Element in given array is "<<x<<" with frequency "<<maximum<<endl;
//     }
//     return 0;
// }

// // RECURSION
// // Print the number from 1 to N
// #include<iostream>
// using namespace std;
// void num(int n){
//     if(n==0){
//         return;
//     }else{
//         num(n-1);
//         cout<<n<<" ";
//     }
// }
// int main(){
//     num(10);
//     return 0;
// }

// // Print numbers from N to 1
// #include<iostream>
// using namespace std;
// void num(int n){
//     if(n==0){
//         return;
//     }else{
//         cout<<n<<" ";
//         num(n-1);
//     }
// }
// int main(){
//     num(10);
//     return 0;
// }

// // Factorial
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
// int main(){
//     cout<<factorial(5);
//     return 0;
// }

// // Fibonacci
// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//         return fibonacci(n-1) + fibonacci(n-2);
// }
// int main(){
//     for(int i=0; i<=10; i++){
//         cout<<fibonacci(i)<<" ";
//     }
//     return 0;
// }

// //Sum of first N numbers
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     cout<<sum(10);
//     return 0;
// }

// // Power of a number
// #include<iostream>
// using namespace std;
// int pow(int b, int e){
//     if(b==0 && e==0){
//         cout<<"invalid"<<endl;
//         return -1;
//     }
//     if(b==0 && e!=0){
//         return 0;
//     }
//     if(b!=0 && e==0){
//         return 1;
//     }
//     return b*pow(b,e-1);
// }
// int main(){
//     cout<<pow(0,0);
//     return 0;
// }

// // TWO POINTERS
// // Reverse an array using two pointers
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={12,21,23,22,3,31,45,63,11};
//     int n=sizeof(ar)/sizeof(ar[0]);
//     int left=0;
//     int right=n-1;
//     while(left<right){
//         swap(ar[left],ar[right]);
//         left++;
//         right--;
//     }
//     for(int i=0; i<n; i++){
//         cout<<ar[i]<<" ";
//     }
//     return 0;
// }

// // Check palindrome using two pointers
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string: ";
//     cin>>str;
//     int right=str.length()-1,left=0;
//     bool palindrome = true;
//     while(left<right){
//         if(str[left]!=str[right]){
//             palindrome=false;
//             break;
//         }
//         left++;
//         right--;
//     }
//     if(palindrome){
//         cout<<"Yes given string is palindrome"<<endl;
//     }else{
//         cout<<" No, given string is not palindrome"<<endl;
//     }
//     return 0;
// }

// // Remove duplicates from sorted array
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={12,13,13,14,15,15,15,16,18};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int left=0, right=n-1;
//     while (left<right)
//     {
//         if(ar[left]==ar[left-1]){
//             ar[left] = ar[left+1];
//         }
//         if(ar[right]==ar[right-1]){
//             ar[right] = ar[right+1];
//         }
//         left++;
//         right--;
//     }
//     for(int i=0; i<n; i++){
//         cout<<ar[i]<<" ";
//     }
//     return 0;
// }

// // Pair with given sum
// #include<iostream>
// using namespace std;
// int main(){
//     int ar[]={1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     int targetSum=9;
//     int i=0,j=0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(ar[i]+ar[j]==9){
//                 cout<<"("<<ar[i]<<", "<<ar[j]<<")"<<" is satisfied"<<endl;
//             }
//         }
//     }  
//     return 0;    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int ar[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(ar) / sizeof(ar[0]);
//     int targetSum = 9;
//     int i = 0, j = n - 1;

//     while (i < j) {
//         int sum = ar[i] + ar[j];
//         if (sum == targetSum) {
//             cout << "Pair found: (" << ar[i] << ", " << ar[j] << ")" << endl;
//             break;
//         } else if (sum < targetSum) {
//             i++;
//         } else {
//             j--;
//         }
//     }

//     if (i >= j) {
//         cout << "No pair found with the given sum" << endl;
//     }

//     return 0;
// }

// // LINKED LIST
// // Create and Traverse the linked list
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
// };
// int main(){
//     node* head = new node();
//     node* second = new node();
//     node* third = new node();

//     head -> data = 10;
//     head -> next = second;
//     second -> data = 20;
//     second -> next = third;
//     third -> data = 30;
//     third -> next = nullptr;

//     node* temp = head;
//     while(temp != nullptr){
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     }
//     return 0;
// }

// // count the No. of nodes in linked list
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* four = new Node();

//     head -> data = 100;
//     second -> data = 200;
//     third -> data = 300;
//     four -> data = 400;

//     head -> next = second;
//     second -> next = third;
//     third -> next = four;
//     four -> next = nullptr;

//     int count = 0;
//     Node* temp = head;
//     while (temp != nullptr)
//     {
//         cout<<temp->data<<endl;
//         count++;
//         temp = temp -> next;
//     }
//     cout<<"Total no. of Nodes are "<<count<<endl;

//     return 0;
// }

// // Searching Node from given linked list
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     string nodeName;
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();

//     head -> nodeName = "First";
//     second -> nodeName = "Second";
//     third -> nodeName = "Third";
//     forth -> nodeName = "Forth";

//     head -> data = 100;
//     second -> data = 200;
//     third -> data = 300;
//     forth -> data = 400;

//     head -> next = second;
//     second -> next = third;
//     third -> next = forth;
//     forth -> next = nullptr;

//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     Node* temp = head;
//     bool found = false;
//     while (temp != nullptr)
//     {
//         if(temp->data == n){
//             found = true;
//             break;
//         }
//         temp = temp -> next;
//     }
//     if(found){
//         cout<<n<<" Found in "<<temp->nodeName<<" Node"<<endl;
//     }else{
//         cout<<n<<" Not Found in any Node"<<endl;
//     }

//     return 0;
// }

// // Searching Node from given linked list with nodeName (very much useful when big no. of nodes)
// // Usually Linked Lists' Node doesn't have node Name
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();

//     head -> data = 100;
//     second -> data = 200;
//     third -> data = 300;
//     forth -> data = 400;

//     head -> next = second;
//     second -> next = third;
//     third -> next = forth;
//     forth -> next = nullptr;

//     int n, position=1;
//     cout<<"Enter the number: ";
//     cin>>n;
//     Node* temp = head;
//     while (temp != nullptr)
//     {
//         if(temp->data == n){
//             cout<<n<<" Found in Node "<<position<<endl;
//             return 0;
//         }
//         temp = temp -> next;
//         position++;
//     }
//         cout<<n<<" Not Found in any Node"<<endl;

//     return 0;
// }

// // Inserting New Nodes in the Existing Linked List
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();

//     head -> data = 100;
//     second -> data = 200;
//     third -> data = 300;
//     forth -> data = 400;

//     head -> next = second;
//     second -> next = third;
//     third -> next = forth;
//     forth -> next = nullptr;

// //  Insertion at Beginning
//     Node* infant = new Node();
//     infant -> data = 50;
//     infant -> next = head;
//     head = infant;

// //  Insertion in between
//     Node* random = new Node();
//     random -> data = 345;
//     random -> next = forth;
//     third ->next = random;

// //  Insertion at the End
//     Node* last = new Node();
//     last -> data = 500;
//     forth -> next = last;
//     last -> next = nullptr;

//     Node* temp = head;
//     while (temp != nullptr)
//     {
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     }
    
//     return 0;
// }

// // Deletion of Node from provided Linked List
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();
//     Node* fifth = new Node();
//     Node* sixth = new Node();

//     head -> data = 100;
//     second -> data = 200;
//     third -> data = 300;
//     forth -> data = 400;
//     fifth -> data = 500;
//     sixth -> data = 600;

//     head -> next = second;
//     second -> next = third;
//     third -> next = forth;
//     forth -> next = fifth;
//     fifth -> next = sixth;
//     sixth -> next = nullptr;

//     cout<<"Before Deletion: "<<endl;
//     Node* temp = head;
//     while(temp != nullptr){
//         cout<<temp->data<<" ";
//         temp = temp -> next;
//     }

//     Node* temp2 = head;
//     head = head -> next;
//     delete temp2;
//     temp2 = nullptr;

//     // Deleting 1st Node 
//     cout<<endl<<"After Deleting 1st Node: "<<endl;
//     Node* temp3 = head;
//     while (temp3 != nullptr)
//     {
//         cout<<temp3->data<<" ";
//         temp3 = temp3 -> next;
//     }
    
//     // Deleting last Node
//     delete sixth;
//     fifth -> next = nullptr;

//     cout<<endl<<"After deleting last Node: "<<endl;
//     Node* temp4 = head;
//     while (temp4 != nullptr)
//     {
//         cout<<temp4 -> data<<" ";
//         temp4 = temp4 -> next;
//     }
    
//     // Deleting the node in between
//     third -> next = fifth;
//     delete forth;
//     forth = nullptr;

//     cout<<endl<<"After deleting random Node: "<<endl;
//     Node* temp5 = head;
//     while (temp5 != nullptr)
//     {
//         cout<<temp5 -> data<<" ";
//         temp5 = temp5 -> next;
//     }
//     return 0;
// }

// // Deleting Node in different approch
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();
//     Node* fifth = new Node();
//     Node* sixth = new Node();

//     head -> data = 100;
//     second -> data = 200;
//     third -> data = 300;
//     forth -> data = 400;
//     fifth -> data = 500;
//     sixth -> data = 600;

//     head -> next = second;
//     second -> next = third;          
//     third -> next = forth;
//     forth -> next = fifth;
//     fifth -> next = sixth;
//     sixth -> next = nullptr;

//     cout<<"Before Deletion: "<<endl;
//     Node* temp = head;
//     while(temp != nullptr){
//         cout<<temp->data<<" ";
//         temp = temp -> next;
//     }

//     Node* temp2 = head;
//     head = head -> next;
//     delete temp2;

//     Node* temp3 = head;
//     while(temp3 -> next -> next != nullptr){
//         temp3 = temp3 -> next;
//     }
//     delete temp3 -> next;
//     temp3 -> next = nullptr;

//     cout<<"Afrter deletion: "<<endl;
//     Node* temp4 = head;
//     while(temp4 != nullptr){
//         cout<<temp4 -> data<<" ";
//         temp4 = temp4 -> next;
//     }
//     return 0;
// }

// // Deleting Node in  between
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();
//     Node* fifth = new Node();
//     Node* sixth = new Node();

//     head -> data = 100;
//     second -> data = 200;
//     third -> data = 300;
//     forth -> data = 400;
//     fifth -> data = 500;
//     sixth -> data = 600;

//     head -> next = second;
//     second -> next = third;          
//     third -> next = forth;
//     forth -> next = fifth;
//     fifth -> next = sixth;
//     sixth -> next = nullptr;

//     cout<<"Before Deletion: "<<endl;
//     Node* temp = head;
//     while(temp != nullptr){
//         cout<<temp->data<<" ";
//         temp = temp -> next;
//     }

//     Node* temp2 = head;
//     while (temp2->next != nullptr)
//     {
//         if(temp2 -> next -> data == 400){
//             break;
//         }
//         temp2 = temp2 -> next;
//     }
//     Node* del = temp2 ->next;
//     temp2 -> next = del -> next;
//     delete del;
//     del = nullptr;

//     cout<<"Afrter deletion: "<<endl;
//     Node* temp4 = head;
//     while(temp4 != nullptr){
//         cout<<temp4 -> data<<" ";
//         temp4 = temp4 -> next;
//     }
//     return 0;
// }

// // Reversoing the Linked List
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();
//     Node* fifth = new Node();

//     head -> data = 100;
//     second -> data = 200;
//     third -> data = 300;
//     forth -> data = 400;
//     fifth -> data = 500;

//     head -> next = second;
//     second -> next = third;
//     third -> next = forth;
//     forth -> next = fifth;
//     fifth -> next = nullptr;

//     cout<<"Before Reverse (Original Linked List):"<<endl;
//     Node* temp = head;
//     while (temp != nullptr)
//     {
//         cout<<temp -> data<<" ";
//         temp = temp -> next;
//     }

//     cout<<endl<<"Reversed Linked List: "<<endl;
//     Node* prev = nullptr;
//     Node* curr = head;
//     while (curr != nullptr)
//     {
//         Node* nextNode = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = nextNode;
//     }
//     head = prev;

//     Node* temp3 = head;
//     while (temp3 != nullptr)
//     {
//         cout<<temp3->data<<" ";
//         temp3 = temp3->next;
//     }
    
//     return 0;
// }

// // Finding middle of any linked list
// // This algorithm gives 2nd middle in case of even no. of nodes
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();
//     Node* fifth = new Node();
//     Node* sixth = new Node();
//     Node* seventh = new Node();

//     head -> data = 1000;
//     second -> data = 2000;
//     third -> data = 3000;
//     forth -> data = 4000;
//     fifth -> data = 5000;
//     sixth -> data = 6000;
//     seventh -> data = 7000;

//     head -> next = second;
//     second -> next = third;
//     third -> next = forth;
//     forth -> next = fifth;
//     fifth -> next = sixth;
//     sixth -> next = seventh;
//     seventh -> next = nullptr;

//     Node* temp = head;
//     while(temp != 0){
//         cout<<temp -> data<<" ";
//         temp = temp -> next;
//     }
    
//     Node* slow = head;
//     Node* fast = head;

//     while(fast != nullptr && fast->next != nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     cout<<endl<<"Middle Node of the given Linked List is "<<slow->data<<endl;

//     return 0;
// }

// // Finding middle of any linked list
// // This algorithm gives 1st middle in case of even no. of nodes
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();
//     Node* fifth = new Node();
//     Node* sixth = new Node();
//     // Node* seventh = new Node();

//     head -> data = 1000;
//     second -> data = 2000;
//     third -> data = 3000;
//     forth -> data = 4000;
//     fifth -> data = 5000;
//     sixth -> data = 6000;
//     // seventh -> data = 7000;

//     head -> next = second;
//     second -> next = third;
//     third -> next = forth;
//     forth -> next = fifth;
//     fifth -> next = sixth;
//     sixth -> next = nullptr;
//     // seventh -> next = nullptr;

//     Node* temp = head;
//     while(temp != 0){
//         cout<<temp -> data<<" ";
//         temp = temp -> next;
//     }
    
//     Node* slow = head;
//     Node* fast = head->next;

//     while(fast != nullptr && fast->next != nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     cout<<endl<<"Middle Node of the given Linked List is "<<slow->data<<endl;

//     return 0;
// }

// // Cyclic Linked List
// // Detecting the linked list cyclic or not (Floyd's Algorythm)
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();
//     Node* fifth = new Node();

//     head -> next = second;
//     second -> next = third;
//     third -> next = forth;
//     forth -> next = fifth;
//     fifth -> next = second;

//     head -> data = 1000;
//     second -> data = 2000;
//     third -> data = 3000;
//     forth -> data = 4000;
//     fifth -> data = 5000;

//     Node* slow = head;
//     Node* fast = head;
//     while(fast != nullptr && fast -> next != nullptr){
//         slow = slow -> next;
//         fast = fast -> next -> next;

//         if(slow == fast){
//             cout<<"Cycle Detected"<<endl;
//             return 0;
//         }
//     }

//     cout<<"No Cycle";
//     return 0;
// }

// // Detect the node from where cycle starts
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();
//     Node* fifth = new Node();
//     Node* sixth = new Node();

//     head -> next = second;
//     second -> next = third;
//     third -> next = forth;
//     forth -> next = fifth;
//     fifth -> next = sixth;
//     sixth -> next = third;

//     head -> data = 1000;
//     second -> data = 2000;
//     third -> data = 3000;
//     forth -> data = 4000;
//     fifth -> data = 5000;
//     sixth -> data = 6000;

//     Node* slow = head;
//     Node* fast = head;
//     bool cycleFound = false;
    
//     while (fast != nullptr && fast -> next != nullptr)
//     {
//         slow = slow -> next;
//         fast = fast -> next -> next;

//         if(fast == slow){
//             cycleFound = true;
//             break;
//         }
//     }
    
//     if(cycleFound){
//         Node* temp = head;
//         while(temp != slow){
//             temp = temp -> next;
//             slow = slow -> next;
//         }
//         cout<<"Cycle starts at node with data: "<<temp->data<<endl;
//     }else{
//         cout<<"No Cycle"<<endl;
//     }
//     return 0;
// }

// Rule for each problem

// Don't move on until you can answer:

// ✅ Why does this algorithm work?
// ✅ Time Complexity?
// ✅ Space Complexity? 
// ✅ Can I write it again after 1 hour without seeing it?

// If the answer to the last question is No, the problem isn't finished.

// // STACK
// // Stack Function (push, pop, peek, isEmpty, isFull, display)
// #include<iostream>
// #include<climits>
// using namespace std;

// class Stack{
//     private:
//     int stack[5];
//     int top;

//     public:
//     Stack(){
//         top = -1;
//     }

//     bool isFull() const{
//         return top == 4;
//     }

//     bool isEmpty() const{
//         return top == -1;
//     }

//     void push(int value){
//         if(isFull()){
//             cout << "Stack overflow. Cannot push " << value << "\n";
//             return;
//         }
//         stack[++top] = value;
//     }

//     void pop(){
//         if(isEmpty()){
//             cout << "Stack underflow. Nothing to pop\n";
//             return;
//         }
//         top--;
//     }

//     int peek() const{
//         if(isEmpty()){
//             cout << "Stack is empty. No top element\n";
//             return INT_MIN;
//         }
//         return stack[top];
//     }

//     void display() const{
//         if(isEmpty()){
//             cout << "Stack is empty\n";
//             return;
//         }
//         cout << "Stack elements (top to bottom): ";
//         for(int i = top; i >= 0; i--){
//             cout << stack[i] << " ";
//         }
//         cout << "\n";
//     }
// };

// int main(){
//     Stack st;

//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.display();

//     cout << "Top element: " << st.peek() << "\n";

//     st.pop();
//     st.display();

//     st.pop();
//     st.pop();
//     st.pop();

//     st.push(40);
//     st.push(50);
//     st.push(60);
//     st.push(70);
//     st.push(80);
//     st.push(90);

//     st.display();
//     return 0;
// }

// // STACK Implementation in LINKED LIST
// #include<iostream>
// using namespace std;
// class Node{
//     public: 
//     int data;
//     Node* next;
// };
// int main(){
//     Node* top = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* forth = new Node();

//     top -> data = 100;
//     second -> data = 200;
//     third -> data = 300;
//     forth -> data = 400;

//     top -> next = second;
//     second -> next = third;
//     third -> next = forth;
//     forth -> next = nullptr;

//     // Before Push
//     cout<<"Before Push"<<endl;
//     Node* temp = top;
//     while (temp != nullptr)
//     {
//         cout<<temp->data<<" ";
//         temp = temp -> next;
//     }
    
//     // stack function (push) implementation
//     Node* newNode = new Node();
//     newNode -> data = 50;
//     newNode -> next = top;
//     top = newNode;

//     // After push
//     cout<<endl<<"After push"<<endl;
//     Node* temp2 = top;
//     while (temp2 != nullptr)
//     {
//         cout<<temp2->data<<" ";
//         temp2 = temp2 -> next;
//     }

//     return 0;
// }

// // STACK Functions in LINKED LIST
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// class Stack{
//     Node* top;

//     public:
//     Stack(){
//         top = nullptr;
//     }

//     void push(int value){
//         Node* newNode = new Node();
//         newNode -> data = value;
//         newNode -> next = top;
//         top = newNode;
//     }

//     void pop(){
//         if(top != nullptr){
//             Node* temp = top;
//             top = top -> next;
//             delete temp;
//         }else{
//             cout<<"Stack UnderFlow"<<endl;;
//         }
//     }

//     int peek(){
//         if(top == nullptr){
//             cout<<"Stack of Linked List is Empty"<<endl;
//             return -1;
//         }else;
//         return top -> data;
//     }
    
//     bool isEmpty(){
//         if(top == nullptr){
//             return true;
//         }else;
//         return false;
//     }
    
//     void display(){
//         Node* temp = top;
//         while (temp != nullptr)
//         {
//             cout<<temp->data<<" ";
//             temp = temp -> next;
//         }
//     }
// };

// int main(){
//     Stack st;

//     cout<<st.isEmpty()<<endl; 

//     cout<<st.peek()<<endl;

//     st.push(400);
//     st.push(300);
//     st.push(200);
//     st.push(100);
//     st.display();
//     cout<<endl<<st.peek()<<endl;

//     st.pop();
//     st.display();
//     cout<<endl<<st.peek()<<endl;
    
//     return 0;
// }

// // STL STACK (Using Pre-defined Library)
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> st;

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.size()<<endl;
//     while (!st.empty())
//     {
//         cout<< st.top() <<" ";
//         st.pop();
//     }
//     return 0;
// }

// // one more program using STL STACK
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> st;

//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

//     cout<<st.top()<<endl;

//     st.pop();
//     cout<<st.top()<<endl;

//     cout<<st.size()<<endl;

//     while (!st.empty())
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }

//     return 0;
// }

// // QUEUE
// #include<iostream>
// using namespace std;
// const int SIZE = 10;
// class Queue{
//     private:
//     int front = -1;
//     int rear = -1;
//     int queue[SIZE];

//     public:
//     void enqueue(int value){
//     if(rear == SIZE-1){
//         cout<<"Queue OverFlow";
//         return;
//     }

//     if(front == -1){
//         front = 0;
//         rear = 0;
//     }
//     else{
//         rear++;
//     }

//     queue[rear] = value;
//     }

//     void dequeue(){
//         if(front == -1){
//             cout<<"Queue UnderFlow";
//             return;
//         }
        
//         if(front == rear){
//             front=-1;
//             rear=-1;
//         }
//         else{
//             front++;
//         }
//     }

//     int frontElement(){
//         if(front == -1){
//             cout<<endl<<"Queue is empty";
//             return -1;
//         }
//         else{
//             return queue[front];
//         }
//     }

//     // bool isEmpty(){
//     //     if (front == -1)
//     //     {
//     //         return true;
//     //     }
//     //     else{
//     //         return false;
//     //     }
//     // }

//     bool isEmpty(){
//         return front == -1;
//     }

//     // bool isFull(){
//     //     if (front == 0 && rear == SIZE - 1)
//     //     {
//     //         return true;
//     //     }
//     //     else{
//     //         return false;
//     //     } 
//     // }

//     bool isFull(){
//         return front == 0 && rear == SIZE - 1;
//     }

//     void display(){
//         if(front == -1){
//             cout<<"Queue is Empty";
//             return;
//         }

//         for(int i = front; i <= rear; i++){
//             cout<<queue[i]<<" ";
//         }
//     }
// };

// int main(){
//     Queue q;

//     cout<<q.isEmpty()<<endl;
//     cout<<q.isFull()<<endl;

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.display();
//     cout<<endl;

//     q.dequeue();
//     q.display();
//     cout<<endl<<q.frontElement()<<endl;

//     cout<<q.isEmpty()<<endl;
//     cout<<q.isFull()<<endl;

//     return 0;
// }

// // CIRCULAR QUEUE
// #include<iostream>
// using namespace std;
// const int SIZE = 10;
// class Queue{
//     private:
//     int front = -1;
//     int rear = -1;
//     int queue[SIZE];

//     public:
//     bool isFull(){
//         return (rear + 1) % SIZE == front;
//     }

//     bool isEmpty(){
//         return front == -1;
//     }

//     void enqueue(int value){
//         if(isFull()){
//             cout<<"Queue OverFlow";
//             return;
//         }
        
//         if(isEmpty()){
//             front = 0;
//             rear = 0;
//         }
//         else{
//             rear = (rear + 1) % SIZE;
//         }
//         queue[rear] = value;
//     }

    // void dequeue(){
    //     if(isEmpty()){
    //         cout<<"Queue UnderFlow";
    //         return;
    //     }

    //     if(front == rear){
    //         front = -1;
    //         rear = -1;
    //     }
    //     else{
    //         front = (front + 1) % SIZE;
    //     }
    // }

//     int frontElement(){
//         if(isEmpty()){
//             cout<<"Queue is Empty";
//             return -1;
//         }
//         else{
//             return queue[front];
//         }
//     }

//     void display(){
//         if (isEmpty()){
//             cout<<"QUEUE is Empty"<<endl;
//             return;
//         }

//         int i = front;

//         while (true){
//             cout<<queue[i]<<" ";

//             if(i == rear)
//                 break;

//             i = (i + 1) % SIZE;
//         }
//     }
// };

// int main(){
//     Queue q;

//     cout<<q.isEmpty()<<endl;
//     cout<<q.isFull()<<endl;

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.display();
//     cout<<endl;

//     q.dequeue();
//     q.display();
//     cout<<endl<<q.frontElement()<<endl;

//     cout<<q.isEmpty()<<endl;
//     cout<<q.isFull()<<endl;

//     return 0;
// } 

// // QUEUE LINKED LIST
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };

// class Queue{
//     private:
//     Node* front;
//     Node* rear;
//     public:
//     Queue(){
//         front = nullptr;
//         rear = nullptr;
//     }

//     bool isEmpty(){
//         return front == nullptr;
//     }

//     void enqueue(int value){
//         Node* newNode = new Node();
//         newNode -> data = value;
//         newNode -> next = nullptr;

//         if (isEmpty())
//         {
//             front = newNode;
//             rear = newNode;
//         }
//         else{
//             rear -> next = newNode;
//             rear = newNode;
//         }
//     }

//     void dequeue(){
//         if(isEmpty()){
//             cout<<"QUEUE UnderFlow"<<endl;
//             return;
//         }

//         if(front == rear){
//             delete front;
//             front = nullptr;
//             rear = nullptr;
//         }
//         else{
//             Node* temp = front;
//             front = front -> next;
//             delete temp;
//         }
//     }

//     int frontElement(){
//         if(isEmpty()){
//             cout<<"QUEUE is Empty"<<endl;
//             return -1;
//         }
//         else{
//             return front->data;
//         }
//     }

//     void display(){
//         Node* temp = front;

//         while (temp != nullptr)
//         {
//             cout<<temp->data<<" ";
//             temp = temp -> next;
//         } 
//     }
// };

// int main(){
//     Queue q;

//     cout<<q.isEmpty()<<endl;

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.display();
//     cout<<endl;

//     q.dequeue();
//     q.display();
//     cout<<endl<<q.frontElement()<<endl;

//     cout<<q.isEmpty()<<endl;

//     return 0;
// }

// // STL Queue
// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
    
//     q.pop();
//     cout<<q.front()<<endl;

//     while(!q.empty())
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
    
//     return 0;
// }

// // STL Dequeue
// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){
//     deque<int> dq;

//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_front(5);
//     dq.push_back(30);

//     cout<<dq.front()<<endl;
//     cout<<dq.back()<<endl;

//     dq.pop_front();
//     dq.pop_back();

//     while (!dq.empty())
//     {
//         cout<<dq.front()<<" ";
//         dq.pop_front();
//     }
    
//     return 0;
// }

// // TREE
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* leftChild;
//     Node* rightChild;
// };

// int main(){
//     Node* root = new Node;
//     root -> leftChild = nullptr;
//     root -> rightChild = nullptr;

//     Node* child1 = new Node;
//     Node* child2 = new Node;

//     root -> leftChild = child1;
//     root -> rightChild = child2;

//     root -> data = 100;
//     child1 -> data = 40;
//     child2 -> data = 60;

//     return 0;
// }

// Traversal of nodes of TREE (all types of Traversal)
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

    void inorder(Node* root){
        if(root == nullptr)
            return;

        inorder(root -> left);
        cout << root -> data <<" ";
        inorder(root -> right);
    }

    void preorder(Node* root){
        if(root == nullptr)
            return;

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(Node* root){
        if(root == nullptr)
            return;

        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

    int height(Node* root){
        if(root == nullptr)
            return -1;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return max(leftHeight, rightHeight) + 1;
    }

    void levelorder(Node* root){

        if(root == nullptr)
            return;
        
        queue<Node*> q;
        q.push(root);

        while (!q.empty())
        {
            Node* current = q.front();
            q.pop();

            cout<<current -> data<<" ";

            if(current->left != nullptr)
                q.push(current->left);

            if(current->right != nullptr)
                q.push(current->right);
        }
    }

    int countNodes(Node* root){
        if (root==nullptr){
            return 0;
        }

        int leftNodes = countNodes(root->left);
        int rightNodes = countNodes(root->right);

        return leftNodes + rightNodes +1;
    }

    int sumNodes(Node* root){
        if (root==nullptr){
            return 0;
        }

        int leftsum = sumNodes(root->left);
        int rightsum = sumNodes(root->right);
        
        return leftsum + rightsum + root->data;
    }

    int countLeafNode(Node* root){
        if(root == nullptr){
            return 0;
        }
        if(root->left==nullptr && root->right==nullptr){
            return 1;
        }
        int left = countLeafNode(root->left);
        int right = countLeafNode(root->right);

        return left + right;
    }

    int countNonLeafNode(Node* root){
        if(root == nullptr){
            return 0;
        }
        if(root->left==nullptr && root->right==nullptr){
            return 0;
        }

        int left = countNonLeafNode(root->left);
        int right = countNonLeafNode(root->right);

        return left + right + 1;
    }

    int countSingleChildNode(Node* root){
        if(root == nullptr){
            return 0;
        }

        int left = countSingleChildNode(root->left);
        int right = countSingleChildNode(root->right);

        if((root->left != nullptr && root->right == nullptr) || (root->left == nullptr && root->right != nullptr)){
            return left + right + 1;
        }

        return left + right;
    }

    int diameter(Node* root, int &dia){
        if(root == nullptr){
            return -1;
        }

        int leftHeight = diameter(root->left, dia);
        int rightHeight = diameter(root->right, dia);

        dia = max(dia, leftHeight + rightHeight + 2);

        return 1 + max(leftHeight, rightHeight);
    }

    int isBalanced(Node* root, bool &balanced){
        if(root == nullptr){
            return -1;
        }

        int leftHeight = isBalanced(root->left, balanced);
        int rightHeight = isBalanced(root->right, balanced);

        if(abs(leftHeight - rightHeight) > 1){
            balanced = false;
        }

        return 1 + max(leftHeight, rightHeight);
    }

    bool identical(Node* root1, Node* root2){
        if (root1 == nullptr && root2 == nullptr){
            return true;
        }
        else if ((root1 == nullptr && root2 != nullptr) || (root1 != nullptr && root2 == nullptr)){
            return false;
        }
        
        bool left = identical(root1->left, root2->left);
        bool right = identical(root1->right, root2->right);

        return (root1->data == root2->data) && left && right;
    }

    void mirror(Node* root){
        if(root == nullptr)
            return;

        swap(root->left, root->right);

        mirror(root->left);
        mirror(root->right);
    }

    Node* lca(Node* root, Node* p, Node* q){
        if(root == nullptr)
            return nullptr;

        if(root == p || root == q)
            return root;

        Node* left = lca(root->left, p, q);
        Node* right = lca(root->right, p, q);

        if(left != nullptr && right != nullptr)
            return root;

        if(left != nullptr)
            return left;

        return right;

    }

    // int diameter(Node* root){
    //     if(root == nullptr)
    //         return 0;

    //     int leftHeight = height(root->left);
    //     int rightHeight = height(root->right);

    //     int currentDiameter = leftHeight + rightHeight + 2;

    //     int leftDiameter = diameter(root->left);
    //     int rightDiameter = diameter(root->right);

    //     return max(currentDiameter,
    //            max(leftDiameter, roightDiameter));
    // }

int main(){
    Node* root = new Node(100);

    root -> left = new Node(200);
    root -> right = new Node(300);
 
    root -> left -> left = new Node(400);
    root -> left -> right = new Node(500);

    root -> right -> left = new Node(600); 
    root -> right -> right = new Node(700);

    root ->left ->left ->left = new Node(800);

    Node* root1= new Node(10);

    root1 -> left = new Node(20);
    root1 -> right = new Node(30);

    root1 -> left -> left = new Node(40);
    root1 -> left -> right = new Node(50);

    Node* root2 = new Node(10);

    root2 -> left = new Node(20);
    root2 -> right = new Node(30);

    root2 -> left -> left = new Node(40);
    root2 -> left -> right = new Node(50);

    cout<<"Before Mirroring the Tree: "<<endl;
 
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    levelorder(root);
    cout<<endl;

    // cout<<endl<<height(root)<<endl;
    // cout<<countNodes(root)<<endl;
    // cout<<sumNodes(root)<<endl;
    // cout<<sumNodes(root)<<endl;
    // cout<<"No. of Leaf Nodes are "<<countLeafNode(root)<<endl;
    // cout<<"No. of Non-Leaf Nodes are "<<countNonLeafNode(root)<<endl;
    // cout<<"No. of Single Child Nodes is/are "<<countSingleChildNode(root)<<endl;

    // int dia = 0;
    // diameter(root, dia);
    // cout<<"Diameter is "<<dia<<endl;

    // bool balanced = true;
    // isBalanced(root, balanced);
    // cout<<balanced<<endl;

    // cout<<identical(root1, root2)<<endl;

    cout<<"After Mirroring the Tree: "<<endl;

    mirror(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    levelorder(root);
    cout<<endl;

    return 0;
}



// 🌟 This is the Recursive Template
// Almost every Binary Tree recursive problem follows this pattern:
// ReturnType function(Node* root){

//     if(root == nullptr)
//         return BASE_VALUE;

//     auto left = function(root->left);
//     auto right = function(root->right);

//     return COMBINE(left, right, root);
// }

