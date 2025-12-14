/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85741
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
    var_16 = ((((/* implicit */_Bool) var_11)) ? (((unsigned int) var_6)) : ((+(((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    var_17 = ((int) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = arr_0 [i_0];
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_5 [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) arr_3 [(short)8])) >= (((/* implicit */int) arr_1 [i_0] [i_0]))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1]))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_20 *= ((/* implicit */short) ((_Bool) arr_2 [i_0]));
                            arr_13 [i_0] [1U] [i_2] [i_3] [i_3] |= ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) var_4)));
                            arr_14 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) 1069547520)) ? (arr_4 [i_4] [(_Bool)1] [(_Bool)1]) : (arr_4 [i_1] [i_1] [i_1])));
                            var_21 = ((/* implicit */_Bool) arr_9 [i_4] [i_0] [i_2] [i_1] [i_0]);
                            arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            var_22 = ((/* implicit */_Bool) (~((-(arr_2 [i_5])))));
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_25 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_7 [i_0] [i_5 + 2]))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_17 [i_5 + 2] [i_5 + 2] [(short)12]))) ? (arr_0 [i_5 - 3]) : (arr_17 [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        }
        arr_26 [i_0] = (((!(((/* implicit */_Bool) 2147483640)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0] [0U])) ? (((((/* implicit */int) var_10)) >> (((arr_0 [i_0]) - (188622387))))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) : (min((min((8852269525465162654LL), (((/* implicit */long long int) arr_22 [(_Bool)1])))), (((/* implicit */long long int) arr_18 [i_0])))));
        /* LoopSeq 1 */
        for (int i_8 = 4; i_8 < 11; i_8 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                arr_32 [i_0] [i_0] [i_0] &= ((/* implicit */int) arr_19 [i_8] [i_8 + 2] [i_9]);
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
                {
                    arr_36 [i_10] [i_8] [i_8] [i_0] = arr_7 [i_9] [i_9];
                    var_24 ^= ((/* implicit */unsigned short) ((arr_34 [i_8 - 4] [i_8 - 4] [i_8 - 1] [i_8 - 4] [(_Bool)1] [i_8 - 4]) >= (((arr_19 [i_8] [i_8] [i_8]) ? (1624051811) : (var_14)))));
                    arr_37 [(unsigned char)11] [(signed char)0] [4] [(short)12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_10])) ? (var_14) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (-1046154439) : ((-(((/* implicit */int) arr_7 [i_0] [i_8])))));
                }
                for (short i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                {
                    arr_40 [(short)3] [i_0] [i_0] [i_0] = ((/* implicit */int) var_11);
                    arr_41 [(signed char)12] [i_8] [i_8] [(_Bool)0] [i_9] [9] = ((int) arr_38 [i_11] [i_8 - 3] [i_8 - 3] [i_0]);
                    arr_42 [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 250836246)) ? (arr_31 [(short)9] [(short)9] [i_9]) : (((/* implicit */int) arr_39 [i_8] [i_8])))))));
                    var_25 &= ((/* implicit */_Bool) arr_24 [i_0] [i_8 - 2]);
                }
                for (short i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) (+(2089685185)));
                    arr_46 [i_9] [i_9] = ((/* implicit */_Bool) arr_31 [i_8 - 3] [i_8] [i_9]);
                    arr_47 [i_0] [(_Bool)1] [i_9] &= ((arr_10 [i_0] [i_8 + 1] [i_8 - 4] [i_8 + 2] [i_8 - 4] [i_8 + 2]) <= (arr_10 [i_0] [(unsigned short)3] [(unsigned short)4] [i_8 - 4] [i_8 - 1] [i_9]));
                }
            }
            arr_48 [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) arr_20 [i_8 - 1] [i_0] [i_0] [i_0]);
            var_27 = arr_11 [i_8 - 2] [(_Bool)1] [i_0] [i_0] [i_0] [(unsigned short)12];
        }
        var_28 += ((/* implicit */unsigned char) arr_28 [i_0] [i_0] [i_0]);
    }
    var_29 = var_6;
}
