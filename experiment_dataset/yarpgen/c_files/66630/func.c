/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66630
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_7))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((signed char) 288229593U));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_3 [i_0 - 1] [i_0] [i_0])))));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_2 [i_0 - 1]));
                var_17 = ((/* implicit */unsigned int) min((var_17), ((-(4006737702U)))));
                var_18 = ((/* implicit */int) var_12);
                var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) ^ ((+(8036459460104050649ULL)))));
            }
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) var_8);
                arr_13 [i_3] [i_1] [i_0] = 4006737702U;
            }
            arr_14 [i_1] = var_9;
        }
        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            arr_18 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((int) var_1));
            arr_19 [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4006737719U)))))));
            arr_20 [i_0] [i_0] &= ((/* implicit */signed char) ((int) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
            var_21 = (~(arr_4 [i_0 - 1]));
        }
        var_22 = ((/* implicit */long long int) 1800660592U);
    }
    var_23 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((var_12), (var_4)))) ? (4006737703U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)12121)) % (((/* implicit */int) (signed char)66)))))))));
}
