/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58599
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
    var_12 = ((/* implicit */unsigned long long int) ((short) var_8));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) (+(max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0]))))));
                var_14 ^= ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) arr_2 [i_1]))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) arr_1 [(_Bool)1] [(_Bool)1])), (2700869982U))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0] [i_0]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
        {
            {
                arr_13 [i_3] &= ((/* implicit */int) arr_7 [i_2]);
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_3 - 1]), (arr_7 [i_3 - 1])))) ? ((+(max((((/* implicit */unsigned int) var_11)), (arr_4 [i_2] [i_2]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_22 [i_5] [8ULL] [i_3 + 1] [i_4] [i_3 + 1] [6ULL] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) 1603554453017299451LL))) / (((/* implicit */int) arr_18 [i_3 - 2] [3U] [i_3 - 2] [3U]))));
                                arr_23 [i_2] [i_2] [i_5] [i_5] [i_5] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((865722333U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)74))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(unsigned char)8] [i_2]))));
                    arr_24 [i_4 + 1] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                }
                for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((int) arr_1 [i_3 - 2] [i_3 - 3])) & (((/* implicit */int) ((_Bool) arr_17 [i_7] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 2])))));
                    arr_27 [i_7] = (((-(((/* implicit */int) arr_1 [3LL] [i_3 - 2])))) < (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_0 [i_3 - 3]))))));
                    var_18 = ((/* implicit */unsigned long long int) (+(((1620351665) ^ (((/* implicit */int) arr_3 [i_2] [i_2]))))));
                    var_19 = ((/* implicit */long long int) arr_8 [4U]);
                    var_20 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0)))))))));
                }
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    arr_30 [i_2] [i_3] [i_3] [i_8] = ((/* implicit */short) arr_0 [i_3 - 3]);
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                        var_22 = ((/* implicit */unsigned char) max((arr_29 [i_3] [(short)0] [i_9]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_4 [i_2] [i_8]))))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        arr_36 [i_2] [i_3] [i_8] [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) var_0);
                        var_23 = ((/* implicit */unsigned long long int) ((long long int) 0ULL));
                        arr_37 [i_8] [i_8] [i_10] = ((unsigned long long int) max((((unsigned long long int) (short)-50)), (((/* implicit */unsigned long long int) var_6))));
                        var_24 = ((/* implicit */unsigned char) var_10);
                    }
                }
                arr_38 [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_9 [i_3 - 1])) ? (arr_9 [i_3 - 1]) : (arr_9 [i_3 - 2]))), (((((/* implicit */_Bool) arr_9 [i_3 - 2])) ? (arr_9 [i_3 - 3]) : (((/* implicit */unsigned long long int) var_0))))));
            }
        } 
    } 
}
