/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59702
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
    var_18 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)94)), (min((((/* implicit */long long int) (-(((/* implicit */int) var_9))))), (max((((/* implicit */long long int) var_10)), (var_13)))))));
    var_19 &= ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned char) var_14))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (unsigned short)60979))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_6 [8LL] [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)36081)) : (((/* implicit */int) arr_2 [i_1])))))) : (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_1])))) ? (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))));
            arr_7 [(unsigned char)9] [i_1] = ((/* implicit */short) arr_2 [i_0]);
            arr_8 [i_0] = arr_2 [10U];
            var_21 |= ((/* implicit */signed char) (+(max((((int) (unsigned short)36079)), (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) * (((/* implicit */int) var_1))))))));
        }
        arr_9 [8LL] = ((/* implicit */_Bool) max((max((((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0])), (arr_1 [i_0])))), ((~(((/* implicit */int) var_4)))))), (((/* implicit */int) ((min((962573999773577812ULL), (((/* implicit */unsigned long long int) (unsigned short)4530)))) < (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (17620935840469239275ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 4; i_3 < 11; i_3 += 2) 
        {
            arr_14 [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3 - 2] [6LL])) ? (((((/* implicit */_Bool) arr_1 [(signed char)7])) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_3])) : (((/* implicit */int) (unsigned short)10)))) : (((/* implicit */int) (signed char)-87))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_3 - 3] [i_3 - 3] [i_3 - 3])) >> (((((arr_10 [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [7] [i_3] [i_3]))))) - (3903575596U)))));
            var_23 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((var_5) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_3 - 4])))))) : (((((/* implicit */_Bool) var_15)) ? (17620935840469239264ULL) : (6308476744060026655ULL)))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                arr_17 [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_3] [i_3 + 1] [i_3 + 1]))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        var_24 |= ((((/* implicit */_Bool) (+(arr_19 [i_6] [i_6] [6U] [i_4] [i_3] [i_2])))) ? (((/* implicit */int) arr_21 [2U] [i_3 - 2] [i_3] [i_5] [i_6 + 2])) : (((/* implicit */int) arr_1 [i_2])));
                        var_25 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_5]))));
                        arr_22 [i_2] [i_2] [(_Bool)1] [i_6] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_2]))));
                        var_26 = (~(arr_13 [i_2] [i_3] [i_5]));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
                    }
                    for (signed char i_7 = 1; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        arr_25 [(_Bool)1] [i_3] [i_3] [i_3 - 1] [(_Bool)0] = ((/* implicit */unsigned char) ((arr_16 [i_7 - 1] [i_7] [i_4] [i_3 + 2]) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) arr_2 [(signed char)6]))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (arr_18 [i_3 - 2] [i_3 - 1] [i_7 + 1])));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_2]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [i_3])))) : (((((/* implicit */_Bool) arr_10 [(unsigned char)6])) ? (var_12) : (((/* implicit */int) (_Bool)1))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */int) (((+(arr_26 [i_2] [i_8] [3LL] [i_2]))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 4095LL)) ? (((/* implicit */int) var_10)) : (arr_19 [i_2] [i_2] [(unsigned short)4] [i_2] [0U] [i_2]))))));
                        arr_28 [i_3] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (arr_26 [i_2] [i_8] [i_2] [4]) : (((/* implicit */long long int) arr_23 [i_2] [0U] [i_2] [i_2] [i_2]))))) ? (arr_18 [i_2] [i_4] [i_8]) : (arr_13 [i_3 + 1] [i_3 - 2] [i_3 + 1])));
                        var_31 = (~(((/* implicit */int) arr_21 [i_2] [i_3 - 4] [i_4] [i_5] [i_8])));
                    }
                    for (unsigned int i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((arr_18 [i_2] [i_2] [i_2]) + (arr_18 [i_2] [i_3 - 2] [i_9 + 1]))))));
                        var_33 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_9])) >> (((/* implicit */int) arr_24 [i_9 + 2] [i_9] [i_9 - 1] [i_5] [i_4])))) <= (((((/* implicit */int) (signed char)17)) << (((arr_27 [i_2] [i_2] [i_3] [10] [i_5] [4]) - (1006760390U)))))));
                    }
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        arr_36 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_15)) - (arr_26 [i_2] [i_10] [i_5] [i_10]))))));
                        var_34 |= ((/* implicit */signed char) ((arr_18 [i_3 + 1] [i_3 + 2] [i_3 - 1]) < (arr_18 [i_3 - 2] [i_3 + 1] [i_3 - 3])));
                        var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                    }
                    arr_37 [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3 - 2] [i_3 - 3] [i_3 - 1])) || (((/* implicit */_Bool) arr_4 [i_3 - 2] [i_3 - 2] [i_3 - 1]))));
                }
                for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_43 [8] [i_2] [i_12] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_35 [i_2] [i_3 - 4] [i_4] [i_11] [(unsigned short)8]))));
                        arr_44 [i_11] [i_12] [i_4] = ((/* implicit */unsigned int) ((((arr_16 [12LL] [i_3 - 1] [i_3] [i_3 - 1]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)72)))) * (((/* implicit */int) (unsigned short)4545))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_33 [i_2] [9] [i_4] [4U] [(short)2]) | (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_3 - 4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (8585602858800948191ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        var_37 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_11]))) ^ (-4096LL)));
                        arr_48 [i_2] [i_4] [(signed char)4] = ((/* implicit */signed char) ((arr_27 [i_4] [i_4] [i_3] [i_3] [i_3] [i_3 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) <= (var_17)))))));
                    }
                    for (int i_14 = 3; i_14 < 12; i_14 += 4) 
                    {
                        var_38 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)93))) < (arr_45 [2LL] [2LL] [i_14] [i_14] [i_14] [i_14 - 3])));
                        var_39 = ((/* implicit */long long int) arr_19 [i_2] [i_3 - 4] [i_4] [i_11] [12] [i_14]);
                        arr_51 [i_2] [i_4] [i_11] [i_4] |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_40 [i_2] [i_3 - 2] [i_4] [i_11] [i_15])) : (((((/* implicit */_Bool) -6)) ? (((/* implicit */int) arr_2 [i_15])) : (((/* implicit */int) var_11)))))))));
                        var_41 ^= ((((/* implicit */_Bool) arr_33 [i_2] [2ULL] [10U] [i_2] [i_2])) ? (arr_33 [i_2] [(short)1] [12U] [i_11] [i_15]) : (arr_33 [i_2] [i_11] [i_4] [i_3] [i_2]));
                        var_42 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3 - 3] [i_3] [i_15] [i_3 + 1] [i_3]))) > (576460752303423487LL)));
                    }
                }
            }
        }
        var_43 = ((/* implicit */short) (~(arr_20 [i_2] [i_2] [i_2] [i_2] [10U])));
    }
    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
    {
        var_44 = ((/* implicit */long long int) arr_40 [i_16] [i_16] [i_16] [i_16] [i_16]);
        /* LoopSeq 1 */
        for (short i_17 = 3; i_17 < 12; i_17 += 4) 
        {
            arr_59 [i_16] [i_17] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_16] [4LL] [i_17]))) ^ (var_13)))), (((((/* implicit */_Bool) arr_12 [i_17] [i_17] [i_17 - 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_35 [i_17] [i_17 - 2] [i_16] [i_16] [i_16])))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_13)) ? (8184LL) : (((/* implicit */long long int) var_15)))))))));
            arr_60 [i_16] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_16] [i_16] [i_16] [(signed char)1] [i_16])) ? (((((/* implicit */_Bool) arr_32 [i_17] [i_17] [i_17 - 3] [i_17] [i_17 + 1] [i_17 - 1] [i_17])) ? (((/* implicit */int) arr_32 [i_17] [i_17 - 2] [i_17 + 1] [i_17] [i_17 - 1] [i_17] [i_17 - 1])) : (((/* implicit */int) arr_32 [i_17] [i_17] [i_17 + 1] [i_17] [i_17 + 1] [i_17 + 1] [i_17 - 1])))) : (((/* implicit */int) ((_Bool) arr_46 [i_17 - 3] [i_17] [i_17 - 1] [12LL] [i_17])))));
        }
    }
}
