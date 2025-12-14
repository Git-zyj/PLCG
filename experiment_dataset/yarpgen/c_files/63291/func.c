/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63291
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((var_7), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)4)))) >> (((/* implicit */int) ((unsigned char) var_5))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) 11ULL))) ? (((arr_4 [i_1]) + (((/* implicit */long long int) arr_2 [i_0] [i_1])))) : (((/* implicit */long long int) arr_2 [i_1] [15])))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_11 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_2] [i_2] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) ? (((((/* implicit */unsigned long long int) arr_8 [(unsigned short)6] [i_1] [i_1] [i_1])) - (arr_0 [i_0]))) : (((7ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
                    var_17 = ((/* implicit */unsigned long long int) (unsigned short)3);
                }
                arr_12 [i_1] [i_0] [i_0] |= ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_0]);
                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */int) (!(arr_7 [i_0] [i_0])));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) 19U)) ? (9223372036837998592LL) : (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) var_3))));
    var_19 ^= ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (((((/* implicit */int) var_10)) * (((/* implicit */int) var_4))))));
}
