/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72792
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
    var_18 -= ((/* implicit */int) (short)-5);
    var_19 = max(((short)0), (((/* implicit */short) (_Bool)1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-28718))))), (min((arr_2 [i_0]), (arr_2 [i_0]))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = min((max((((/* implicit */unsigned int) arr_4 [(unsigned short)12] [i_2] [i_0])), (arr_12 [i_0 + 1] [i_1] [i_1 + 1] [i_1]))), (max((((/* implicit */unsigned int) arr_0 [i_2] [i_0])), (((unsigned int) arr_0 [i_0] [i_0])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_21 += ((/* implicit */unsigned int) arr_0 [i_1] [12LL]);
                        arr_19 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_5] [i_5]))));
                        arr_20 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0 + 1] [i_0] [i_0]))));
                    }
                    var_22 = ((/* implicit */int) ((unsigned int) (short)(-32767 - 1)));
                    var_23 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])), (arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_5]))))))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */int) (short)-64)) : (((/* implicit */int) (unsigned char)120)))) : (((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */int) arr_15 [i_0] [1ULL] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_5] [6U] [i_0] [i_5]))))))));
                }
                for (short i_7 = 2; i_7 < 17; i_7 += 3) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */short) max((((/* implicit */long long int) ((signed char) -3540702584456689883LL))), ((-(arr_27 [i_0] [i_7 + 1])))));
                            var_25 ^= arr_4 [i_0] [4U] [(short)8];
                            arr_28 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((short) arr_18 [i_0] [i_1 + 1] [i_1 - 1] [i_0 + 1])));
                        }
                        for (short i_10 = 2; i_10 < 18; i_10 += 1) 
                        {
                            var_26 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_24 [i_10 + 1] [(unsigned short)13] [i_7 - 2] [i_8] [i_10] [i_0 - 1]))))));
                            arr_32 [i_0] [i_0] [i_7] [i_7] [i_0] [i_8] [i_10] = ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_7] [i_8])) ? (((/* implicit */int) arr_8 [i_1] [i_7 - 2] [i_8])) : (((/* implicit */int) arr_10 [i_7] [i_7] [1LL] [i_7] [i_7] [(signed char)18])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_7] [i_8] [i_10] [i_10]))))))), (((/* implicit */int) (short)10))));
                        }
                        arr_33 [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) (short)-17);
                    }
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        arr_37 [(signed char)3] [i_0] [i_7] [i_11] = ((/* implicit */unsigned char) max((((unsigned int) arr_35 [i_0 + 1] [i_0] [i_1] [i_1 - 1])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_11] [i_1 - 1] [i_1 - 1])))))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-(((unsigned int) (-(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        arr_38 [i_0 - 1] [(_Bool)1] [i_0] [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) max((arr_36 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1]), (arr_36 [i_0] [i_0] [i_0] [i_1 + 1] [i_1]))));
                        arr_39 [i_0] [i_11] = ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_1] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_1] [i_7 + 2] [i_11])))))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 2; i_12 < 18; i_12 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned short) (+(arr_29 [i_7] [i_7 + 2] [i_7] [i_7] [i_0] [i_7 + 2] [i_0])));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_29 -= ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_7] [(unsigned char)2] [i_13]);
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((arr_34 [i_12] [i_12 + 1] [(_Bool)1] [i_12 + 1]) ? (((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_0] [i_0] [0LL] [14ULL])) : (230790146U))))));
                            var_31 = ((/* implicit */unsigned short) (-(arr_11 [i_7 + 1] [i_7] [i_7] [i_7] [i_12])));
                        }
                        var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_18 [i_12 - 2] [(unsigned short)16] [i_12 + 1] [i_12 - 2]) : (((/* implicit */int) arr_6 [i_0 - 1]))));
                    }
                    /* vectorizable */
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_30 [i_0 + 1] [0] [i_1] [i_0] [i_14] [i_0 + 1] [i_14]))))));
                        /* LoopSeq 3 */
                        for (signed char i_15 = 1; i_15 < 18; i_15 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned short) (((_Bool)1) ? (3940264827U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_7] [14] [i_7 + 2] [i_7 - 2])) ? (((/* implicit */int) arr_7 [16U] [i_1] [i_7])) : (-1634403794)));
                            arr_49 [i_14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_44 [i_1 + 1] [i_15 + 1] [i_7] [i_0] [i_7]))));
                        }
                        for (long long int i_16 = 2; i_16 < 17; i_16 += 1) 
                        {
                            arr_52 [i_0] = ((/* implicit */_Bool) ((arr_31 [i_0] [i_14] [i_14] [i_16] [i_16 - 2]) ? (((/* implicit */int) arr_9 [i_16 + 1])) : (((/* implicit */int) arr_9 [i_16 + 1]))));
                            arr_53 [i_0] = ((/* implicit */signed char) arr_27 [i_0] [i_0]);
                        }
                        for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
                        {
                            arr_57 [i_0] [i_14] [(signed char)13] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_44 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]);
                            arr_58 [i_0 - 1] [(_Bool)1] [i_0] [i_14] [14ULL] = arr_14 [i_17] [i_17];
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) ((short) arr_14 [8ULL] [i_17]))) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    var_37 = ((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_0 + 1] [(unsigned char)14] [i_1] [i_7]);
                    arr_59 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)24)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10))) : (9223372036854775800LL)));
                    var_38 = ((/* implicit */long long int) arr_2 [i_0]);
                }
                for (unsigned short i_18 = 0; i_18 < 19; i_18 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 19; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((long long int) arr_64 [i_0] [i_19] [i_0]))))), (min((arr_43 [i_0] [(short)2] [12] [i_19] [i_20 + 1] [i_19]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_0])))))))));
                                arr_72 [(short)9] [i_1] [10LL] [i_1] [i_1] [i_1] [i_0] = min((((/* implicit */long long int) (+(((/* implicit */int) arr_51 [i_19] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0]))))), ((~(((long long int) (_Bool)0)))));
                                var_40 ^= ((/* implicit */long long int) (~(max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_66 [i_0 + 1] [i_1] [2U] [i_19] [i_1]))))));
                                arr_73 [i_20 + 1] [i_0] [i_0] [7U] = ((/* implicit */unsigned short) arr_22 [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_21 = 0; i_21 < 19; i_21 += 3) 
                    {
                        var_41 = ((/* implicit */signed char) (+(arr_70 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                        arr_76 [i_0] [6ULL] [i_18] = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_21]);
                        arr_77 [i_0] = ((/* implicit */signed char) arr_7 [i_1 + 1] [i_1 - 1] [i_1]);
                        arr_78 [i_0] [i_0] [i_18] [(signed char)8] [i_21] |= ((/* implicit */int) (signed char)40);
                    }
                    arr_79 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)33))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_18] [(unsigned short)17])) ? (((/* implicit */int) min((arr_16 [i_0 + 1] [i_1] [i_0 + 1] [i_1]), (((/* implicit */signed char) arr_21 [i_0] [i_1 + 1] [i_18]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_1 + 1] [i_0])), ((unsigned short)1))))))) : ((-(((((/* implicit */_Bool) arr_22 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_18] [i_0] [i_0] [i_0 - 1])))))));
                }
                arr_80 [i_0] [i_0] = ((max((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]), ((_Bool)1))) ? (((((/* implicit */_Bool) arr_66 [i_0] [i_1] [i_1] [i_0] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (max((((/* implicit */long long int) arr_21 [i_0] [i_1] [i_0])), (arr_42 [i_0] [i_1] [i_0 + 1] [i_0] [i_1 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1908864961U)))))));
                arr_81 [i_0] [i_0] = ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */int) (short)11)) : (1238888558));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_22 = 1; i_22 < 17; i_22 += 3) 
    {
        for (signed char i_23 = 0; i_23 < 18; i_23 += 3) 
        {
            for (short i_24 = 0; i_24 < 18; i_24 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        for (signed char i_26 = 2; i_26 < 16; i_26 += 1) 
                        {
                            {
                                arr_94 [i_22] [i_23] [i_24] [(unsigned char)16] [(short)2] [i_22] = ((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535)));
                                var_42 &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [(short)18] [i_23] [(short)18]))));
                                var_43 = ((/* implicit */short) min((min((((/* implicit */int) (unsigned char)255)), (-144270582))), (max((arr_92 [i_22 + 1] [i_22 + 1] [i_26 + 1] [(_Bool)1] [i_26]), (((/* implicit */int) (short)35))))));
                                arr_95 [i_22] [i_22 - 1] [i_23] [i_22] [i_24] [i_25] [i_23] = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_17 [i_23] [i_22] [i_22] [i_23]), (((/* implicit */unsigned long long int) arr_62 [i_24])))))))), (arr_2 [i_22])));
                            }
                        } 
                    } 
                    arr_96 [i_24] [i_22] [0U] = ((/* implicit */unsigned short) (!(arr_50 [i_22] [i_22] [i_23] [i_23] [i_23] [i_22] [(_Bool)1])));
                }
            } 
        } 
    } 
}
