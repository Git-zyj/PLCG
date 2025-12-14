/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70484
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
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min(((unsigned char)31), ((unsigned char)31)));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 3])) ? (((/* implicit */int) var_15)) : (arr_1 [i_0] [i_0 - 3]))), ((~(((/* implicit */int) (unsigned char)35))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [15U] [i_0] [i_0] [i_2] [i_3] = (~(((/* implicit */int) (unsigned short)31944)));
                            arr_14 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3572215018U)) && (((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])))) ? (max((((((var_16) + (9223372036854775807LL))) << (((((((/* implicit */int) var_8)) + (88))) - (30))))), (((/* implicit */long long int) (unsigned char)31)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_4 + 3] [i_4 + 2] [(signed char)4] [i_4 + 2] [(signed char)13])) || (((/* implicit */_Bool) var_16))));
                                var_20 = ((/* implicit */unsigned short) arr_3 [i_4 - 1] [20U] [i_1 + 4]);
                            }
                            arr_17 [i_0] [i_2] [(unsigned short)5] [i_0] = ((/* implicit */unsigned short) arr_2 [(unsigned short)8] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
}
