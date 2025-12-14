/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83993
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
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_13))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0]))))) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (15ULL) : (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_13))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0] [14] [i_1])))))));
            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(21ULL))))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((_Bool) arr_2 [i_0] [i_1])))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            arr_8 [i_0] [i_2 - 2] = ((/* implicit */unsigned char) var_16);
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_6 [i_2 + 2] [i_2 - 2]), (arr_6 [i_2 + 2] [i_2 + 2])))))))));
            var_28 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((long long int) 4294967276U))))) ? ((((+(((/* implicit */int) arr_5 [i_0] [0LL] [i_0])))) / (((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) arr_2 [i_2 + 1] [i_2 + 2])))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
    {
        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 4) 
        {
            {
                var_29 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((4294967276U), (((/* implicit */unsigned int) (_Bool)1))))) ? (min((arr_11 [i_4 - 2] [i_3]), (((/* implicit */long long int) arr_7 [i_4])))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))))));
                var_30 &= ((/* implicit */unsigned long long int) max((arr_6 [i_3 + 1] [i_4 + 3]), (((/* implicit */unsigned char) ((_Bool) arr_6 [i_3 - 1] [i_4 + 1])))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)28263))))) ? (((/* implicit */int) max(((unsigned char)255), ((unsigned char)0)))) : ((-(((/* implicit */int) (unsigned char)63))))))) ? (17293936536276317132ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_16 [i_5] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (arr_15 [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) >= (((/* implicit */int) (unsigned short)62022))))))), (min((((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_16))), (((unsigned int) var_1))))));
        var_32 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_15 [i_5])))))) ? (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */long long int) min((arr_14 [(short)8] [i_5]), (arr_14 [i_5] [i_5])))) : (min((var_13), (((/* implicit */long long int) arr_14 [i_5] [i_5])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_14 [i_5] [i_5])))) ? (arr_15 [i_5]) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-18034)) + (2147483647))) >> (((((/* implicit */int) (short)27827)) - (27817)))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_33 += ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned int) (short)31)), (arr_15 [i_5]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned short)18] [(unsigned short)18]))))) ? (max(((-(((/* implicit */int) arr_17 [i_5])))), (((arr_18 [i_5] [i_6]) ? (((/* implicit */int) arr_19 [i_5] [i_6] [i_5])) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((short) ((unsigned int) (_Bool)1))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)108)))) >= ((~(((/* implicit */int) (_Bool)1)))))))));
                        arr_32 [i_7] [i_6] [i_7] [i_8 + 1] [i_9] &= ((/* implicit */unsigned short) (((~(arr_30 [(unsigned char)13] [12ULL] [i_7] [(unsigned char)13] [i_7] [i_7] [i_7]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125)))));
                        var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_7] [i_7])) ? (arr_20 [i_5] [i_6] [6LL] [i_9]) : (((/* implicit */unsigned long long int) arr_15 [i_5])))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_8] [i_6] [i_6] [i_6] [i_6])))))));
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((arr_26 [i_5] [i_6] [i_5] [i_8 + 1] [i_9]) ? (((((/* implicit */_Bool) arr_30 [i_5] [i_6] [i_6] [i_8 + 1] [(unsigned short)10] [i_9] [i_9])) ? (((/* implicit */int) arr_24 [i_5] [i_6] [i_7] [i_8 + 1] [i_9])) : (((/* implicit */int) arr_21 [i_5] [4] [i_7])))) : (((/* implicit */int) ((short) arr_31 [(_Bool)1] [(_Bool)1] [i_6] [i_5]))))))));
                    }
                    arr_33 [i_5] [i_8] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (unsigned short)0))) ? (((((/* implicit */_Bool) arr_15 [i_7])) ? (1152807537433234490ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_5] [i_6] [i_7]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))));
                }
                arr_34 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_7] [i_5] [i_6] [i_7] [i_5])) * (((/* implicit */int) arr_28 [i_5] [i_6] [i_7]))))) ? (((arr_14 [i_5] [i_6]) >> (((-9126034345892420957LL) + (9126034345892420985LL))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)238)) >> (((/* implicit */int) (_Bool)1)))))));
            }
            for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                var_37 *= ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) ((4294967276U) >= (arr_15 [i_5])))))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (int i_12 = 3; i_12 < 18; i_12 += 3) 
                    {
                        {
                            arr_43 [i_5] [i_5] [i_10] [i_12] [i_12 + 1] = ((/* implicit */unsigned short) arr_19 [i_5] [i_5] [i_10]);
                            var_38 = ((/* implicit */_Bool) min((var_38), ((_Bool)1)));
                            var_39 = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_36 [i_5] [i_5] [i_6] [i_11])), ((-(arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((((/* implicit */_Bool) (short)-27848)) ? (((/* implicit */int) (_Bool)0)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))) >> ((+(((/* implicit */int) arr_40 [i_12] [i_12 + 3] [i_12 + 3] [i_12 - 1] [i_12 + 4] [i_12 + 4])))))))));
                            var_41 = ((/* implicit */short) (-(((((/* implicit */int) arr_18 [i_12 - 1] [i_12 + 2])) >> (((((/* implicit */int) arr_38 [i_5] [(unsigned char)13] [i_5] [i_11] [i_12 - 2] [17U])) - (5328)))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_5] [i_5] [i_10] [i_10])) ? (((/* implicit */int) arr_35 [i_5] [i_6] [i_10] [i_10])) : (((/* implicit */int) arr_35 [i_5] [i_6] [i_10] [i_5]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)127)), (arr_35 [i_5] [i_6] [i_6] [i_10])))) : (((((/* implicit */_Bool) arr_35 [i_5] [i_5] [i_6] [i_10])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_35 [i_5] [8LL] [i_10] [i_5]))))));
                arr_44 [i_5] [i_6] [i_10] = var_15;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_13 = 3; i_13 < 20; i_13 += 1) 
                {
                    arr_49 [i_5] [i_6] [i_5] [i_10] [i_13 + 2] &= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7049607795094593124LL)));
                    var_43 -= ((/* implicit */unsigned long long int) ((unsigned char) arr_38 [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13 - 2] [i_13 + 1] [i_10]));
                }
            }
            for (unsigned char i_14 = 1; i_14 < 21; i_14 += 1) 
            {
                var_44 = ((/* implicit */unsigned char) arr_21 [i_5] [i_6] [18U]);
                var_45 = ((/* implicit */short) (((+(((/* implicit */int) arr_19 [i_5] [i_5] [i_5])))) >= (((/* implicit */int) arr_21 [i_5] [i_6] [i_14 - 1]))));
                var_46 &= ((/* implicit */unsigned short) 0U);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                for (unsigned short i_16 = 2; i_16 < 20; i_16 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 1; i_17 < 21; i_17 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_57 [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_16 - 2] [i_16 - 2] [i_16 - 2])) >> (((((/* implicit */int) ((_Bool) arr_45 [i_17 + 1] [i_16] [(unsigned char)2] [i_15] [i_6] [i_5]))) >> (((/* implicit */int) var_17))))));
                            var_48 -= ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_25 [i_15] [i_16 - 2] [i_17 + 1] [i_17 - 1] [i_17 - 1]))))));
                        }
                        var_49 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) ((arr_15 [i_5]) >> (((arr_20 [i_16 + 1] [i_6] [i_6] [i_5]) - (14742877871284594716ULL)))))), (((5471968231099550769ULL) >> (((/* implicit */int) var_0))))))));
                        var_50 = ((/* implicit */long long int) arr_41 [i_5] [i_6] [i_6] [i_15] [i_16 - 1] [i_16 + 2]);
                    }
                } 
            } 
            var_51 = ((/* implicit */_Bool) ((unsigned short) ((1152807537433234494ULL) >> (((/* implicit */int) arr_21 [i_6] [i_5] [i_5])))));
        }
        var_52 = ((/* implicit */int) arr_35 [i_5] [i_5] [11U] [i_5]);
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_19 = 1; i_19 < 15; i_19 += 1) /* same iter space */
        {
            var_53 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned long long int) 9126034345892420926LL))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_19 - 1] [i_19 + 1] [i_19 - 1] [i_18])) + (((/* implicit */int) arr_17 [i_18]))))) : ((~(arr_53 [i_19 + 1] [i_19 - 1] [i_19 - 1] [(_Bool)1]))))), (((/* implicit */unsigned int) (_Bool)1))));
            arr_64 [i_19] = ((/* implicit */unsigned short) (~(min((arr_63 [i_19] [(unsigned short)14] [i_19]), (((/* implicit */long long int) arr_48 [i_18] [i_18] [i_18] [12LL]))))));
        }
        for (unsigned char i_20 = 1; i_20 < 15; i_20 += 1) /* same iter space */
        {
            arr_67 [i_20 + 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (19U)))) ? (-8402331137377398471LL) : (((/* implicit */long long int) 3397925715U)))) >> (((/* implicit */int) ((((long long int) 1352082467)) >= (((/* implicit */long long int) ((/* implicit */int) arr_25 [(unsigned char)16] [i_20 - 1] [i_20 + 1] [i_20 - 1] [i_20 - 1]))))))));
            arr_68 [i_18] [i_20] &= ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_18 [i_20 - 1] [i_20 - 1])), (arr_60 [i_18]))), (((/* implicit */unsigned int) arr_62 [i_20 + 1] [i_20 + 1] [i_18]))));
        }
        var_54 *= ((/* implicit */_Bool) max(((-((~(((/* implicit */int) var_18)))))), (((/* implicit */int) arr_39 [i_18] [i_18] [i_18] [i_18]))));
    }
    var_55 = ((/* implicit */_Bool) var_4);
}
