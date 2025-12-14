/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71389
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */int) var_6)) % (arr_1 [i_1])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-125))));
                        arr_11 [i_3] [i_0] [i_0] = ((/* implicit */long long int) (short)0);
                        /* LoopSeq 3 */
                        for (int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_2] = (+((-(((/* implicit */int) arr_2 [i_0])))));
                            var_15 = ((/* implicit */signed char) ((((max((var_1), (-86373053))) & (((((/* implicit */int) arr_5 [(signed char)4])) % (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_0] [3])))))) * ((~(((/* implicit */int) arr_5 [i_3]))))));
                        }
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] |= ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_9)), (4383246112006648650LL))), (((long long int) (unsigned char)247))))) ? (-7646863315115504013LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [(signed char)12] [6ULL] [i_1]))));
                            var_16 = ((/* implicit */unsigned short) 8939330810181774869ULL);
                            arr_18 [i_0] [i_3] [i_5] = ((/* implicit */int) (short)-32762);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (((unsigned long long int) ((arr_12 [i_3] [i_0]) >> (((var_1) + (393978737)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) 4383246112006648637LL)) ? (-86373079) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_6 - 1] [i_3] [i_6] [i_0]))));
                            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_2] [15] [i_1])))) * (((/* implicit */int) arr_10 [i_6 - 1] [i_6 - 1] [i_0] [i_0] [i_2] [(_Bool)1]))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_10 [i_6 + 1] [i_6] [i_2] [i_6 - 1] [i_2] [i_6 + 1]))));
                            arr_23 [i_0] [i_3] = ((/* implicit */int) arr_13 [i_0] [14ULL] [14ULL] [i_6 - 1] [11ULL]);
                            arr_24 [i_1] [0LL] [i_1] [(short)5] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6 - 1]))) & (((arr_12 [i_2] [i_0]) >> (((/* implicit */int) arr_16 [i_1] [14LL] [3] [i_3] [i_6 - 1] [(unsigned char)9])))));
                        }
                        arr_25 [(unsigned char)12] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */int) arr_20 [(short)10] [i_1] [i_3] [i_3])) : (((/* implicit */int) arr_6 [14]))))) ? (((unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)116)) >> (((arr_8 [i_0] [4ULL] [4ULL]) - (8024481485510221357ULL)))))))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) 6461617610312573787LL)) <= (min((((/* implicit */unsigned long long int) (+(6461617610312573782LL)))), (5386133294089629530ULL))))))));
                    }
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(_Bool)1])) || (((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)57484), (((/* implicit */unsigned short) (unsigned char)124))))) % (((/* implicit */int) var_9)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) arr_21 [(signed char)15] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16704)) == (((/* implicit */int) (signed char)38))));
        var_23 = ((/* implicit */unsigned short) max((((6461617610312573787LL) / (((/* implicit */long long int) ((((arr_27 [i_7]) + (2147483647))) << (((((arr_27 [i_7]) + (345165703))) - (17)))))))), (((/* implicit */long long int) ((arr_26 [i_7 - 1]) > (((/* implicit */int) (signed char)118)))))));
        var_24 = ((/* implicit */unsigned char) ((((arr_27 [i_7 - 2]) % (arr_27 [i_7 - 3]))) * (-1)));
        arr_29 [(unsigned char)1] [i_7] = ((/* implicit */unsigned char) ((-1366944577) / (((/* implicit */int) var_10))));
    }
    for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((short) 2079903380)))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_30 [i_9]))));
                                arr_43 [(signed char)5] [i_9] [i_10] [(short)6] [(short)6] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-110))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_13 = 2; i_13 < 18; i_13 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_27 += min((((17779545073587819562ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_8] [i_9] [i_10] [i_13 + 2] [i_10] [5] [5]))))), (((/* implicit */unsigned long long int) ((short) (signed char)-23))));
                            var_28 ^= ((short) 4396972769280ULL);
                        }
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_37 [i_13 - 2] [6] [i_8] [i_8]))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_15 = 2; i_15 < 16; i_15 += 1) 
                        {
                            var_30 = ((/* implicit */int) arr_30 [(unsigned char)18]);
                            arr_50 [i_8 - 2] [i_8] [i_8] [i_15] [i_8] = ((/* implicit */int) (+(9507413263527776735ULL)));
                        }
                        for (short i_16 = 4; i_16 < 19; i_16 += 1) 
                        {
                            arr_55 [8] [i_16] = ((/* implicit */_Bool) arr_27 [i_8]);
                            var_31 = ((/* implicit */int) max((var_31), (-507013177)));
                            var_32 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_26 [i_8 - 2])) ? (8939330810181774869ULL) : (((/* implicit */unsigned long long int) arr_26 [i_8 + 1]))))));
                            var_33 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_47 [1] [1] [1] [i_13] [i_16] [i_10] [i_8])) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) (~(9)))) : (2028139863700366205ULL))), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) arr_39 [i_10] [3] [6ULL]))));
                        }
                        for (int i_17 = 3; i_17 < 18; i_17 += 2) 
                        {
                            arr_58 [i_9] [i_9] [i_10] [i_13 - 1] |= ((/* implicit */short) ((min((((/* implicit */int) arr_30 [i_8])), (295691458))) >= (-1355319011)));
                            var_35 = ((/* implicit */int) min((var_35), (507013177)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            arr_61 [10ULL] = ((/* implicit */short) ((arr_46 [i_13] [i_13 - 2] [i_13 + 2] [i_13 - 1] [i_13 - 1]) | (((/* implicit */long long int) -1913954087))));
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) arr_60 [(_Bool)1] [i_8] [i_10] [i_9] [i_9] [i_8 - 1] [i_8])) ? (((/* implicit */unsigned long long int) 268435455)) : (arr_52 [i_8] [i_9] [i_10] [i_13 - 2] [i_18]))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        for (signed char i_20 = 0; i_20 < 20; i_20 += 2) 
                        {
                            {
                                arr_67 [i_20] [i_20] [(short)15] [i_20] [i_20] &= (~(((/* implicit */int) (short)-1)));
                                var_37 *= ((/* implicit */short) arr_44 [i_8]);
                            }
                        } 
                    } 
                    arr_68 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_10])) ? (17458511416942303038ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45)))))) ? (((/* implicit */int) arr_49 [i_8 - 1] [(_Bool)1] [i_8 - 3] [i_8 - 2])) : (((/* implicit */int) arr_49 [i_8 + 1] [i_8 + 1] [i_8 + 1] [6LL]))))) ? (988232656767248578ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_10] [i_10] [i_9] [(unsigned char)9] [i_8])) ? (((/* implicit */long long int) arr_57 [i_9] [i_9] [18ULL] [i_9])) : (((((/* implicit */_Bool) 0ULL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */short) var_12);
}
