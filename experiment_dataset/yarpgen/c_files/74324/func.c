/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74324
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
    var_18 = ((/* implicit */unsigned long long int) ((short) 8813050180020247536ULL));
    var_19 = ((/* implicit */_Bool) var_10);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_10))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [4U] = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_0])), ((+(min((((/* implicit */long long int) (unsigned char)0)), (9223372036854775807LL)))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        var_21 &= ((/* implicit */unsigned long long int) 903408774);
                        var_22 = (-(((/* implicit */int) max(((unsigned char)164), (((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_3 + 3] [i_3 + 2]))))));
                        var_23 |= ((/* implicit */signed char) max((((/* implicit */int) var_14)), (max(((-(((/* implicit */int) (unsigned char)30)))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) (unsigned char)92)))))))));
                        arr_12 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((arr_4 [i_0]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_3 + 1])))))));
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_15 [(unsigned char)7] [i_1] [i_1] [i_1] [i_1]))) * (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), (arr_11 [i_2]))))))))));
                        arr_16 [10LL] [i_0] [i_1] [i_2] [i_4] [i_4] = max((((((min((arr_6 [i_4] [i_2] [i_0]), (((/* implicit */int) (unsigned char)146)))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)2912)))) - (2895))))), (((/* implicit */int) ((_Bool) (~(559047906U))))));
                        arr_17 [i_0] [i_0] [i_1] [10LL] [i_4] [21] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) arr_0 [i_4]))), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [i_4])), (arr_0 [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 22; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [5ULL] [i_1] [i_2] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) > (arr_18 [i_0] [i_1] [i_1] [(unsigned char)5] [(unsigned char)5] [i_5 - 4]))))) : (arr_7 [3ULL])));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)30)) ? (((/* implicit */int) arr_15 [i_5 + 1] [i_0] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_18 [i_1] [i_1] [i_1] [i_5 - 2] [i_0] [(unsigned char)8])) % (31U)));
                        var_27 = ((/* implicit */unsigned short) (_Bool)1);
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (short)-25))));
                    }
                }
            } 
        } 
    } 
}
