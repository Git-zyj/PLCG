/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5545
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((unsigned int) arr_0 [i_0]);
                var_20 = var_3;
                var_21 -= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_17)))) - ((-(var_10)))));
                arr_5 [i_0] [4] [(unsigned char)6] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_0]);
                var_22 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((var_13) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (18446744073709551601ULL))), (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_18 [i_3] [i_3] [i_4] [i_3] [(unsigned short)6] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) == (((((/* implicit */_Bool) var_17)) ? (arr_17 [i_6] [i_6 + 2] [i_6] [i_6 + 2] [i_6]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                                arr_19 [i_2] [i_2] [i_4] [i_5] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-100))) + (2233785415175766016LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) var_10);
}
