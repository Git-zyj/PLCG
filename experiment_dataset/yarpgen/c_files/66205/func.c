/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66205
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */_Bool) var_9);
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_8)))))) ^ (var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))) * (3081514597U)));
                                var_13 = ((/* implicit */unsigned char) max((max((min((3418087021939260401LL), (((/* implicit */long long int) (unsigned short)14437)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)43683))))))), (5845171810366174837LL)));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)73))));
                    arr_14 [i_0] [10] [i_2 + 1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 3695809397289292634LL)) ? (arr_2 [i_1 - 1] [i_1 + 1]) : (arr_2 [i_1 + 1] [i_1 - 1]))), (((/* implicit */int) ((((/* implicit */_Bool) 3081514597U)) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) > (2840185412U))))))));
                    var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2 + 1])) - (((/* implicit */int) arr_3 [i_1 + 1]))))), (var_5)));
                    var_16 &= ((/* implicit */unsigned long long int) (signed char)122);
                }
            } 
        } 
    } 
}
