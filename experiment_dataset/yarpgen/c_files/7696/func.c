/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7696
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)62123))));
                    arr_11 [i_0] [7] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 17267194636863259789ULL))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 1; i_3 < 10; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
            {
                arr_16 [i_0] [i_3 - 1] [i_4] = ((/* implicit */long long int) var_14);
                arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((int) (~(((/* implicit */int) (short)5943)))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_3] [(unsigned char)8] [i_5 + 1] [i_6] = ((/* implicit */unsigned char) (unsigned short)62123);
                            arr_26 [i_6] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_5] [i_3 - 1]))));
                            var_16 = ((unsigned long long int) arr_5 [i_3 - 1] [i_0] [i_5 - 1]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_18 [i_3 - 1] [i_0] [i_4]))));
            }
            for (long long int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
            {
                arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
                var_18 += ((/* implicit */unsigned char) -208205100);
                /* LoopSeq 3 */
                for (int i_8 = 3; i_8 < 11; i_8 += 1) /* same iter space */
                {
                    var_19 += ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned int) 1517522550)) : (var_2))));
                    var_20 = (((+(((/* implicit */int) arr_33 [i_0] [i_0])))) * (((/* implicit */int) var_13)));
                }
                for (int i_9 = 3; i_9 < 11; i_9 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) arr_23 [i_0] [5ULL] [i_7] [i_9 - 3] [i_3] [i_7] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 3; i_10 < 10; i_10 += 1) 
                    {
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                        var_22 = ((((/* implicit */_Bool) (unsigned short)34658)) ? (((/* implicit */int) arr_5 [i_7] [i_0] [i_10 - 2])) : (arr_13 [i_0]));
                        var_23 = (~(arr_20 [i_3] [i_3] [9ULL] [i_7] [i_9 - 1] [i_10 - 3]));
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [9U] [i_3] [i_0] [i_9 + 1] [i_9 - 1] [(short)1] [i_9 + 1]))) / (arr_24 [i_0] [(short)2] [(short)10] [(_Bool)1] [2] [i_10]))))));
                    }
                    arr_40 [i_0] = ((/* implicit */signed char) var_12);
                }
                for (int i_11 = 3; i_11 < 11; i_11 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((1547479028631172429ULL) <= (((/* implicit */unsigned long long int) arr_32 [i_7] [i_11 - 1])))))));
                    var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_7] [5ULL]))));
                    var_27 = ((/* implicit */unsigned long long int) var_13);
                    arr_43 [(signed char)11] [i_0] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) arr_41 [i_3 + 2] [i_11 - 2] [i_11 - 2] [i_11 + 1])) : (284763665765623647ULL)));
                }
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    var_28 ^= ((/* implicit */unsigned int) ((((arr_36 [i_0] [i_7] [i_0] [i_12] [i_3 - 1] [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7]))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_29 = ((/* implicit */int) ((long long int) ((var_10) ^ (var_11))));
                    var_30 = ((/* implicit */long long int) ((arr_24 [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1] [i_3 + 2] [i_3 - 1]) & (arr_24 [i_12 + 1] [i_12] [i_3 - 1] [i_12 + 1] [i_3 + 2] [i_3 - 1])));
                }
            }
            for (long long int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 2; i_14 < 11; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        {
                            arr_55 [i_0] [i_3] [i_0] [i_0] [i_14] [i_15] = var_13;
                            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_15] [i_0] [i_3] [i_0]))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) var_7))));
            }
            arr_56 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_5)) * (arr_12 [i_0]))) >= (((/* implicit */unsigned long long int) var_11))));
            var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)62119))));
            var_34 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [(unsigned short)8] [i_0] [2ULL])) << (((((/* implicit */int) arr_37 [i_0] [i_0] [i_3] [2ULL] [i_0] [i_3 + 1])) - (56)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [(unsigned short)8] [i_0] [2ULL])) << (((((((/* implicit */int) arr_37 [i_0] [i_0] [i_3] [2ULL] [i_0] [i_3 + 1])) - (56))) - (31))))));
        }
        for (int i_16 = 1; i_16 < 10; i_16 += 3) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned short)37454))));
            arr_59 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_2)));
        }
        arr_60 [i_0] = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)145));
    }
    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_18 = 3; i_18 < 9; i_18 += 4) 
        {
            for (int i_19 = 0; i_19 < 10; i_19 += 2) 
            {
                for (unsigned char i_20 = 1; i_20 < 9; i_20 += 1) 
                {
                    {
                        arr_73 [i_17] [i_18] [i_20] [i_19] [2] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(var_11)))))) ? (min((((arr_24 [i_17] [10U] [i_17] [8ULL] [i_17] [i_20]) / (((/* implicit */unsigned long long int) 351907867)))), (((/* implicit */unsigned long long int) (+(arr_13 [i_20])))))) : (((/* implicit */unsigned long long int) max((((arr_36 [(unsigned char)5] [i_20] [i_18 + 1] [i_18 - 3] [(unsigned char)10] [i_19] [i_20]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_17] [i_18 - 1] [i_17] [11LL] [i_20 + 1] [i_20] [i_19]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)2)) << (((var_15) + (2963404517335862387LL)))))))))));
                        arr_74 [i_17] [i_19] [i_20] [i_20] = ((/* implicit */_Bool) arr_2 [i_17]);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            var_36 = ((/* implicit */int) arr_63 [i_21]);
            var_37 = ((/* implicit */unsigned char) ((short) (-(arr_34 [i_17] [i_21]))));
            arr_79 [i_17] [i_21] [i_21] = ((/* implicit */unsigned short) ((unsigned long long int) arr_41 [i_21] [i_21 - 1] [i_21] [i_21 - 1]));
            /* LoopSeq 1 */
            for (unsigned char i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                var_38 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_17] [i_17] [2U] [i_21] [i_21] [i_21 - 1] [i_22])) >> (((((/* implicit */int) arr_67 [i_22] [i_21] [i_17] [i_17])) + (26897)))));
                var_39 *= ((/* implicit */unsigned short) arr_47 [i_17] [0] [i_22]);
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 10; i_23 += 3) 
                {
                    for (unsigned char i_24 = 0; i_24 < 10; i_24 += 2) 
                    {
                        {
                            arr_90 [i_17] [i_17] [i_21] [i_21] [i_23] [i_23] [i_24] = ((/* implicit */short) ((unsigned char) arr_27 [(signed char)9] [1ULL] [i_21 - 1] [i_23]));
                            var_40 += ((/* implicit */unsigned char) (-(((int) arr_36 [i_17] [i_22] [4ULL] [i_22] [i_23] [i_24] [i_24]))));
                            arr_91 [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_61 [i_21 - 1]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_25 = 3; i_25 < 9; i_25 += 3) /* same iter space */
                {
                    arr_94 [i_17] [i_21] [i_21] [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_21])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_17])) ? (-1814567495) : (var_5)))) : (arr_46 [i_21] [(unsigned char)3] [(unsigned char)1] [i_25])));
                    arr_95 [i_21] [i_25 - 3] = ((/* implicit */unsigned long long int) ((unsigned char) arr_12 [i_21]));
                }
                for (long long int i_26 = 3; i_26 < 9; i_26 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_27 = 1; i_27 < 8; i_27 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) arr_50 [i_17] [i_26 - 3] [i_21 - 1] [i_27 - 1]))));
                        var_42 ^= ((/* implicit */unsigned char) arr_35 [i_22]);
                    }
                    for (unsigned long long int i_28 = 1; i_28 < 8; i_28 += 1) /* same iter space */
                    {
                        arr_105 [i_17] [i_17] [i_17] [i_17] [i_17] [i_21] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_64 [i_21] [i_28]) >= (((/* implicit */long long int) ((/* implicit */int) arr_22 [(unsigned short)10] [i_17] [i_21] [i_21] [i_21] [i_21] [i_28 - 1])))))) > ((-(((/* implicit */int) var_6))))));
                        arr_106 [i_17] [i_21] [i_26] [i_26] [i_28] [i_17] [i_21] = ((/* implicit */long long int) (_Bool)1);
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_50 [i_21 - 1] [i_26 - 2] [i_28 - 1] [i_28 + 2])) : (((/* implicit */int) arr_50 [i_21 - 1] [i_26 - 2] [i_28 - 1] [i_28 + 1]))));
                        var_44 = ((/* implicit */long long int) arr_97 [i_17] [(_Bool)0] [1ULL] [i_21] [i_28 + 1] [i_26]);
                    }
                    for (unsigned long long int i_29 = 1; i_29 < 8; i_29 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */long long int) arr_82 [i_26] [6U] [i_26] [i_26 - 1]);
                        var_46 += ((/* implicit */unsigned char) 947167603);
                        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) var_7))));
                        arr_109 [6U] [i_21] [i_22] [i_22] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_67 [i_17] [i_21] [i_22] [i_22])) ? ((~(((/* implicit */int) arr_96 [i_22])))) : (((/* implicit */int) ((((/* implicit */int) arr_51 [0LL] [i_21] [i_21] [i_22] [i_26] [i_29] [0LL])) >= (arr_29 [i_17] [i_17] [i_22] [i_26]))))));
                    }
                    var_48 = ((/* implicit */long long int) ((unsigned short) var_2));
                }
            }
        }
        /* vectorizable */
        for (int i_30 = 0; i_30 < 10; i_30 += 4) 
        {
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 10; i_31 += 3) 
            {
                for (unsigned char i_32 = 0; i_32 < 10; i_32 += 1) 
                {
                    {
                        arr_119 [i_17] [i_30] [i_17] [i_32] [i_31] [(unsigned char)1] = arr_7 [i_17];
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_42 [i_17] [i_30] [(_Bool)1] [i_32])) > (((arr_100 [i_17] [8] [(_Bool)1]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6043)))))));
                        var_50 = ((((/* implicit */int) (unsigned short)3422)) + (((/* implicit */int) arr_71 [i_30] [i_30])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_33 = 0; i_33 < 10; i_33 += 3) 
            {
                for (unsigned long long int i_34 = 1; i_34 < 9; i_34 += 2) 
                {
                    {
                        var_51 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_34 + 1] [i_30] [i_30] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (unsigned short)38820))));
                        var_52 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_113 [i_17])) ? (208205085) : (((/* implicit */int) arr_89 [i_30] [i_30] [2U] [i_30] [2U]))));
                        var_53 &= ((/* implicit */long long int) ((unsigned char) var_15));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_35 = 1; i_35 < 8; i_35 += 1) 
            {
                for (unsigned char i_36 = 0; i_36 < 10; i_36 += 3) 
                {
                    for (signed char i_37 = 0; i_37 < 10; i_37 += 2) 
                    {
                        {
                            arr_134 [i_36] [i_35] = ((/* implicit */unsigned long long int) ((unsigned int) (~(var_15))));
                            var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) 1054854393))));
                        }
                    } 
                } 
            } 
            var_55 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)20)) ? (-1941148579129623376LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))));
        }
        arr_135 [i_17] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_17]) : (((/* implicit */unsigned long long int) 4551372834605874477LL))))) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (var_4)))) : (((arr_81 [i_17]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
        var_56 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(1233878999U)))), (((((/* implicit */_Bool) min((var_2), (arr_123 [(signed char)6] [i_17] [(signed char)6])))) ? (arr_46 [(unsigned short)6] [i_17] [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3412)) && (((/* implicit */_Bool) arr_98 [i_17] [i_17] [i_17] [(_Bool)1] [i_17]))))))))));
    }
    for (unsigned char i_38 = 0; i_38 < 14; i_38 += 3) 
    {
        var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (max((arr_136 [i_38]), (arr_136 [i_38]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
        var_58 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7709926272261507439LL)) ? (arr_136 [5]) : (((/* implicit */long long int) arr_137 [i_38]))))) ? (arr_136 [i_38]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_136 [i_38]))))))) * (((((unsigned long long int) arr_136 [0U])) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_137 [i_38]) < (arr_137 [i_38])))))))));
        arr_138 [i_38] &= ((/* implicit */unsigned char) -208205100);
        /* LoopSeq 1 */
        for (unsigned short i_39 = 3; i_39 < 13; i_39 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_40 = 1; i_40 < 13; i_40 += 3) 
            {
                for (unsigned int i_41 = 4; i_41 < 13; i_41 += 3) 
                {
                    {
                        var_59 = ((/* implicit */unsigned char) (~(arr_137 [i_38])));
                        /* LoopSeq 2 */
                        for (long long int i_42 = 0; i_42 < 14; i_42 += 4) 
                        {
                            var_60 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)84)) | (var_5)));
                            arr_149 [i_42] [i_41] [i_40 + 1] [(_Bool)1] [i_42] |= ((/* implicit */int) ((arr_143 [i_40 - 1] [i_39 - 2]) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) var_1)) : (-208205090)))), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_141 [i_39] [i_40 + 1] [i_42])))) < (max((((/* implicit */unsigned long long int) var_10)), (arr_147 [i_42] [i_42])))))))));
                        }
                        for (unsigned char i_43 = 4; i_43 < 11; i_43 += 4) 
                        {
                            var_61 &= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_139 [i_39 - 2] [i_38])))));
                            var_62 = ((/* implicit */unsigned char) arr_151 [i_43 - 2] [i_43] [(_Bool)1] [i_43] [(_Bool)1] [i_40] [(_Bool)1]);
                        }
                    }
                } 
            } 
            var_63 = ((/* implicit */unsigned char) var_8);
        }
    }
    for (short i_44 = 3; i_44 < 15; i_44 += 3) 
    {
        arr_155 [i_44] = ((/* implicit */long long int) ((((/* implicit */_Bool) -2081939699)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55673))) : (1203957321424390452ULL)));
        var_64 = ((/* implicit */signed char) max((var_64), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_154 [i_44 - 3]))))), (((((/* implicit */_Bool) arr_153 [i_44 + 1])) ? (arr_153 [i_44 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
    }
    var_65 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) var_6)));
}
