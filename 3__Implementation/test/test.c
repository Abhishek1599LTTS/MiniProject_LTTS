#include "calculator.h"
#include "unity.h"
#include "unity_internals.h"

int calculatesum(int totaldebit,int totalcredit){
        
        total_amount=totaldebit-totalcredit;
        return total_amount;
}

int providentfund2(int basicPay){
     
    employeeFund=(basicPay/100)*12.5;
    //employerFund=(basicPay/100)*12.0;
    return employeeFund;
    
}

void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{


}

void test_calculation(){
    TEST_ASSERT_EQUAL(calculatesum(5000,2000),3000);

}

void test_providentfund(){
    TEST_ASSERT_EQUAL(providentfund2(5000),625);

}

int main(){

     /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    
    
    /* Run Test functions */
    RUN_TEST(test_calculation);
    RUN_TEST(test_providentfund);

     /* Close the Unity Test Framework */
    return UNITY_END();
    return 0;
	

} 