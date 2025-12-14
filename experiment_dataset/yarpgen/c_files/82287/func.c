/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82287
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
    var_14 = ((((/* implicit */int) var_6)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)10)))))))));
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)246))))) * (((((/* implicit */_Bool) 996258345U)) ? (996258355U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64797))))))))));
                            var_17 = (unsigned short)64809;
                            arr_11 [(short)8] [i_1 + 1] [i_2] [i_3] [i_4] &= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_1 + 1] [(unsigned char)12])) ? (((/* implicit */int) arr_0 [12U] [i_0])) : (((/* implicit */int) arr_10 [i_4] [i_1] [i_4] [i_3] [i_3]))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [(unsigned char)17])) && (((/* implicit */_Bool) arr_2 [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_4] [i_4])) : (((/* implicit */int) arr_0 [i_4] [i_4 + 1]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    var_20 -= ((/* implicit */unsigned char) 3298708940U);
                    var_21 = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2] [i_0]);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [(signed char)10] [i_0] [i_0])) != (((/* implicit */int) (unsigned short)8533))))) >> (((((/* implicit */_Bool) arr_13 [(unsigned char)15] [(unsigned char)15] [i_2] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_5]))))));
                    var_23 = ((/* implicit */unsigned short) (+((+(0U)))));
                }
            }
            arr_14 [2] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)71)) || (((/* implicit */_Bool) (unsigned char)185))))))))));
        }
        var_24 = ((/* implicit */signed char) (unsigned char)10);
    }
}
