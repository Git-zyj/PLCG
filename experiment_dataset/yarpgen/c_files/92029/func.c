/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92029
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
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)21)))));
        var_19 = ((unsigned long long int) min((arr_1 [i_0 + 1]), (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2]))));
        arr_4 [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0 + 1]))))) * (min((arr_0 [i_0 + 1]), (18446744073709551615ULL)))));
    }
    var_20 |= ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned int) var_16))));
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_7))))))) & (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)22)) != (((/* implicit */int) (unsigned char)22)))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)156)))))))));
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (long long int i_2 = 4; i_2 < 12; i_2 += 3) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */int) ((long long int) max((arr_9 [3ULL]), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)255)), (var_16)))))));
                        var_23 = ((/* implicit */unsigned char) arr_13 [i_1] [i_4] [i_3] [i_4] [i_1]);
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */int) var_2);
                        var_25 = ((/* implicit */unsigned short) arr_11 [i_1] [i_2 + 1] [i_3] [i_5]);
                    }
                    var_26 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_13 [(_Bool)1] [i_2] [i_2 + 1] [i_1] [i_1])) : (arr_10 [i_1] [i_2] [i_1]))), (((/* implicit */unsigned long long int) arr_11 [i_2] [i_3] [i_3] [i_3 - 1]))))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) min((((((/* implicit */int) arr_15 [i_2] [i_2 - 1] [i_3 - 1] [i_3 - 1])) ^ (((/* implicit */int) arr_15 [i_2] [i_2 - 2] [i_3 - 1] [i_3 - 1])))), ((+(((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_3])))))))));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min(((-(arr_10 [(short)0] [(short)0] [i_3 - 1]))), (((arr_6 [i_2 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                arr_24 [(short)8] [i_6] [i_3] [(short)8] [(short)8] |= ((/* implicit */short) (signed char)72);
                                arr_25 [i_1] [2LL] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_1] [i_2 - 4] [i_2 - 4] [0] [(short)12] [i_2]))))) % (((arr_21 [i_7] [i_2] [i_3] [i_7] [i_7] [i_1] [i_6 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_14 [(_Bool)1] [i_2] [i_3] [12LL] [10LL] [i_1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
