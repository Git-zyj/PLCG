/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95488
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
    var_16 = min((var_2), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29904))) <= (var_10)))), (var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0])) >> (((/* implicit */int) (!(var_0))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] [(signed char)3] [i_0] = arr_0 [i_0];
                        arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((arr_11 [i_0] [i_1] [i_2 - 2] [i_2 - 2]), (((/* implicit */unsigned long long int) var_7)))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_2 - 2] [i_0])))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) / (max((arr_11 [i_0] [(short)6] [i_2 + 2] [i_0]), (((/* implicit */unsigned long long int) var_11)))))) : (((((/* implicit */unsigned long long int) arr_1 [(short)17] [i_0])) * (arr_11 [i_0] [i_1] [i_2 - 1] [i_2])))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 2; i_4 < 20; i_4 += 4) 
                    {
                        arr_17 [13LL] [i_0] [i_2] [i_2 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) && (((/* implicit */_Bool) arr_16 [i_2 + 1] [i_0] [i_4] [i_4] [i_4]))));
                        arr_18 [i_0] [19ULL] [i_2 + 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 4]))) | (var_5)));
                    }
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_22 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) 2756995718U)), (min((((/* implicit */long long int) 2756995732U)), (max((((/* implicit */long long int) arr_20 [(unsigned char)15] [i_1] [(short)20] [i_5] [i_5])), (arr_19 [i_0] [i_1] [i_0] [i_5])))))));
                        arr_23 [(unsigned char)12] [i_0] [i_2] = ((/* implicit */unsigned short) arr_21 [i_5] [i_0] [i_2] [i_1] [i_1] [i_0]);
                        arr_24 [2LL] [2LL] [i_1] [i_0] [i_5] = ((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((long long int) var_9));
}
