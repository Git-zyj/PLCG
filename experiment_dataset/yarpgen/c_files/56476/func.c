/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56476
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-((-(((((/* implicit */long long int) ((/* implicit */int) (short)10387))) / (8347093074200679403LL))))))))));
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 1] = ((/* implicit */unsigned short) (short)-14041);
                var_19 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) -1235998279))))))), (((/* implicit */int) max((var_2), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    arr_11 [(short)6] [i_2] [i_2] [(unsigned char)9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((1235998271), (((((/* implicit */int) (unsigned char)224)) - (((/* implicit */int) arr_9 [(_Bool)1] [i_2 - 1] [i_2])))))))));
                    var_20 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_0 + 1]);
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1235998264)) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)162)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 2] [i_1 - 1])))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-27))))) >= (((/* implicit */int) arr_12 [i_4 + 3] [i_3 - 1] [i_1 - 1] [i_4 + 3]))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (arr_16 [i_1 + 1])));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) ((unsigned short) arr_17 [i_6] [i_3 - 1] [i_1 + 1] [i_0 - 2] [i_6]));
                        var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) 4057124122632627628ULL))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        arr_24 [(unsigned short)10] [i_3 + 2] [i_3 + 4] = ((8347093074200679397LL) / (var_16));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_27 [(unsigned short)2] = ((1235998303) != (((((/* implicit */int) (unsigned short)31761)) << (((((/* implicit */int) (unsigned char)23)) - (8))))));
                            var_28 *= ((/* implicit */_Bool) (unsigned char)203);
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])))))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_14 [i_1 + 2] [(unsigned short)2])) : (((/* implicit */int) (unsigned char)228))))) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1])) : (((((/* implicit */_Bool) arr_3 [(short)4] [(signed char)0])) ? (1235998270) : (((/* implicit */int) var_12)))))))));
                        }
                        for (short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            arr_31 [i_7] [i_9] [i_7] [(unsigned short)0] [i_9] |= ((/* implicit */short) ((((((/* implicit */_Bool) 9223372036854775789LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_30 [i_0 - 2] [(signed char)3] [i_3 - 1] [i_7] [(unsigned char)5]))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53)))));
                            var_31 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_23 [(unsigned char)0])) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (unsigned short)15606))))));
                            var_32 = (-(((/* implicit */int) ((arr_17 [i_0 - 1] [i_1 + 1] [i_3 + 1] [i_7] [i_9]) <= (((/* implicit */unsigned long long int) var_7))))));
                            arr_32 [(unsigned char)13] [i_9] [i_7] [i_7] [i_9] [(unsigned char)13] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_7] [i_9] [i_1 + 2] [i_0 + 1] [i_9] [i_0 - 2]))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0 + 1] [i_1 + 2] [i_3 + 4])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -49351444)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (unsigned short)8)))))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) 49351444)) / (var_7))) << (((-1016760831) + (1016760833))))))));
                        }
                        arr_36 [(unsigned short)11] [(unsigned short)1] [i_1 - 1] [i_3 + 2] [(unsigned short)2] = ((/* implicit */unsigned char) (!(arr_22 [(signed char)12] [(unsigned short)3] [i_3 + 2] [i_1 + 2] [(_Bool)1] [i_1 - 1])));
                        arr_37 [(unsigned short)9] [(unsigned short)11] [(unsigned short)1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)-35)))) >> (((((((/* implicit */_Bool) 1537616370U)) ? (49351452) : (((/* implicit */int) arr_8 [10] [i_7])))) - (49351447)))));
                        var_35 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned short)49925))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
                    {
                        arr_41 [i_11] [(unsigned short)4] [i_1 - 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)19808)) << (((((/* implicit */int) ((unsigned short) (unsigned short)15511))) - (15506)))));
                        var_36 = ((/* implicit */unsigned int) ((((-49351444) + (2147483647))) >> (((((/* implicit */_Bool) -49351444)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48434)))))));
                        var_37 = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_3 + 4] [i_1 - 1] [i_1 - 1] [i_0 + 1])) * (((/* implicit */int) (unsigned char)27))));
                    }
                    arr_42 [(_Bool)1] [(signed char)7] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */int) (short)32767)) == (((/* implicit */int) var_9)))) ? (13930061073317787721ULL) : (((/* implicit */unsigned long long int) (~(1709384436))))));
                }
                /* vectorizable */
                for (short i_12 = 3; i_12 < 10; i_12 += 1) 
                {
                    var_38 ^= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)62183))));
                    var_39 &= ((/* implicit */signed char) ((((/* implicit */_Bool) -49351444)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)229)) || (((/* implicit */_Bool) var_14)))))) : ((~(5157238629447918181ULL)))));
                    arr_45 [0ULL] [(unsigned char)10] [(unsigned char)9] = (((_Bool)1) ? (8415962069658138442ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_34 [6U] [(unsigned short)0] [i_12 - 1])))));
                    var_40 += ((/* implicit */long long int) (-(49351443)));
                    var_41 += ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (5691072286872432793LL) : (((/* implicit */long long int) var_7)))));
                }
                /* vectorizable */
                for (int i_13 = 3; i_13 < 12; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 1; i_14 < 13; i_14 += 3) 
                    {
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (255U))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-19808))))))));
                        arr_52 [(_Bool)1] [(short)4] [(unsigned char)2] [i_14 + 1] |= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)6846))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((signed char) (+(4070415808972929260LL)))))));
                        /* LoopSeq 1 */
                        for (signed char i_16 = 0; i_16 < 14; i_16 += 4) 
                        {
                            var_44 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_48 [(unsigned short)0] [(unsigned short)5]))))) ^ (((/* implicit */int) (_Bool)1))));
                            var_45 -= ((/* implicit */_Bool) (unsigned short)2242);
                            arr_60 [i_15] [i_1 - 1] [i_13 - 1] [i_15] [7ULL] = ((/* implicit */unsigned char) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                        }
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_15] [i_13 + 2] [i_1 + 1] [i_0 - 1]))) < (arr_20 [(short)5] [i_1 - 1] [(short)3] [(unsigned char)2]))))));
                        var_47 *= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)104)) % (((/* implicit */int) (unsigned short)34596))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned char) (~(((long long int) var_3))));
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 0; i_18 < 14; i_18 += 3) 
                        {
                            arr_67 [i_18] [(unsigned short)1] [i_17] [i_13 + 1] [i_13 - 3] [i_1 - 1] [i_0 + 1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 15269421114938321199ULL)) ? (((/* implicit */int) (short)-5562)) : (((/* implicit */int) (short)-5562))))));
                            var_49 = ((/* implicit */unsigned short) (~(285907546)));
                            var_50 |= ((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_34 [i_0 - 1] [i_0 - 2] [i_0 - 2]))));
                            arr_68 [7ULL] [i_1 + 2] [i_13 - 1] [i_17] [(unsigned char)8] = ((((/* implicit */_Bool) (unsigned short)55030)) && (((/* implicit */_Bool) (unsigned char)229)));
                        }
                    }
                    arr_69 [i_1 + 2] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) 1235998271))) ^ (6523476857570733581ULL)));
                }
            }
        } 
    } 
}
