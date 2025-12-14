/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6456
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
    var_10 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) var_3);
        var_11 = var_1;
        var_12 = ((/* implicit */long long int) ((int) arr_1 [i_0 - 2] [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) - (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) 8388607))))))) ? (((((/* implicit */_Bool) 8388604)) ? (var_4) : (min((((/* implicit */int) arr_2 [i_1])), (-8388588))))) : ((~(((/* implicit */int) arr_2 [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))))) ? (((/* implicit */int) arr_7 [(signed char)8] [i_1])) : (8388576)));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (unsigned char)0))));
                        var_15 = ((/* implicit */long long int) var_2);
                        arr_15 [(signed char)4] [i_2] [7] [(signed char)4] [7] [i_4] = ((/* implicit */unsigned char) var_1);
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            arr_19 [i_1] [(short)4] [i_3] [i_4] [i_5] &= ((/* implicit */unsigned long long int) (((!(min((var_8), (var_8))))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) ((signed char) (short)3))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_3] [i_4]))))) : (((arr_16 [i_1] [i_2] [i_3] [i_4] [(_Bool)1] [(unsigned short)11] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21))) : (-9113346686128741503LL)))))));
                            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_9 [i_2]), (((/* implicit */short) var_5)))))));
                            var_17 &= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_7 [i_2] [i_4]))))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_23 [i_1] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_1] [i_2] [i_1] [i_4] [i_6] [i_4] [i_3]))));
                            var_18 = ((/* implicit */short) arr_16 [i_1] [i_2] [i_3] [i_1] [i_1] [i_3] [(short)6]);
                            arr_24 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) arr_7 [i_2] [i_6]);
                            arr_25 [i_1] [i_2] [i_3] [i_3] [i_1] [i_2] [i_2] = ((/* implicit */short) var_3);
                        }
                    }
                } 
            } 
            arr_26 [i_1] [i_2] = ((/* implicit */unsigned short) -8388577);
            var_19 = ((/* implicit */int) ((unsigned short) ((((9113346686128741503LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((short) (unsigned char)148))) ? (((((/* implicit */unsigned long long int) var_0)) + (arr_13 [i_1] [i_1] [i_1] [i_2] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9113346686128741489LL)) ? (((/* implicit */int) arr_9 [(_Bool)1])) : (((/* implicit */int) var_1))))))))));
        }
        arr_27 [3ULL] [3ULL] = ((/* implicit */unsigned int) arr_7 [i_1] [i_1]);
        var_21 += ((/* implicit */_Bool) ((((/* implicit */int) (signed char)116)) & (((/* implicit */int) (signed char)100))));
    }
    var_22 = var_2;
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)101)) ? (var_4) : (8388576))))))));
}
