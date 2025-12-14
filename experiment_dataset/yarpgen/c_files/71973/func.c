/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71973
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [1LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (max((((4118153646564668567ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1))))))));
        arr_5 [i_0] = arr_1 [i_0];
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)6]))) : (min((((/* implicit */long long int) (unsigned char)29)), (var_7)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_20 += ((/* implicit */short) arr_13 [i_1] [i_4] [i_3] [i_4]);
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            arr_19 [i_4] [i_2] [i_2] [(unsigned char)6] [i_5] &= max((min((((((/* implicit */_Bool) arr_15 [0U] [i_1] [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) 2139095040U)) : (10164052701538056905ULL))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) arr_1 [i_1]))))))), (min((var_2), (((/* implicit */unsigned long long int) var_11)))));
                            arr_20 [i_2] [i_2] [i_3] [(short)2] [3U] [i_5] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_17 [i_1] [i_1] [i_3])), (((((/* implicit */_Bool) ((arr_18 [(unsigned char)10] [i_4] [(unsigned char)1] [(unsigned char)1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_1 [i_1]))))));
                            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned char)224), ((unsigned char)138))))));
                        }
                        for (short i_6 = 1; i_6 < 12; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_8)) ? (14236308116705397615ULL) : (arr_16 [i_6 + 1] [i_2] [i_2] [i_4] [i_6] [i_3] [i_2]))), (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3349186624U)), (var_17)))) : (min((var_2), (((/* implicit */unsigned long long int) var_11)))))))))));
                            arr_23 [i_4] &= ((max((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) 2145541774376680411LL)) : (4171725626278027401ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)50)) >> (((8282691372171494726ULL) - (8282691372171494705ULL)))))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_6 + 1] [i_6] [i_6 + 1] [i_4]))) + (min((((/* implicit */unsigned long long int) (short)-32751)), (9239496042451213093ULL))))) - (9239496042451213160ULL))));
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_15)))), (((/* implicit */int) min((((/* implicit */short) arr_14 [i_1] [i_1] [(unsigned char)4] [i_1])), (arr_7 [i_1] [i_1]))))))) : (min((((/* implicit */unsigned int) min(((unsigned char)59), (arr_22 [i_1] [i_1] [i_1] [i_1] [6LL])))), (arr_10 [i_1] [i_1] [i_1] [i_1]))))))));
        var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (short)25485)) : (((/* implicit */int) (unsigned char)157))))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_3);
}
