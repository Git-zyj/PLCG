/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86676
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_2))));
    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) + (((/* implicit */int) ((short) var_2)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_0 - 1] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (arr_7 [i_3] [i_2] [i_2] [i_0]))))))));
                        var_15 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3 - 3] [i_0] [i_3 - 1] [i_3 + 1])) || (((/* implicit */_Bool) ((arr_7 [i_3] [i_0] [i_0] [i_0]) >> (((((/* implicit */int) var_3)) - (8381))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3 - 3] [i_0] [i_3 - 1] [i_3 + 1])) || (((/* implicit */_Bool) ((((arr_7 [i_3] [i_0] [i_0] [i_0]) + (2147483647))) >> (((((/* implicit */int) var_3)) - (8381)))))))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_3 [i_1]))));
                    }
                } 
            } 
            var_17 += ((/* implicit */short) ((unsigned char) arr_10 [i_0 + 1] [i_1] [i_0 - 1] [i_0 + 1]));
            arr_12 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_8 [i_0] [i_0]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))));
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_19 += ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_0))));
                    var_20 = ((((/* implicit */int) (short)16128)) != (((/* implicit */int) var_7)));
                }
                for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    var_21 = ((/* implicit */int) max((var_21), ((-((+(((/* implicit */int) (_Bool)1))))))));
                    arr_22 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */short) ((arr_0 [i_0 + 2] [i_0 - 1]) != (arr_0 [i_0 + 1] [i_0 + 1])));
                }
            }
            for (int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */unsigned char) var_11);
                            arr_30 [i_0] = ((/* implicit */int) ((short) arr_15 [i_0 - 1] [i_0]));
                            var_24 = ((/* implicit */unsigned short) (_Bool)1);
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_8] [i_9] [i_8] [i_4] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_6)))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_24 [i_8] [i_4])))))) > (arr_0 [i_0 + 2] [i_0 + 1])));
            }
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (_Bool)1))) == (arr_17 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0])));
        }
        arr_31 [i_0] = ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_7)));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        var_28 ^= ((/* implicit */int) ((unsigned long long int) (_Bool)1));
        arr_35 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_11] [i_11])) ? (((/* implicit */int) arr_33 [i_11] [i_11])) : (((/* implicit */int) arr_33 [i_11] [i_11]))));
        var_29 ^= ((arr_34 [i_11] [i_11]) - (arr_34 [i_11] [i_11]));
        arr_36 [i_11] [i_11] = (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) arr_33 [i_11] [i_11])));
        var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((825432661) | (((/* implicit */int) (_Bool)1)))))));
    }
    var_31 = (-(((/* implicit */int) var_7)));
}
