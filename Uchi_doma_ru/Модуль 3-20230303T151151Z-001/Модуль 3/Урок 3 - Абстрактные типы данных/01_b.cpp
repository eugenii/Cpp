#include <iostream>
using namespace std;

struct Summ {
   public:
      void add_price(double price) {
         total += price;
      }
      double getTotal() {
         return total;
      };
   private:
      double total=0;
};
int main() {
   Summ a;
   double x;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       a.add_price(x);
   }
   cout << "Total price:" << a.getTotal() <<endl;
   return 0;
}
