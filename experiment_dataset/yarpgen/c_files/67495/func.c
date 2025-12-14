/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67495
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
    var_12 = ((/* implicit */unsigned char) ((unsigned int) var_2));
    var_13 |= (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_7)))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_2)) / (var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) (-(7421573488584694771ULL)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) var_7);
                    var_16 ^= (-((-(((/* implicit */int) var_3)))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_6 [i_0] [i_1] [i_1 + 4] [i_0]))));
                            var_18 = ((/* implicit */long long int) var_2);
                            arr_11 [i_2] [i_1 + 4] [i_2] [17U] [i_1 - 1] = ((/* implicit */unsigned int) var_0);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1] [i_5])) ? (7421573488584694789ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) >> (((/* implicit */int) var_9))));
                            var_20 = ((/* implicit */int) (~((~(var_7)))));
                            var_21 = ((/* implicit */unsigned long long int) (-(arr_0 [i_1 - 1])));
                            var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [21ULL] [(unsigned char)23] [(unsigned char)21] [i_1 + 2] [i_0] [i_0])) ? (arr_13 [i_0] [i_0] [i_1 + 1] [16U] [(signed char)5] [16U]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2))))));
                            arr_16 [i_0] [i_2] [i_2] [17] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [(short)11] [i_0] [i_0] [(short)11] [i_1 + 1] [i_1 + 4]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) (~(-679757193)));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_1)) : (var_6)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [23U] [i_1] [i_2] [i_3] [(unsigned char)22])))));
                            arr_19 [i_2] [8U] [i_2] [i_2] [i_1 + 2] [i_1 + 2] [i_2] = ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_1] [i_2]);
                            var_25 = ((/* implicit */_Bool) ((unsigned long long int) arr_8 [(_Bool)1] [4U] [i_1 + 1] [i_1 + 1] [i_2] [i_6]));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((arr_17 [i_0]) + (arr_7 [i_0] [i_1 + 2] [i_1 + 3] [i_0]))))));
                        }
                        var_27 ^= ((/* implicit */unsigned long long int) var_6);
                        arr_20 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (~(arr_13 [i_0] [i_1] [i_1 + 2] [i_1] [i_2] [i_3])));
                        arr_21 [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) > (859238461U))))) % (7421573488584694789ULL)));
                        var_28 = ((/* implicit */short) -4014480820778913401LL);
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_29 += ((/* implicit */signed char) ((var_9) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7328215706592534452LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))) : (var_10)));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((arr_4 [i_1] [0U] [i_1 + 2] [i_1 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) ((7421573488584694767ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [18U] [i_0] [i_0])))))))))));
                        arr_24 [i_7] &= ((/* implicit */signed char) (!((!(arr_12 [16U] [i_1] [i_1] [(signed char)16] [i_0] [8ULL])))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_27 [i_2] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [(short)15] [i_0] [(short)15] [i_1 - 1])) ? (5661142U) : (var_1)));
                        var_31 = ((/* implicit */unsigned int) var_0);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_30 [i_2] [(signed char)16] [i_2] [i_2] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_1] [i_1 + 2] [i_1 - 1] [i_1])) & (((/* implicit */int) var_11))));
                        var_32 ^= ((/* implicit */short) ((unsigned long long int) arr_1 [i_0]));
                        var_33 ^= ((/* implicit */long long int) (~(7968147354843108159ULL)));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1167590477)) : (var_10))))));
                    }
                }
            } 
        } 
        var_35 |= ((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) - (2880539153441225770ULL)))));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 3; i_11 < 22; i_11 += 2) 
            {
                var_36 ^= ((/* implicit */_Bool) 11222410739351453632ULL);
                var_37 = ((((/* implicit */_Bool) (-(var_2)))) ? (((unsigned long long int) arr_7 [i_0] [i_10] [i_10] [i_0])) : (((unsigned long long int) -1761957686)));
            }
            /* LoopSeq 4 */
            for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 679757192);
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_13] [i_14 - 1])) - (arr_42 [i_14] [i_14 + 3] [i_14 + 3] [i_14 + 3])));
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((unsigned int) arr_35 [i_0] [i_10] [i_10])))));
            }
            for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) * (var_10)));
                var_42 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -679757192)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_10] [i_0] [i_15])))))) && (((/* implicit */_Bool) 9872175131529287671ULL))));
                var_44 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) var_4)));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_45 *= ((/* implicit */signed char) (~(17862662793769686547ULL)));
                var_46 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-30)) != (((/* implicit */int) arr_2 [i_16]))));
                var_47 = ((/* implicit */short) (~(((/* implicit */int) ((4014480820778913393LL) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [(short)4])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_10] [i_16]))));
                arr_53 [i_0] [i_10] |= ((/* implicit */short) var_11);
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                arr_56 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))) > (var_2)));
                var_49 = ((/* implicit */unsigned long long int) ((unsigned int) var_2));
                arr_57 [i_0] [i_0] [i_17] [i_17] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_0] [i_0] [i_17]))));
            }
            /* LoopSeq 1 */
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
                {
                    arr_63 [23ULL] [i_18] [23ULL] [(_Bool)1] [23ULL] = ((/* implicit */signed char) (~(((/* implicit */int) arr_14 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18] [i_18 - 1] [i_18]))));
                    var_50 = ((/* implicit */short) (+(arr_58 [i_19] [i_18 - 1] [i_10] [i_0])));
                    arr_64 [i_18] [i_10] [i_10] [15ULL] = ((/* implicit */_Bool) (-((+(3614443233U)))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 2) /* same iter space */
                {
                    var_51 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((675390242U) - (var_2)))) * (var_10)));
                    var_52 = ((/* implicit */unsigned long long int) ((long long int) ((var_11) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))))));
                    arr_67 [i_0] [i_18] = ((/* implicit */long long int) ((unsigned long long int) var_3));
                    arr_68 [i_0] [i_10] [23] [i_20] [23] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) >= (var_0)));
                }
                var_53 = ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) 8402501659984030774ULL))))));
                var_54 += ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_3 [i_18 - 1] [i_18 - 1] [i_18 - 1])) ^ (arr_37 [i_18 - 1] [i_18] [i_18 - 1] [i_18 - 1])));
                arr_69 [i_0] [i_18] = ((/* implicit */short) -1160311424);
                var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_58 [i_0] [i_18] [i_18 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_18 - 1] [i_18 - 1] [i_18] [i_18 - 1] [i_18]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_0 [i_0])))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_21 = 2; i_21 < 22; i_21 += 4) 
            {
                var_56 = ((/* implicit */unsigned int) (+(var_0)));
                var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) ((var_4) & (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_21 - 2] [i_21 - 2])))))));
                var_58 = ((/* implicit */long long int) var_10);
            }
            for (int i_22 = 0; i_22 < 24; i_22 += 3) 
            {
                arr_74 [i_0] [i_10] [i_22] = ((/* implicit */long long int) var_11);
                var_59 += ((/* implicit */signed char) arr_35 [i_0] [i_10] [i_22]);
                /* LoopSeq 1 */
                for (unsigned long long int i_23 = 3; i_23 < 21; i_23 += 2) 
                {
                    arr_78 [i_23] &= ((/* implicit */long long int) arr_75 [i_0] [i_10] [i_22] [i_23 - 3]);
                    arr_79 [i_23] [i_22] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_38 [i_23 - 2] [i_23 - 1] [i_23 + 2] [i_23 + 3]) <= (arr_38 [1] [i_23 + 1] [i_23 - 2] [i_23 - 2])));
                }
            }
        }
    }
}
