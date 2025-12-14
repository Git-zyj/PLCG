/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69399
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((long long int) ((unsigned int) (signed char)-98)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_13 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)19939))));
                    arr_10 [23U] [i_1] = ((/* implicit */unsigned int) var_2);
                }
                for (long long int i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    arr_15 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */int) arr_3 [i_0]);
                    var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [i_1] [i_1] [12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) : (var_1)))));
                    var_15 = ((/* implicit */short) var_0);
                    var_16 = ((/* implicit */unsigned int) ((((long long int) (signed char)-109)) >= (((/* implicit */long long int) (-(arr_14 [12U] [i_3 + 4] [i_3] [i_3]))))));
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_4 [i_3 + 3] [i_3 - 3]) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), ((-(((unsigned long long int) var_3))))));
                }
                var_17 = ((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)-119))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((var_10) | ((-(var_12)))));
    var_19 = ((/* implicit */short) var_2);
    var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) -1725854734)) / (max((2088960U), (((/* implicit */unsigned int) var_4))))))));
}
