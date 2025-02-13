 #include <iostream>
        #include <vector>

        using namespace std; 
        
        void printMemVec(const vector<int>& vec ){
            printf("Vector every int is %lu bytes\n", sizeof(vec[0])); 
            for( size_t i = 0; i < vec.size(); i++) {printf("Value: %i at Mem loc: %p\n", vec[i], &vec[i]);}

        }

        void incVecBy10(vector<int>& vec ){
            for (size_t i = 0; i < vec.size(); i++){
                vec[i]+=10; 
            }


        }

        int main () {
            const int size = 5; 
            vector<int> vec(size); 

            for (int i = 0; i < size; i++) {
                vec[i] = 100 + i; 
            }

        printf("Before increment----------\n"); 
        printMemVec(vec);

        incVecBy10(vec); 

        printf("After increment-----------\n"); 
        printMemVec(vec); 

        if (!vec.empty()) {

            vec.pop_back(); 
        }


        printf("After pop----------\n"); 
        printMemVec(vec); 

        vec.push_back(999); 


        printf("After Push-----------\n"); 
        printMemVec(vec); 

        return 0; 
        }



