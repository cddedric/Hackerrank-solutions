/*
https://www.hackerrank.com/challenges/classes-objects/
*/



// Write your Student class here
class Student{
    private:
        int scores[5];
        int sum=0;
    
    public:
        int calculateTotalScore(){
            return sum;
        }
        void input(){
            for (int i = 0; i<5; i++){
                cin >> scores[i];
                sum+=scores[i];
            }
        }
};

