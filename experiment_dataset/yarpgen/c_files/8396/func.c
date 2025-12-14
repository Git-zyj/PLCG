/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8396
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */signed char) var_7);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned char) var_10);
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) -16)) ? (-7) : (((/* implicit */int) (short)-32767)))) : (min((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (signed char)-49)))), (((arr_2 [i_0]) << (((((((/* implicit */int) var_8)) + (8664))) - (1)))))))));
                    arr_6 [i_0] [i_1] [i_2] |= ((/* implicit */signed char) max((arr_4 [i_1]), (((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0]) : (arr_4 [i_1])))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((/* implicit */signed char) min((((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_7)))) - (((/* implicit */int) var_1)))), (((/* implicit */int) var_9))));
}
