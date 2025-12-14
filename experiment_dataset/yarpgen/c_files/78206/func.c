/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78206
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_1 [i_0 - 3])) + (((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_0 [i_0 - 1]), (((/* implicit */int) arr_1 [(short)4]))))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - (((((/* implicit */int) arr_8 [i_1] [i_1 + 1])) / (((/* implicit */int) arr_1 [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    arr_11 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_2 - 1])) ? (arr_0 [i_1 - 2]) : (((/* implicit */int) arr_4 [i_4]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_14 [i_1] [i_2] [i_1] [i_4] [i_5] = ((/* implicit */short) arr_7 [i_1 - 2] [i_1 - 2]);
                        var_21 = ((((/* implicit */_Bool) arr_12 [13U] [13U] [i_3] [(unsigned char)12] [i_1])) ? (((/* implicit */int) arr_12 [i_2] [i_2] [(signed char)10] [i_4] [i_5])) : (((/* implicit */int) arr_12 [i_4] [i_2 + 1] [5U] [i_4] [i_3])));
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) >> (((arr_6 [i_1] [(unsigned char)9]) - (1871826236U)))));
                        arr_15 [i_1] [i_2 - 1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)84)) <= (((/* implicit */int) (unsigned char)210)))))));
                        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                    }
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        arr_20 [i_2] [i_4] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_1]))))) != (arr_7 [i_1] [i_1])));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((int) arr_19 [i_3] [i_3])))));
                    }
                    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) - (((((/* implicit */_Bool) arr_10 [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))))))))));
                        var_26 += ((/* implicit */signed char) (-(((3787658833U) & (((/* implicit */unsigned int) 1073741824))))));
                    }
                    /* LoopSeq 4 */
                    for (short i_8 = 2; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        arr_25 [i_1] [i_1] [i_3] [i_3] [i_8] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned char)134))))));
                        arr_26 [i_1] [i_2 - 2] [i_3] [(signed char)8] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 855634725U)))))) > (var_0)));
                        arr_27 [i_1 + 1] [i_3] [i_4] [i_8 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(15U)))) ? (((/* implicit */int) arr_9 [i_1 + 1])) : ((~(((/* implicit */int) arr_5 [i_1] [i_2 - 1]))))));
                    }
                    for (short i_9 = 2; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_30 [i_1] [i_2 - 1] [i_9]))))));
                        arr_31 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */int) arr_13 [i_2] [i_4] [i_9 - 2]))));
                        arr_32 [i_1] [i_1] [i_1] [i_1] |= ((arr_19 [i_1 - 2] [i_1 + 1]) << (((arr_19 [i_1 + 1] [i_1 - 2]) - (817159097U))));
                        var_28 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_5)))));
                    }
                    for (short i_10 = 2; i_10 < 16; i_10 += 4) /* same iter space */
                    {
                        arr_35 [i_1 - 2] [i_2] [i_2] [i_3] [5] [7U] [i_10 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_10 - 1] [i_1 - 1] [i_3] [i_2 - 3])) & (((/* implicit */int) arr_12 [i_4] [(unsigned char)2] [i_2 - 2] [i_4] [i_1 - 2]))));
                        arr_36 [i_1] [(unsigned char)5] [i_3] [i_4] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) arr_30 [i_10 + 1] [i_2 + 1] [i_1 - 1]))));
                        var_29 = ((/* implicit */unsigned char) (-(var_16)));
                        var_30 = ((/* implicit */unsigned int) arr_5 [i_3] [i_4]);
                        arr_37 [i_1] [i_2] [i_1] [i_4] [(unsigned short)13] = ((/* implicit */unsigned char) (~(arr_21 [i_1 + 1])));
                    }
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_7))));
                        arr_40 [i_4] [i_1] = ((/* implicit */unsigned short) (~(var_5)));
                        arr_41 [(signed char)1] [i_2] [i_3] [i_11] [i_11] [(unsigned char)2] = (~(var_4));
                        arr_42 [(signed char)8] [(signed char)8] [i_3] = ((/* implicit */signed char) ((unsigned char) arr_38 [14U]));
                    }
                }
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 23U)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)231)) && (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            }
            arr_43 [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (var_1))))) / (arr_33 [i_2 - 3] [i_2] [i_2] [i_2] [i_2 - 3] [15])));
            arr_44 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [(unsigned short)4])) > (((/* implicit */int) arr_9 [i_1 - 1]))));
            arr_45 [i_1] [(unsigned char)7] |= ((/* implicit */short) (+(((/* implicit */int) arr_30 [i_1 - 1] [i_2 - 1] [i_2 - 3]))));
            arr_46 [i_1] [(unsigned char)5] = ((/* implicit */unsigned int) (-(var_11)));
        }
        for (unsigned int i_12 = 1; i_12 < 15; i_12 += 1) 
        {
            var_33 = (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_12] [i_12]))) : (var_18))));
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_1 - 2] [i_1] [i_1 - 1] [i_12 + 1] [i_12])) ? (((/* implicit */unsigned int) (~(var_11)))) : (var_14)));
            var_35 = ((/* implicit */signed char) (~(arr_7 [i_1] [i_1 - 2])));
            var_36 &= var_4;
        }
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            arr_55 [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_13]))));
            arr_56 [i_1] = ((((arr_18 [i_1] [(unsigned char)16] [(unsigned char)16] [i_13] [(unsigned char)11]) << (((var_4) - (3491525069U))))) & (((/* implicit */int) arr_51 [i_1 - 1] [i_1 + 1] [i_1 - 2])));
            var_37 = ((/* implicit */signed char) var_1);
        }
        arr_57 [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_1 - 2])) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1])) : (arr_0 [i_1 + 1])));
    }
    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        arr_60 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [(unsigned short)11] [i_14] [i_14])) ? ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_7)) : (var_0))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_3 [i_14] [i_14])))))));
        var_38 = ((/* implicit */int) var_2);
        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) var_6))));
    }
    var_40 ^= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) var_10))))), (((var_13) | (var_16))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))) ? (((((/* implicit */int) var_17)) << (((var_13) - (2638220604U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
}
