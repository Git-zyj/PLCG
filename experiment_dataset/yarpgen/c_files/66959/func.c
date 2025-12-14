/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66959
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) var_6)), (((unsigned int) 63U)))));
                var_19 *= ((/* implicit */short) ((unsigned int) max((min((arr_3 [i_0] [i_1] [i_1]), ((signed char)27))), (arr_2 [i_1 + 1] [i_1 - 1]))));
                var_20 = ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_16);
    var_22 |= ((/* implicit */int) min((max((min((((/* implicit */unsigned int) (unsigned char)64)), (1244236888U))), (max((((/* implicit */unsigned int) var_2)), (4294967233U))))), (min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) -301163933)) : (4294967249U))), ((-(4294967233U)))))));
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_10 [i_2] [i_2] = ((int) max((var_7), (((/* implicit */unsigned long long int) arr_7 [11U]))));
        arr_11 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65535))));
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) var_3))))))), (var_8)));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) ((signed char) (unsigned char)64)))), (var_6))))));
    }
    var_25 = ((/* implicit */int) max((((/* implicit */long long int) var_1)), (max((((long long int) var_10)), (((/* implicit */long long int) var_5))))));
}
