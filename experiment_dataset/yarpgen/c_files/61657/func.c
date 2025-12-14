/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61657
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) arr_0 [(signed char)4]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            arr_5 [(unsigned char)7] [i_1] [(_Bool)0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_1 [(short)3] [(short)3]));
            arr_6 [i_1] [i_1 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)225)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */short) arr_7 [i_1] [i_0 + 2] [i_0] [i_1]);
                            var_13 = ((/* implicit */_Bool) ((int) (-(var_9))));
                            arr_17 [i_4] [i_4] [(unsigned char)6] [i_4] [i_4] [i_1] [i_4] = arr_10 [i_0 - 1] [i_0 - 1];
                            arr_18 [i_4] [9] [i_4] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [2ULL] [0] [i_3])) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_2 + 2])) : (((((/* implicit */_Bool) arr_13 [i_0] [(signed char)3])) ? (((/* implicit */int) arr_8 [i_0] [1LL])) : (((/* implicit */int) arr_9 [i_1] [i_2 + 1] [i_3] [i_4]))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(unsigned short)11] [i_0] [i_0] [i_0 - 2] [i_1 - 2])) ? (var_0) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [(unsigned char)0] [0ULL] [i_0 + 2] [i_1 + 1])))))));
            }
            for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                var_15 = ((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_1] [i_5] [i_1] [i_1]));
                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                var_17 = ((/* implicit */unsigned char) arr_12 [i_1] [i_1] [i_1] [i_1]);
                var_18 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [(signed char)14]);
                var_19 = ((/* implicit */short) arr_16 [i_5 + 1] [i_1] [8LL] [i_1 - 2] [(unsigned char)3] [i_0] [i_0]);
            }
        }
        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)225))));
    }
    var_21 = ((/* implicit */int) ((short) var_9));
}
