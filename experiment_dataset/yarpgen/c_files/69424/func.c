/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69424
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
    var_20 |= ((/* implicit */unsigned short) ((max((var_2), (var_11))) != (min((((/* implicit */unsigned long long int) var_9)), (max((var_11), (((/* implicit */unsigned long long int) -8289084476936659395LL))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1 - 3] [i_1 - 3] [i_1 - 1] [i_1] [i_1 + 1])) ? (((long long int) (unsigned short)56921)) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8289084476936659394LL)) ? (arr_8 [i_1 - 2] [i_3]) : (((/* implicit */unsigned long long int) arr_13 [i_1 + 2] [i_1] [i_1 + 1] [i_2 + 2]))));
                    }
                } 
            } 
            var_23 |= ((/* implicit */unsigned short) ((((arr_5 [i_1 - 1]) + (9223372036854775807LL))) << (((((arr_5 [i_1 - 1]) + (318835758415734691LL))) - (6LL)))));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_24 -= ((/* implicit */long long int) ((unsigned long long int) (unsigned short)13402));
                            var_25 *= ((/* implicit */long long int) ((((9223372036854775790LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15360))))) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4])))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) min((var_26), (var_9)));
                var_27 |= ((arr_10 [i_0] [i_1 - 2] [i_1] [i_1 + 2] [i_4]) - (arr_10 [i_0] [i_1 - 2] [i_1] [i_1 - 2] [0LL]));
            }
            var_28 = ((/* implicit */long long int) (signed char)3);
        }
        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_0] [i_0])) & (((/* implicit */int) arr_19 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            for (short i_8 = 1; i_8 < 17; i_8 += 1) 
            {
                {
                    var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_7 + 1] [i_7 + 1] [i_8 - 1])) && (((/* implicit */_Bool) var_1))));
                    arr_27 [i_8 - 1] [i_8 + 1] [i_8 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32764)) + (((/* implicit */int) (signed char)86))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_11 [i_0] [i_7 - 1] [i_8 + 1] [i_8 - 1]))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned char) arr_23 [i_0] [i_0] [i_0]);
    }
    /* LoopNest 3 */
    for (signed char i_9 = 2; i_9 < 17; i_9 += 1) 
    {
        for (unsigned char i_10 = 1; i_10 < 15; i_10 += 3) 
        {
            for (short i_11 = 1; i_11 < 16; i_11 += 1) 
            {
                {
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)27006)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) -8289084476936659395LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_9])) && (((/* implicit */_Bool) arr_34 [i_9])))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_13 = 2; i_13 < 18; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) var_0);
                            arr_40 [i_9 + 2] [i_9 + 2] [i_9] [i_12] [i_13] = ((/* implicit */signed char) (unsigned char)78);
                        }
                        var_34 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2899)) ? (8289084476936659405LL) : (-8289084476936659421LL)))) % (((((/* implicit */_Bool) arr_39 [14ULL] [i_10] [i_10 + 2] [i_10] [i_12] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)34)), (var_5))))) : (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))))))));
                    }
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (8289084476936659416LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)19))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_15)))))) : (((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    /* LoopSeq 3 */
    for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
    {
        arr_43 [8ULL] [i_14] = (+(1514258920524288210LL));
        arr_44 [i_14] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_25 [i_14] [i_14] [i_14])) != (((/* implicit */int) arr_25 [i_14] [i_14] [i_14])))) ? ((+(((/* implicit */int) var_17)))) : (((((/* implicit */int) arr_25 [i_14] [i_14] [i_14])) + (((/* implicit */int) (unsigned short)65535))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
        {
            var_36 += ((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_14] [i_15] [i_14]))));
            var_37 = ((/* implicit */unsigned long long int) ((arr_5 [i_14]) + (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_14])))));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)-38))));
            /* LoopNest 3 */
            for (signed char i_16 = 1; i_16 < 16; i_16 += 3) 
            {
                for (unsigned short i_17 = 2; i_17 < 14; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_28 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (var_2))));
                            arr_56 [i_14] [(unsigned short)7] [i_14] [i_14] [i_14] [i_17] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [7LL] [(signed char)0] [i_16 - 1] [(signed char)9] [i_18]))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_19 = 2; i_19 < 15; i_19 += 4) 
        {
            for (unsigned char i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                {
                    var_40 *= ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_19 + 1] [i_19 + 2] [i_19 + 2])) + (((/* implicit */int) arr_9 [i_19 + 2] [i_19 + 1] [i_19 + 1])))) + (((((/* implicit */_Bool) arr_9 [i_19 + 2] [i_19 + 1] [i_19 - 2])) ? (((/* implicit */int) (unsigned short)24079)) : (((/* implicit */int) var_1))))));
                    arr_61 [i_19] [i_19] |= ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_59 [i_14] [i_19 - 2] [(unsigned short)7])) ? (((/* implicit */int) arr_50 [i_14] [i_19] [i_20] [i_20] [1LL])) : (((/* implicit */int) (signed char)-60)))) - (((/* implicit */int) max((var_19), (((/* implicit */unsigned short) var_12))))))) >= (((/* implicit */int) max((arr_17 [(unsigned char)2] [(unsigned short)10] [i_19 - 2] [2LL]), (arr_17 [i_14] [i_14] [i_19 - 1] [i_20]))))));
                    var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [3LL] [i_19 - 1] [i_20])) ? (arr_38 [i_19] [i_19] [2LL] [i_19] [i_19 + 2] [0ULL] [(short)0]) : (arr_59 [i_14] [i_19 + 2] [(unsigned short)9]))))));
                }
            } 
        } 
    }
    for (long long int i_21 = 0; i_21 < 20; i_21 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_22 = 2; i_22 < 18; i_22 += 1) 
        {
            for (unsigned short i_23 = 0; i_23 < 20; i_23 += 1) 
            {
                for (unsigned char i_24 = 2; i_24 < 17; i_24 += 4) 
                {
                    {
                        arr_73 [i_21] [(signed char)8] [i_22] [i_24] = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_64 [i_23]))) & (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_69 [i_21] [i_22] [i_23] [i_24])) || (((/* implicit */_Bool) var_18))))))));
                        var_42 = ((/* implicit */long long int) var_14);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_25 = 0; i_25 < 20; i_25 += 4) 
        {
            for (unsigned short i_26 = 0; i_26 < 20; i_26 += 1) 
            {
                for (unsigned char i_27 = 2; i_27 < 18; i_27 += 4) 
                {
                    {
                        var_43 *= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_2)))) || (((((/* implicit */_Bool) 13515617644315827424ULL)) && (((/* implicit */_Bool) arr_72 [i_21] [(unsigned short)4] [i_21] [i_21]))))))), (min((var_9), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19291)) || (((/* implicit */_Bool) (unsigned short)384)))))))));
                        var_44 ^= max((((/* implicit */unsigned long long int) ((min((arr_74 [i_21] [i_25] [i_27 + 2]), (((/* implicit */long long int) arr_69 [i_21] [i_27] [i_21] [i_27])))) & (((/* implicit */long long int) ((/* implicit */int) max((var_9), ((unsigned short)50176)))))))), (arr_75 [i_21] [i_21]));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_28 = 0; i_28 < 23; i_28 += 4) 
    {
        arr_84 [i_28] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)20519)))) != (((arr_80 [i_28]) & (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_28])))))));
        var_45 = max((((/* implicit */unsigned long long int) max((arr_81 [(unsigned short)5]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)31280)))))))), (((((/* implicit */_Bool) arr_83 [i_28])) ? (max((((/* implicit */unsigned long long int) arr_82 [(unsigned short)5])), (12396153923803791139ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_83 [i_28])) << (((arr_82 [i_28]) - (4959055137550842715LL)))))))));
        /* LoopNest 3 */
        for (long long int i_29 = 0; i_29 < 23; i_29 += 1) 
        {
            for (long long int i_30 = 0; i_30 < 23; i_30 += 1) 
            {
                for (unsigned short i_31 = 2; i_31 < 22; i_31 += 4) 
                {
                    {
                        arr_94 [i_28] [(signed char)22] [i_31] [i_28] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((8289084476936659394LL), (arr_85 [i_31])))) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (short)255))))) ? (((/* implicit */int) arr_83 [i_31 - 2])) : (min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)134))))), (((((/* implicit */_Bool) arr_91 [i_30])) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) var_4))))))));
                        arr_95 [i_29] [i_29] [(unsigned short)4] [i_29] = min((max((arr_93 [i_31 - 1] [i_31 - 1] [i_31] [i_31 - 1] [i_31]), (arr_93 [i_31 - 1] [i_31 - 1] [i_31] [i_31 - 1] [(signed char)3]))), (min((arr_87 [i_29] [(unsigned char)16] [i_30]), (((/* implicit */long long int) var_18)))));
                        var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (+(((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) max((arr_83 [i_28]), (((/* implicit */unsigned short) arr_91 [i_28]))))) : (((/* implicit */int) (signed char)19)))))))));
                    }
                } 
            } 
        } 
    }
}
