/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99604
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
    var_17 ^= var_6;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3 - 1] [i_3] [(short)8] [i_4 + 2]))))), (max((arr_1 [i_4 + 3]), (arr_10 [i_2] [i_3 - 2] [i_2] [i_4 + 1] [i_4 + 1]))))))));
                                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_0] [i_4 - 1])), (var_8)))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)24320)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) (short)-28903)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] [i_0] = (signed char)-33;
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [15LL])) ? (var_0) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-28903))))))))))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_0] [i_1] [i_0])))))), (((min((var_1), (((/* implicit */unsigned long long int) var_5)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28903)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (var_9)));
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_13))));
}
