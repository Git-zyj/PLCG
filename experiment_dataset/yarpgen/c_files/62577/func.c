/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62577
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
    var_12 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9)))), (((((/* implicit */_Bool) (signed char)5)) ? (0ULL) : (13298637357462111803ULL))))), (((((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_10))))) ? (((((/* implicit */_Bool) (unsigned char)185)) ? (13298637357462111815ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((var_3) ? (2622610413U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((unsigned char) var_7))), (min((((/* implicit */unsigned long long int) (unsigned char)18)), (0ULL))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (5148106716247439821ULL))), (((/* implicit */unsigned long long int) var_10))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) var_6);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-126)) ? (29360128U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), ((_Bool)1))))))), (((/* implicit */unsigned int) var_10))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) arr_1 [i_0] [i_0]))), (((((/* implicit */_Bool) 4290788676U)) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) var_3)), (var_9)))))) : ((+(max((29360128U), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_2 + 1]))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (((-2315385270856852890LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185)))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 3; i_4 < 9; i_4 += 1) 
            {
                for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    {
                        arr_17 [0ULL] [0ULL] [i_4] [0ULL] [0ULL] |= ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [(_Bool)1]);
                        var_15 = ((/* implicit */unsigned short) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1696757369U))))), (min((((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-31225))))), (var_8)))));
            arr_18 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 2147483647)) : (arr_4 [i_3] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_13 [i_0] [i_0] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) < (3758096384U)))))));
            var_17 -= ((/* implicit */unsigned long long int) (~(((arr_15 [i_3 + 2] [i_3] [i_3] [i_3 + 2] [i_3 + 1] [4U]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))));
        }
        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            var_18 &= ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */int) var_0)) : (((arr_15 [i_0] [(short)1] [i_0] [i_6] [6] [i_6]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))));
            /* LoopNest 3 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_19 -= ((/* implicit */_Bool) min((((/* implicit */int) var_11)), (min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (unsigned char)79)))), (((/* implicit */int) arr_31 [i_6] [i_7 - 1] [i_8] [i_8] [i_9]))))));
                            arr_32 [i_0] [i_0] [i_7] [i_8] [(signed char)2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)28918)))));
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (1478314874) : (((/* implicit */int) (short)9722))));
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1])))))));
                            arr_34 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((13298637357462111798ULL) == (0ULL))))) : (var_9)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1478314862)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_35 [i_11] [i_6])));
                    arr_41 [i_10] = ((/* implicit */_Bool) ((unsigned char) arr_27 [i_11] [i_6] [i_10] [i_10] [(_Bool)0]));
                }
                for (signed char i_12 = 4; i_12 < 10; i_12 += 4) 
                {
                    arr_45 [(_Bool)1] [i_6] [(_Bool)1] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_12])) ? (arr_13 [i_0] [5U] [i_10] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        var_22 += ((/* implicit */signed char) (unsigned short)16380);
                        var_23 = ((/* implicit */_Bool) var_5);
                    }
                    for (unsigned short i_14 = 3; i_14 < 9; i_14 += 4) 
                    {
                        var_24 &= (((_Bool)0) ? (((/* implicit */int) arr_28 [i_14] [i_14 - 2] [i_14] [5] [i_14] [i_14])) : (((/* implicit */int) arr_15 [i_0] [i_14 - 3] [i_14] [i_14] [10] [i_14 - 3])));
                        arr_51 [i_10] [i_10] = ((/* implicit */unsigned short) ((arr_14 [i_10] [i_12]) ? (((/* implicit */unsigned int) arr_3 [i_6] [i_10] [i_14])) : (2390203217U)));
                    }
                    for (unsigned int i_15 = 2; i_15 < 8; i_15 += 3) 
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((((/* implicit */_Bool) 7554910072983357390ULL)) ? (((/* implicit */unsigned long long int) 370262118)) : (6ULL))))))));
                        var_26 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) 598464525U)))));
                        arr_54 [i_0] [i_6] [(signed char)3] [i_0] [i_10] [i_12] = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) (unsigned char)115))) ^ (2386651861U)));
                        var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [4U] [i_6] [i_12] [i_12])) ? (arr_52 [i_12 + 1] [i_12 - 4] [i_12 - 4] [i_12 - 4] [i_12 + 1]) : (((/* implicit */int) var_2))));
                    }
                    var_28 = (((_Bool)1) ? (3999955504U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                }
                for (short i_16 = 2; i_16 < 10; i_16 += 1) 
                {
                    var_29 ^= ((/* implicit */_Bool) ((unsigned short) ((unsigned int) var_6)));
                    arr_57 [i_0] [i_6] [i_6] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_0] [5U] [5U] [i_16] [i_16 - 1])) ? (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_16 + 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) arr_1 [i_16 + 1] [i_16 - 2]))));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_11))));
                }
                arr_58 [i_0] [i_10] [i_10] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_50 [i_0] [i_6] [1ULL] [i_10] [1ULL]))));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 2; i_18 < 8; i_18 += 2) 
                {
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_66 [i_0] [i_0] [i_0] [(_Bool)0] [i_0] [i_0] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)22))))));
                            arr_67 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */int) var_11)), (((int) var_3))));
                            arr_68 [i_0] [i_6] [i_17] [(unsigned short)9] [i_19] = ((/* implicit */unsigned char) (+(5989097523872338496ULL)));
                            arr_69 [i_0] [(_Bool)1] [i_17] [(short)8] [(_Bool)1] = ((/* implicit */signed char) ((unsigned char) (unsigned short)925));
                        }
                    } 
                } 
                var_31 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (-1901201508)))), (830173522U)));
                arr_70 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1046736502)) && (((/* implicit */_Bool) arr_0 [i_6])))))) < (max((2315385270856852911LL), (((/* implicit */long long int) var_7))))))), ((+(((unsigned int) var_9))))));
                arr_71 [i_0] [i_0] [(unsigned short)2] = ((/* implicit */unsigned short) var_9);
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1901201507)))))));
            }
            /* vectorizable */
            for (unsigned short i_20 = 1; i_20 < 7; i_20 += 3) 
            {
                var_33 += ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_0] [i_0] [i_6] [i_20]))))) ? (((unsigned long long int) arr_26 [i_0] [i_0] [i_0] [4ULL] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_5) : (var_5)))));
                var_34 *= ((/* implicit */unsigned short) ((unsigned long long int) ((_Bool) var_2)));
            }
            for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 2) 
            {
                arr_77 [i_21] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_0)), (2315385270856852911LL)))))) ? (((/* implicit */int) ((signed char) arr_42 [i_0] [i_6] [3U] [i_6] [i_6]))) : (((/* implicit */int) var_1))));
                arr_78 [i_21] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) : (2315385270856852911LL)))));
            }
            arr_79 [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) max((1ULL), (18446744073709551614ULL))));
        }
        for (unsigned long long int i_22 = 1; i_22 < 10; i_22 += 4) 
        {
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) max((104500724U), (((/* implicit */unsigned int) (_Bool)1)))))));
            var_36 = ((/* implicit */int) ((_Bool) var_1));
            arr_83 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_60 [i_22 - 1] [i_22 + 1]), (arr_60 [i_22 + 1] [i_22 + 1])))) ? (((unsigned long long int) arr_60 [i_22 + 1] [i_22 + 1])) : ((+(arr_60 [i_22 + 1] [i_22 + 1])))));
        }
        arr_84 [i_0] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_11)))));
    }
    for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
    {
        arr_89 [i_23] [i_23] = var_4;
        var_37 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_21 [i_23]), (arr_21 [i_23]))))) <= (((unsigned long long int) ((5118560808780846128ULL) < (1ULL))))));
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 11; i_24 += 3) 
        {
            for (unsigned int i_25 = 2; i_25 < 9; i_25 += 4) 
            {
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_38 += ((/* implicit */unsigned long long int) var_5);
                        arr_96 [i_23] [i_26] [i_25 - 2] [(unsigned char)9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (((var_1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_23] [i_24] [i_23]) : (((/* implicit */int) var_1))))) : (max((((/* implicit */long long int) arr_62 [i_23])), (var_5)))))));
                    }
                } 
            } 
        } 
    }
    var_39 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (4ULL) : (6636494896529714033ULL)));
    var_40 = ((/* implicit */signed char) 72057589742960640ULL);
}
