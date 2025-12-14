/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66259
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
    var_16 = ((/* implicit */signed char) max((var_13), (((/* implicit */long long int) var_10))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_15))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            var_18 = ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (unsigned short)1023)), (1049724131U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (((unsigned long long int) arr_0 [i_1 - 2])));
            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) 4294967274U)) + (15140847308596678326ULL))))) ? (((/* implicit */int) ((short) arr_1 [i_0 - 1]))) : (((/* implicit */int) ((signed char) arr_3 [i_1 - 2])))))));
            arr_4 [i_0] = ((/* implicit */long long int) arr_0 [i_0 + 1]);
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((signed char) ((unsigned char) (+(((/* implicit */int) arr_1 [i_0 - 1]))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            arr_15 [i_5] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_2 [i_0] [i_0] [i_5]))))))), (arr_9 [i_0] [i_0 - 1] [i_0 + 2])));
                            arr_16 [i_3] [i_5] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 + 1])) ? (((unsigned long long int) var_12)) : (arr_9 [i_2] [i_4] [7ULL]))));
                            arr_17 [i_0 + 2] = ((/* implicit */unsigned long long int) min((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-31581))) + (2962278971U)))), (var_4)));
                            var_21 = ((/* implicit */int) min((-5308971713630263453LL), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [i_0 - 2] [(short)14] [i_0 - 2] [(short)9] [i_0] [i_0 - 2])) >> (((((/* implicit */int) ((signed char) var_3))) + (94))))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            arr_20 [i_6] [(unsigned short)13] [i_3] [(unsigned short)13] [3U] [(short)14] [i_0] = ((/* implicit */unsigned char) ((var_9) / (arr_7 [13LL] [i_2] [i_2] [i_0 - 2])));
                            arr_21 [i_0] [(signed char)5] = ((/* implicit */int) arr_0 [i_0]);
                            var_22 = ((/* implicit */unsigned short) var_4);
                            var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [i_0 - 2] [i_3] [i_4] [i_6]))) : (arr_2 [i_0] [i_0 - 2] [i_4])));
                            arr_22 [i_0] [(unsigned short)0] [i_3] [(signed char)14] [i_6] = ((/* implicit */unsigned short) ((_Bool) (short)-31581));
                        }
                        /* LoopSeq 4 */
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            arr_26 [i_3] [i_2] [i_7] [(short)3] [(short)13] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)1)), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_3] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1332688329U)))) : (3808697020U)))));
                            var_24 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_3] [i_2] [i_7])) ? (((/* implicit */int) arr_24 [i_0 + 1] [i_2] [i_0 + 1] [(short)4] [(unsigned short)7] [(unsigned short)7])) : (((/* implicit */int) var_7)))))) % (((/* implicit */int) (unsigned short)7369))));
                            arr_27 [i_7] [i_7] [i_4] [i_3] [i_7] [0] = ((/* implicit */signed char) (((~(((/* implicit */int) var_7)))) * (((arr_18 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_3] [i_7]) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) (short)-10079))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_2] [i_4] [i_3] [i_2] [i_0 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((((/* implicit */int) arr_14 [i_0 - 2] [i_2] [i_3] [i_4] [i_8] [i_2] [i_3])) == (((/* implicit */int) arr_18 [i_0 - 2] [i_2] [i_3] [i_2] [i_8])))))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (short)(-32767 - 1)))) ? (((/* implicit */long long int) 2547571958U)) : ((~(7LL)))));
                            arr_31 [8ULL] [i_4] [i_8] = ((short) (-(((arr_2 [i_0 + 1] [i_8] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))))) | (min((arr_7 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2]), (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */int) (short)21296)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 2]))))) : (((unsigned int) var_11))))))))));
                        }
                        for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-11846)) || (((/* implicit */_Bool) var_9))))))));
                            arr_34 [i_3] [i_9] [i_9] [i_4] [i_9] [i_3] = ((/* implicit */signed char) ((long long int) var_2));
                            var_28 = ((/* implicit */signed char) (short)32767);
                        }
                        for (signed char i_10 = 4; i_10 < 12; i_10 += 1) 
                        {
                            arr_37 [i_0] [i_2] [i_3] [i_4] [i_10 + 3] = ((/* implicit */long long int) (short)32765);
                            var_29 &= ((/* implicit */short) ((signed char) var_0));
                            var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_2 [i_0 + 2] [i_10 - 4] [i_10 + 1])))) ? (((/* implicit */int) ((unsigned short) ((unsigned short) var_10)))) : (((/* implicit */int) ((11888487773161366893ULL) == (((/* implicit */unsigned long long int) ((unsigned int) arr_36 [i_0 + 2] [i_2] [i_3] [6U] [i_3]))))))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) var_9))));
                            var_32 = ((/* implicit */short) min((var_32), (((short) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_2] [i_2])) ? (arr_19 [i_0] [i_0 + 2] [i_10 - 4] [i_10 - 2] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                        }
                        var_33 ^= var_0;
                    }
                } 
            } 
            var_34 = ((/* implicit */int) ((unsigned int) ((arr_35 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1]) != (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (short)-32766))))))));
        }
        var_35 |= ((/* implicit */short) ((((unsigned int) ((((/* implicit */unsigned int) var_14)) * (1665737274U)))) | (((/* implicit */unsigned int) ((/* implicit */int) (short)15175)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                arr_43 [i_11] [i_11] [i_12] = ((/* implicit */_Bool) (unsigned char)156);
            }
            for (short i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                arr_46 [i_0] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) 1665737276U)) ? (arr_42 [i_0 + 2]) : (arr_42 [i_0 + 2])));
                arr_47 [i_11] [i_11] [i_13] = ((signed char) arr_24 [i_13] [i_13] [i_13] [i_13] [i_0 + 1] [i_0]);
                var_37 += ((/* implicit */unsigned int) (unsigned short)0);
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 15; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        var_38 = (!(((/* implicit */_Bool) ((signed char) var_4))));
                        var_39 = ((/* implicit */unsigned char) var_5);
                        var_40 = ((/* implicit */_Bool) var_3);
                        var_41 *= ((/* implicit */short) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_50 [i_11] [i_14] [i_15])) : (var_14))) - ((~(((/* implicit */int) var_7))))));
                    }
                    var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) arr_40 [i_0 - 1] [i_0 + 1]))));
                }
            }
            for (short i_16 = 0; i_16 < 15; i_16 += 4) 
            {
                arr_57 [i_11] [i_0 + 2] = ((/* implicit */signed char) arr_12 [i_16] [i_11] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0]);
                arr_58 [i_11] [i_11] [i_11] [i_16] = ((/* implicit */unsigned int) ((signed char) arr_28 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1]));
                arr_59 [i_16] [i_0] [i_0 - 1] &= ((/* implicit */int) var_15);
            }
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned short) arr_7 [i_0 - 2] [i_11] [i_17] [i_18]);
                            arr_66 [i_11] [(unsigned short)11] [i_17] [i_18] [i_19] [i_18] = ((/* implicit */short) ((((((/* implicit */int) ((signed char) arr_7 [i_0] [i_0 - 1] [i_0] [i_0]))) + (2147483647))) >> (((((/* implicit */int) var_6)) + (1253)))));
                            var_44 = ((/* implicit */short) var_4);
                        }
                        var_45 = ((/* implicit */unsigned long long int) var_15);
                    }
                } 
            } 
            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) arr_29 [i_0 + 1]))));
            /* LoopNest 2 */
            for (long long int i_20 = 0; i_20 < 15; i_20 += 3) 
            {
                for (signed char i_21 = 0; i_21 < 15; i_21 += 4) 
                {
                    {
                        var_47 = ((/* implicit */unsigned short) ((short) (-(var_13))));
                        /* LoopSeq 1 */
                        for (unsigned int i_22 = 1; i_22 < 12; i_22 += 4) 
                        {
                            var_48 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 2629230021U))))));
                            var_49 = ((/* implicit */signed char) max((var_49), (((signed char) (-(arr_69 [i_0] [i_11] [i_20] [i_20]))))));
                            arr_73 [i_0] [i_11] [i_0 - 2] [i_0] [1LL] = ((/* implicit */int) var_6);
                            arr_74 [i_11] = ((/* implicit */int) ((_Bool) ((unsigned int) var_8)));
                        }
                        arr_75 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_11] = ((/* implicit */unsigned long long int) (!(arr_18 [i_0] [(short)5] [i_20] [i_0 + 2] [i_11])));
                    }
                } 
            } 
        }
        for (unsigned short i_23 = 0; i_23 < 15; i_23 += 1) 
        {
            arr_79 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (var_4)))) ? (((/* implicit */long long int) 2962278980U)) : (((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_23] [i_23]))) ^ (var_13)))))) ? (((/* implicit */int) arr_3 [i_23])) : (((/* implicit */int) var_6))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_24 = 0; i_24 < 15; i_24 += 4) 
            {
                arr_83 [i_0] [i_23] [(unsigned short)2] [i_24] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0 - 1]))));
                arr_84 [(unsigned short)13] [i_23] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)0));
            }
            /* vectorizable */
            for (unsigned char i_25 = 0; i_25 < 15; i_25 += 3) 
            {
                arr_87 [i_25] [6] [6] [i_0] |= ((/* implicit */signed char) arr_12 [i_0 + 2] [i_0 + 2] [10] [i_23] [i_0 + 2] [i_25]);
                arr_88 [i_25] [i_25] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [2LL] [i_25])) ? (((/* implicit */int) arr_49 [i_0 - 2] [i_23] [i_23] [i_23])) : (((/* implicit */int) ((unsigned short) (short)-27058)))));
            }
        }
        /* vectorizable */
        for (short i_26 = 0; i_26 < 15; i_26 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_27 = 2; i_27 < 12; i_27 += 3) 
            {
                for (short i_28 = 0; i_28 < 15; i_28 += 3) 
                {
                    {
                        arr_99 [i_26] [i_28] = ((/* implicit */short) (unsigned short)2047);
                        var_50 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_11 [i_27] [i_26] [14ULL])) - (((/* implicit */int) var_6)))));
                        var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((unsigned int) ((unsigned int) var_8))))));
                    }
                } 
            } 
            var_52 += ((/* implicit */unsigned int) ((int) arr_7 [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 2]));
        }
        var_53 = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned short) ((signed char) ((signed char) 1665737276U))))));
    }
    /* vectorizable */
    for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
    {
        arr_103 [i_29] [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_100 [i_29])) ? (arr_100 [i_29]) : (arr_100 [i_29])));
        var_54 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
    }
    for (unsigned int i_30 = 0; i_30 < 24; i_30 += 4) 
    {
        var_55 -= ((/* implicit */int) var_12);
        var_56 &= ((/* implicit */signed char) var_6);
    }
    var_57 = ((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((+((-(((/* implicit */int) (short)-11843))))))));
}
