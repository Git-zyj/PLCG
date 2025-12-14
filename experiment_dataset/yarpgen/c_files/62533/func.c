/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62533
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned int) ((_Bool) (((_Bool)1) ? (1286768357) : (((/* implicit */int) (unsigned char)1)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((long long int) var_18)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) (+(arr_1 [i_1])));
        var_22 -= ((short) ((signed char) var_10));
        var_23 &= ((/* implicit */long long int) -1286768358);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 22; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                {
                    var_24 &= ((/* implicit */_Bool) var_5);
                    var_25 = min((((((/* implicit */_Bool) arr_11 [i_4] [i_4 - 2])) ? (var_2) : (((/* implicit */long long int) 1286768357)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_4 + 2])) ? (arr_11 [i_2] [i_4 + 1]) : (arr_11 [18ULL] [i_4 - 1])))));
                    var_26 = ((/* implicit */int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_18)), ((unsigned short)50557)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_13 [i_2]))))) : (((((/* implicit */_Bool) var_0)) ? (-1739705723) : (((/* implicit */int) arr_7 [i_2])))))))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1739705731)) ? (((/* implicit */int) arr_8 [(short)0])) : (((/* implicit */int) arr_8 [(unsigned char)6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (((((/* implicit */_Bool) -4705470579831591264LL)) ? (8822290036888381898ULL) : (((/* implicit */unsigned long long int) 1286768357)))))))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_14) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) || ((!(((/* implicit */_Bool) (signed char)-93)))))) ? (min((((/* implicit */long long int) arr_9 [i_3 - 3] [i_3 + 1] [i_3 - 1])), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))))));
                }
            } 
        } 
        var_29 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */unsigned long long int) -194426622605006680LL)) : (max((arr_6 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_16))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        arr_18 [i_5] [i_5] = ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [(short)11])) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_10 [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_5] [(_Bool)1])) && ((_Bool)1)))));
        arr_19 [i_5] &= ((/* implicit */_Bool) (+(var_1)));
        arr_20 [i_5] [i_5] |= ((/* implicit */_Bool) arr_11 [i_5] [i_5 - 2]);
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            arr_23 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) arr_13 [i_6]);
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (-(((((/* implicit */_Bool) var_19)) ? (arr_10 [i_8]) : (((/* implicit */unsigned long long int) arr_11 [i_5] [i_5])))))))));
                            arr_30 [i_6] [i_5] [i_7] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_18))))) : (2647448714794189671LL));
                        }
                    } 
                } 
            } 
        }
        for (int i_10 = 2; i_10 < 15; i_10 += 1) 
        {
            var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) arr_7 [i_5 - 2])) : (((/* implicit */int) var_3))));
            var_32 *= ((/* implicit */unsigned int) var_17);
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 16; i_11 += 4) 
            {
                for (long long int i_12 = 3; i_12 < 16; i_12 += 2) 
                {
                    {
                        arr_40 [i_11] [(unsigned short)4] [i_11] [i_12] [i_5] = ((/* implicit */long long int) arr_22 [i_10 - 1]);
                        var_33 = ((/* implicit */_Bool) (~(arr_21 [i_5 - 1] [i_11 + 1])));
                        var_34 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_38 [i_12] [i_11 + 1] [i_11 - 1] [i_10] [i_10] [i_5 - 1])))));
                        var_35 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_15 [i_5 - 2])));
                    }
                } 
            } 
        }
        for (int i_13 = 1; i_13 < 16; i_13 += 4) 
        {
            arr_43 [i_5] [i_5] |= ((/* implicit */unsigned char) var_13);
            /* LoopSeq 3 */
            for (long long int i_14 = 2; i_14 < 16; i_14 += 2) /* same iter space */
            {
                arr_48 [i_5] [i_14] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_12 [i_14] [i_14] [i_5])) : (((/* implicit */int) arr_35 [(_Bool)1] [(_Bool)1] [i_14 - 2]))));
                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_13] [i_13] [i_14 + 1] [i_14])) || (((/* implicit */_Bool) arr_36 [i_5] [i_13 - 1] [i_14 - 1] [i_14]))));
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_13] [i_13])) ? (((/* implicit */int) arr_44 [i_5] [i_5 + 1] [i_5] [i_5])) : (((/* implicit */int) var_17))));
            }
            for (long long int i_15 = 2; i_15 < 16; i_15 += 2) /* same iter space */
            {
                var_38 = (+(((unsigned long long int) 2147483647U)));
                /* LoopSeq 3 */
                for (int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    arr_55 [i_15] |= ((/* implicit */signed char) ((short) arr_49 [i_5] [i_5 - 1] [i_15] [i_16]));
                    var_39 ^= ((/* implicit */int) ((unsigned long long int) arr_12 [i_5] [i_5] [i_16]));
                    var_40 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                }
                for (unsigned long long int i_17 = 1; i_17 < 15; i_17 += 1) 
                {
                    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) arr_45 [i_13 - 1] [i_15 - 1]))));
                    var_42 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_10)))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_61 [i_13] [i_13 + 1] [i_13 + 1] = (~(((/* implicit */int) arr_7 [i_15 + 1])));
                    arr_62 [i_13] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((/* implicit */int) arr_22 [i_5 + 1]))));
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 17; i_19 += 2) 
                {
                    for (long long int i_20 = 0; i_20 < 17; i_20 += 4) 
                    {
                        {
                            var_43 ^= ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 33554431)))));
                            var_44 = ((arr_10 [i_20]) | (var_11));
                            var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_15 - 2])) ? (arr_31 [i_15 + 1]) : (arr_31 [i_15 - 1]))))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_15] [i_15] [i_15 - 1] [i_15 + 1] [i_15] [i_13 + 1]))));
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                arr_71 [i_5] [i_13] [i_13] [i_21] = ((((/* implicit */_Bool) arr_56 [i_5 - 1] [i_13 + 1] [i_13] [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_56 [i_13] [i_13 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_56 [i_21] [i_13 - 1] [i_5] [i_5 - 1] [i_5])));
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 17; i_22 += 4) 
                {
                    for (short i_23 = 0; i_23 < 17; i_23 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) ((short) ((arr_54 [i_5] [i_5]) ? (((/* implicit */long long int) 1690215560)) : (arr_63 [i_13] [i_13] [i_13] [i_13])))))));
                            var_48 = ((/* implicit */int) max((var_48), (((((/* implicit */_Bool) arr_70 [i_5 - 2] [i_5] [i_5 + 1])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_50 [i_21] [i_22] [i_23])) : (((/* implicit */int) (unsigned char)125)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_5 - 2])) : (((/* implicit */int) var_19))))))));
                        }
                    } 
                } 
            }
            var_49 = ((/* implicit */int) ((unsigned long long int) 8389374408654100743ULL));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_24 = 1; i_24 < 19; i_24 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_25 = 0; i_25 < 21; i_25 += 1) 
        {
            for (int i_26 = 3; i_26 < 19; i_26 += 4) 
            {
                {
                    arr_84 [i_25] [i_25] [i_26 + 2] [i_24] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_25]))));
                    arr_85 [i_26 + 2] [i_25] [10U] = ((/* implicit */_Bool) -2305843009213693952LL);
                    var_50 = ((/* implicit */int) ((arr_80 [i_25] [i_24]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)81))))) : (2640530220698627768ULL)));
                }
            } 
        } 
        var_51 ^= ((/* implicit */int) (-(arr_11 [i_24] [i_24])));
        var_52 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_80 [i_24 + 2] [i_24 + 2])) * (((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (signed char i_27 = 0; i_27 < 21; i_27 += 1) 
        {
            for (unsigned short i_28 = 0; i_28 < 21; i_28 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_29 = 0; i_29 < 21; i_29 += 2) 
                    {
                        for (short i_30 = 0; i_30 < 21; i_30 += 4) 
                        {
                            {
                                var_53 -= ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : ((-(var_14)))));
                                var_54 = ((/* implicit */signed char) ((unsigned short) arr_10 [i_24]));
                                var_55 = ((/* implicit */_Bool) arr_88 [i_24 - 1] [i_27] [i_27] [i_24]);
                                arr_95 [i_27] [i_27] = ((/* implicit */unsigned long long int) (unsigned short)30788);
                            }
                        } 
                    } 
                    arr_96 [i_28] [i_27] [i_27] [(_Bool)1] = ((/* implicit */unsigned short) ((int) arr_90 [i_27]));
                }
            } 
        } 
    }
}
