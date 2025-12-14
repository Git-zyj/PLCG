/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84710
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_6 [i_1] [2LL] [i_1] = ((/* implicit */_Bool) -6);
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (short)16224))));
                        arr_11 [i_3 - 1] [(_Bool)0] [(unsigned short)2] [(_Bool)0] [i_0] &= ((/* implicit */unsigned char) (~(((((((/* implicit */int) arr_9 [(unsigned char)16] [i_2 - 1] [(unsigned char)16])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                    }
                } 
            } 
        }
        var_14 = ((/* implicit */int) min((((3725663011176110053LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) max((arr_5 [i_0] [i_0] [6ULL]), (arr_5 [i_0] [18U] [18U]))))));
    }
    /* LoopSeq 4 */
    for (short i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_4] [i_4] [(_Bool)1] [i_4]))))) ? (((((/* implicit */int) arr_8 [i_4] [i_5] [i_5] [i_5])) - (((/* implicit */int) arr_8 [i_4] [i_4] [i_5] [i_5])))) : (((-1804699955) & (((/* implicit */int) arr_8 [i_4] [i_5] [i_4] [i_4]))))));
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) arr_4 [i_4]);
            arr_18 [14ULL] |= ((/* implicit */signed char) (_Bool)1);
            arr_19 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) var_9);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            var_16 = arr_12 [i_4];
            /* LoopSeq 2 */
            for (short i_7 = 2; i_7 < 16; i_7 += 1) 
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_7 - 2] [i_6])) ? (((/* implicit */int) arr_9 [i_4] [i_7 - 2] [i_6])) : (((/* implicit */int) (_Bool)1)))))));
                var_18 -= (+(((/* implicit */int) arr_9 [i_6] [i_7 - 1] [i_6])));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 1) 
                    {
                        {
                            arr_31 [i_4] [i_4] [i_7] [i_4] [i_4] = ((/* implicit */signed char) (~(arr_10 [i_4])));
                            arr_32 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_9] [i_9] [i_9] [i_9 + 1] [14] [i_9 - 2])) + (var_8)));
                        }
                    } 
                } 
                var_19 = var_4;
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)1))));
                    arr_35 [i_10] [i_10] [i_10] [i_10] [i_6] &= ((/* implicit */unsigned short) ((long long int) ((short) arr_28 [i_10] [i_10] [i_10])));
                    arr_36 [i_4] [i_4] [i_6] [12] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_27 [(unsigned char)11] [i_7])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_6))));
                    arr_37 [i_10] [i_4] [i_7] [i_6] [i_4] [i_4] = ((/* implicit */short) var_6);
                }
                for (signed char i_11 = 3; i_11 < 16; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        arr_45 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) arr_22 [i_4] [i_7] [i_4] [i_12]);
                        arr_46 [i_4] = ((/* implicit */_Bool) (((+(((/* implicit */int) var_9)))) | (((/* implicit */int) arr_43 [i_11 + 2] [i_7 - 1] [i_7 - 2] [i_7] [i_7 - 1]))));
                    }
                    for (signed char i_13 = 2; i_13 < 17; i_13 += 3) 
                    {
                        arr_49 [i_4] [i_6] [i_6] [i_6] [i_6] [i_6] [0ULL] = ((/* implicit */unsigned long long int) var_8);
                        var_21 &= ((/* implicit */unsigned long long int) arr_9 [i_6] [i_6] [i_6]);
                    }
                    var_22 += ((/* implicit */unsigned int) var_2);
                }
            }
            for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                var_23 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_3)))))));
                var_24 = ((/* implicit */unsigned char) (_Bool)1);
            }
            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_4] [i_6] [i_4] [i_6] [i_6])) - (((/* implicit */int) var_10))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (1820026796U)))));
            /* LoopNest 2 */
            for (unsigned short i_15 = 3; i_15 < 17; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    {
                        var_26 ^= ((/* implicit */int) arr_29 [i_15 - 1]);
                        var_27 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)12303))));
                        var_28 *= ((/* implicit */signed char) ((_Bool) (_Bool)1));
                        arr_60 [i_4] [6LL] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_15] [i_15 - 3] [i_15 + 1] [i_4] [i_15 - 1])) ? (((/* implicit */unsigned long long int) arr_53 [i_6] [i_6] [i_6] [i_4])) : (arr_59 [i_4] [i_4])));
                        var_29 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
            arr_61 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) (_Bool)1)))));
        }
        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -4001693496503592048LL))) ? (((/* implicit */int) ((unsigned char) var_6))) : ((+(((/* implicit */int) arr_1 [(unsigned char)0]))))))) ? (max((((((/* implicit */_Bool) arr_27 [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_55 [i_4])) <= (((/* implicit */int) arr_55 [i_4]))))))) : (((((/* implicit */_Bool) ((int) arr_25 [6U] [i_4] [i_4] [i_4] [i_4]))) ? (((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_3))))));
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 18; i_18 += 3) 
            {
                {
                    var_31 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_30 [i_4] [i_17] [i_17] [i_17] [i_17] [i_18])) & (((/* implicit */int) var_12)))));
                    var_32 = ((/* implicit */int) ((unsigned short) min((((/* implicit */int) var_5)), (2147483647))));
                    arr_69 [(short)8] [(short)4] [i_18] &= ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)54874)))) - (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (_Bool)1)), (-4001693496503592044LL)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 18; i_19 += 1) 
        {
            var_33 *= ((/* implicit */signed char) ((min((arr_23 [(unsigned short)8] [(unsigned short)8] [i_19]), (arr_23 [i_4] [i_4] [i_4]))) / (((((/* implicit */_Bool) arr_54 [i_4] [10] [i_19])) ? (arr_23 [i_4] [i_19] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_72 [i_4] [i_4] [i_19] = var_10;
            var_34 = ((/* implicit */unsigned short) var_1);
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 18; i_20 += 3) 
            {
                for (short i_21 = 0; i_21 < 18; i_21 += 1) 
                {
                    {
                        arr_77 [i_4] [(signed char)14] [i_20] [i_20] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((short) arr_27 [i_19] [i_21]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_19] [(_Bool)1]))) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_4] [i_4] [2LL] [i_20] [i_4])))))))));
                        var_35 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) var_11)) ? (arr_47 [i_21] [(short)6] [i_19] [(short)6] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_19])))))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_22 = 0; i_22 < 13; i_22 += 2) 
    {
        arr_80 [i_22] = var_11;
        /* LoopNest 2 */
        for (int i_23 = 2; i_23 < 12; i_23 += 1) 
        {
            for (unsigned char i_24 = 3; i_24 < 12; i_24 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_81 [i_23 - 2])), (arr_58 [i_24] [i_24 - 3] [i_23] [i_24]))))));
                        var_37 -= ((/* implicit */long long int) 3907098778U);
                        arr_89 [i_23] [i_24] [i_23 + 1] [i_23] = ((/* implicit */long long int) var_1);
                    }
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_27 = 0; i_27 < 13; i_27 += 1) 
                        {
                            arr_95 [(_Bool)1] [i_23] [i_26] [i_23] [i_23] = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((unsigned long long int) (-(3597589717U)))) : ((-(min((((/* implicit */unsigned long long int) var_6)), (arr_58 [i_24] [i_24 - 3] [i_23] [i_24]))))));
                            var_38 = max(((~((~(((/* implicit */int) var_6)))))), (((/* implicit */int) min((((signed char) var_5)), (var_5)))));
                            var_39 = ((/* implicit */unsigned long long int) var_3);
                            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((int) (short)-1)))));
                            arr_96 [i_22] [i_22] [i_22] [i_23] [i_26 - 1] [(unsigned short)3] = ((/* implicit */_Bool) min(((+(var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((var_11), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (int i_28 = 3; i_28 < 11; i_28 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (short)27)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_84 [i_22] [i_22] [i_22]))))) : (min((1624970597324467284ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((arr_73 [i_22] [i_22] [i_22]) - (((((/* implicit */long long int) arr_16 [i_26] [i_23] [(short)11])) + (var_7))))) : (((/* implicit */long long int) (-(((/* implicit */int) min((arr_25 [i_22] [i_22] [i_22] [i_22] [(_Bool)1]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                            var_42 += ((/* implicit */int) ((short) (+(3907098772U))));
                        }
                        var_43 *= ((/* implicit */short) (+((~(arr_51 [i_22] [(unsigned char)0] [i_26] [i_26 - 1])))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_44 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_22] [i_23 + 1] [i_22]))) | (((((/* implicit */_Bool) (unsigned short)64428)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_22] [16ULL] [i_22]))) : (var_1)))));
                        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (-(arr_3 [(_Bool)1] [i_23]))))));
                        arr_102 [i_23 + 1] [i_23] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)22419))));
                        var_46 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_26 [i_23 - 1] [(short)14] [i_22] [(short)14] [i_24 - 2]))));
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_23 - 1] [i_24 - 3] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_22]))) : (((unsigned long long int) arr_23 [i_24] [i_24] [i_24]))));
                    }
                }
            } 
        } 
        var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) arr_2 [i_22]))));
    }
    for (long long int i_30 = 2; i_30 < 7; i_30 += 3) 
    {
        var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) 3907098778U))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_30]))) : (((long long int) min((arr_28 [i_30] [i_30] [(short)8]), (((/* implicit */unsigned long long int) var_5))))))))));
        arr_105 [i_30] [i_30] = ((/* implicit */short) 0ULL);
    }
    for (short i_31 = 0; i_31 < 12; i_31 += 4) 
    {
        var_50 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_41 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31] [i_31])), ((~(1256015062U)))))) & ((~(((arr_28 [i_31] [i_31] [i_31]) << (((((/* implicit */int) var_10)) - (50916)))))))));
        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-67)))))));
    }
}
