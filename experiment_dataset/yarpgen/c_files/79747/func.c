/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79747
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))) : (1860330897U)));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (~((+((-(((/* implicit */int) arr_8 [i_3] [i_0] [i_1]))))))));
                                arr_14 [i_0] [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        for (long long int i_7 = 2; i_7 < 14; i_7 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) max((arr_9 [i_7 + 1] [i_1] [i_5] [i_5] [i_7] [i_6 + 2]), (((/* implicit */unsigned int) (short)-30962))))), (max((((arr_12 [i_6] [i_1] [i_5] [i_6] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_7]))))), (((/* implicit */long long int) arr_3 [i_0]))))));
                                var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)185))));
                                var_17 = ((/* implicit */unsigned long long int) ((((arr_15 [i_5 + 2] [i_5] [i_6 - 1] [i_6]) > (arr_15 [i_5 + 2] [i_5] [i_6 - 1] [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_7] [i_5] [i_1])) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)56))))))) : (arr_9 [i_7] [i_6] [i_5] [i_1] [i_0] [i_0])));
                                var_18 += ((/* implicit */short) 1152921504606846960LL);
                            }
                        } 
                    } 
                } 
                arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) (short)-30962)) && (((/* implicit */_Bool) (unsigned char)63))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_13)), ((unsigned char)189)))) : (((((/* implicit */_Bool) 2512393311006564976ULL)) ? (((/* implicit */int) (short)-30979)) : (((/* implicit */int) var_13))))))));
}
