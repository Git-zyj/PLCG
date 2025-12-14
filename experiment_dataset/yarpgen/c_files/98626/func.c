/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98626
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 |= ((/* implicit */short) (~(((((/* implicit */unsigned int) 1955815488)) * (((unsigned int) arr_0 [i_2 + 4]))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (arr_4 [i_0] [i_0] [i_0])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((arr_5 [i_0] [14U] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */int) min((min((var_9), (((/* implicit */short) (signed char)39)))), (((/* implicit */short) ((((/* implicit */_Bool) 1955815488)) || (var_8))))))) : (-1955815489)));
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_0))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_14 [i_6] [2] [i_4] [i_3] [i_0])))))) ? (((/* implicit */unsigned long long int) (-(((1060248494U) & (((/* implicit */unsigned int) 1955815489))))))) : (max((max((0ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) 5392640940985448943LL))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) var_7)) <= (arr_13 [i_0] [i_0] [i_3] [i_3] [i_4])))), ((-(((((/* implicit */int) (_Bool)0)) / (-1955815489)))))));
                var_22 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
            }
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                var_23 |= ((/* implicit */unsigned long long int) (unsigned short)39401);
                var_24 = ((/* implicit */_Bool) ((unsigned int) min((((long long int) 1060248494U)), (arr_19 [(unsigned short)7] [i_0] [i_3] [i_3] [i_3] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (~(-1955815489)));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_9 [i_0] [i_8] [(short)8]))));
                            var_27 = ((/* implicit */int) ((((min((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_9] [i_8] [i_7])) | (((/* implicit */int) var_3))))), (((((/* implicit */long long int) arr_16 [i_0])) - (arr_20 [i_0] [(unsigned short)4] [i_8]))))) + (9223372036854775807LL))) << (((((/* implicit */int) max((max((var_9), (((/* implicit */short) (signed char)72)))), (((/* implicit */short) var_8))))) - (72)))));
                            var_28 = ((/* implicit */long long int) max((((unsigned int) ((unsigned long long int) (short)21841))), (((((/* implicit */unsigned int) ((1353203463) - (((/* implicit */int) (unsigned short)64912))))) - (arr_14 [i_0] [i_8] [i_7] [i_8] [i_7])))));
                            var_29 = ((/* implicit */int) arr_20 [i_0] [i_9] [4LL]);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [i_0] [(unsigned short)15] [(unsigned short)21] [(unsigned short)15])) * (((/* implicit */int) ((signed char) arr_18 [i_7] [i_7] [i_3] [i_0] [i_0])))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) (-(min(((~(var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))))))));
                            var_32 = ((unsigned char) ((unsigned long long int) 10542194400290497189ULL));
                            var_33 = ((/* implicit */unsigned short) min((((min((68719476735LL), (((/* implicit */long long int) -1)))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35522))))), (((/* implicit */long long int) (~(((1992658084U) >> (((((/* implicit */int) arr_11 [(_Bool)1] [i_3])) - (503))))))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) - (((unsigned long long int) arr_16 [i_3]))))));
                var_35 = ((/* implicit */unsigned short) 4073555162U);
            }
            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (unsigned short)65535))));
            /* LoopSeq 2 */
            for (signed char i_13 = 1; i_13 < 21; i_13 += 3) 
            {
                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)15834)), (arr_25 [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_13 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1922685952766503659LL)) <= (18446744073709551615ULL))))) : (max((7134598002779678199ULL), (((/* implicit */unsigned long long int) ((1139120343) / (((/* implicit */int) (short)18122)))))))));
                var_38 = ((/* implicit */unsigned long long int) ((int) 3840649878638537039ULL));
            }
            for (signed char i_14 = 3; i_14 < 21; i_14 += 1) 
            {
                var_39 = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) -1922685952766503659LL)))))), (((int) arr_33 [i_0] [i_3] [i_14] [i_0] [0]))));
                /* LoopSeq 4 */
                for (unsigned long long int i_15 = 2; i_15 < 21; i_15 += 3) 
                {
                    var_40 = (~(max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-72))))), (min((arr_37 [7] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) var_2)))))));
                    var_41 = ((/* implicit */unsigned long long int) ((_Bool) ((arr_17 [i_14 - 2] [(short)4] [i_14 + 1] [i_15 - 2] [9ULL]) == (((/* implicit */int) (unsigned short)12665)))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 3; i_16 < 21; i_16 += 3) /* same iter space */
                {
                    var_42 = ((int) var_13);
                    var_43 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_0] [i_3] [i_14 - 3])) ? ((~(8656673929926234630ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_14 - 2] [i_14 + 1])))));
                    var_44 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 2373467382822467290LL)) || (((/* implicit */_Bool) 1992658084U))));
                }
                for (unsigned int i_17 = 3; i_17 < 21; i_17 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (-1950399304)))) ? (min((var_2), (((/* implicit */int) (unsigned short)43955)))) : (((((/* implicit */int) var_14)) >> (((((/* implicit */int) arr_39 [i_14] [i_0] [i_17 - 1])) - (41099)))))));
                        var_46 |= ((/* implicit */short) (-(((-4033030025482814084LL) + (max((-6320012272648841123LL), (((/* implicit */long long int) 3593279597U))))))));
                        var_47 = ((/* implicit */signed char) (~((~(123237556U)))));
                    }
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16750))))))))));
                        var_49 = ((/* implicit */unsigned int) ((max((((120458008U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))), (4294967295U))) > (((/* implicit */unsigned int) (~(((/* implicit */int) (short)20923)))))));
                        var_50 = ((((/* implicit */_Bool) min((arr_44 [i_17 + 1] [i_14 - 1]), ((unsigned short)64139)))) || (((var_5) != (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)1))))))));
                    }
                    var_51 = ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) var_14)))));
                    /* LoopSeq 4 */
                    for (unsigned short i_20 = 0; i_20 < 22; i_20 += 4) 
                    {
                        var_52 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 16983094978748973088ULL)))))));
                        var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_17 - 2] [i_14] [i_17 - 2])) - (((/* implicit */int) arr_40 [i_17 - 3] [i_14] [i_17 - 3]))))) ? (arr_48 [i_0] [i_3] [i_20] [i_17] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12830)))));
                    }
                    for (short i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        var_54 |= (~(((unsigned int) arr_51 [i_14] [i_14 - 2] [i_14 + 1] [(unsigned short)7] [i_14])));
                        var_55 = ((/* implicit */unsigned short) arr_10 [i_14] [i_17]);
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 4) 
                    {
                        var_56 = ((125829120) & (((/* implicit */int) ((2027647345) > (((/* implicit */int) var_3))))));
                        var_57 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) min((((/* implicit */long long int) var_7)), (-308967219152563387LL)))))));
                        var_58 |= ((unsigned long long int) (~(min((((/* implicit */unsigned int) (signed char)5)), (2766412074U)))));
                    }
                    for (long long int i_23 = 1; i_23 < 20; i_23 += 1) 
                    {
                        var_59 |= ((/* implicit */unsigned int) ((max((arr_1 [i_14 - 3]), (((/* implicit */int) arr_56 [i_0] [(signed char)8] [i_14 - 3] [i_17 - 3] [i_23 + 2] [i_23] [i_23 - 1])))) != (15626872)));
                        var_60 |= ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_52 [i_23] [i_17] [3] [i_3] [i_0])))));
                        var_61 = ((/* implicit */unsigned int) var_8);
                    }
                }
                for (unsigned int i_24 = 3; i_24 < 21; i_24 += 3) /* same iter space */
                {
                    var_62 = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_12)), (arr_45 [i_3] [i_3] [i_3] [i_14])))))) ? (arr_3 [i_0] [i_14]) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)249)))))));
                    var_63 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -723320918))));
                    var_64 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_55 [i_0] [i_14]))))), (arr_48 [i_0] [i_3] [i_14] [i_24] [i_24]));
                }
            }
        }
        var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((11312146070929873416ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (min((arr_20 [i_0] [i_0] [(unsigned short)19]), (((/* implicit */long long int) arr_0 [(unsigned short)10])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11312146070929873416ULL)) || (((/* implicit */_Bool) 1463649094960578528ULL))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3325395077U)) ? (((/* implicit */int) arr_22 [i_0])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_56 [i_0] [i_0] [i_0] [i_0] [18U] [i_0] [i_0]))))) : (((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [(unsigned short)9])) + (27914)))))))) : (((((/* implicit */_Bool) arr_25 [(signed char)14] [i_0] [16U] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) -1)) : (2606048799U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    var_66 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_25 = 3; i_25 < 21; i_25 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_26 = 1; i_26 < 23; i_26 += 3) 
        {
            for (long long int i_27 = 2; i_27 < 21; i_27 += 3) 
            {
                {
                    var_67 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4143430144U)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_27 + 3] [i_26] [i_25 + 3])))))));
                    var_68 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_70 [(signed char)22] [i_26 - 1] [i_27 + 3])) ? (arr_70 [i_25] [i_26 + 1] [i_27 - 2]) : (2147483647))), (((/* implicit */int) arr_65 [i_26]))));
                    var_69 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)51)));
                    var_70 |= ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))))) < (max((((/* implicit */unsigned long long int) (unsigned char)122)), (11312146070929873416ULL))));
                }
            } 
        } 
        var_71 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)47334)) * (((/* implicit */int) (signed char)0))))));
        var_72 = ((/* implicit */_Bool) arr_67 [2ULL] [4U] [i_25 - 1]);
    }
    for (short i_28 = 0; i_28 < 11; i_28 += 3) 
    {
        var_73 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_28] [i_28])) ? (arr_23 [i_28] [i_28]) : (arr_23 [i_28] [i_28])))) ? (((/* implicit */long long int) (+(var_2)))) : (((((/* implicit */_Bool) (unsigned short)32062)) ? (((/* implicit */long long int) min((arr_10 [i_28] [(unsigned short)1]), (((/* implicit */unsigned int) (unsigned short)0))))) : (min((((/* implicit */long long int) (signed char)1)), (-1922685952766503659LL)))))));
        /* LoopNest 2 */
        for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
        {
            for (short i_30 = 2; i_30 < 9; i_30 += 4) 
            {
                {
                    var_74 = ((/* implicit */_Bool) max((var_74), (((/* implicit */_Bool) max((((arr_17 [i_28] [i_29] [i_30 + 2] [i_29 + 1] [i_30 - 1]) ^ (arr_17 [(short)11] [i_29] [i_30] [i_29 + 1] [i_30 + 2]))), (((((/* implicit */_Bool) arr_50 [i_29 + 1] [i_29] [(unsigned short)19] [i_30 - 1] [i_28] [i_28])) ? (arr_31 [i_28] [i_29 + 1] [i_30 - 2] [i_30]) : (arr_31 [i_28] [i_29 + 1] [i_30] [i_30]))))))));
                    var_75 |= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)0))))), ((~(arr_29 [i_28] [i_28] [i_28] [i_28] [i_28])))))) ? (((/* implicit */unsigned int) ((var_11) ? ((-2147483647 - 1)) : (min((453400097), (2147483647)))))) : (arr_80 [i_28] [7LL] [10U] [i_30]));
                    var_76 = ((/* implicit */unsigned int) (((!(arr_56 [i_28] [i_29 + 1] [i_29] [i_29] [i_29 + 1] [i_29] [i_30 + 1]))) ? ((-(-453400098))) : (((((/* implicit */int) arr_7 [i_29] [i_29 + 1] [i_29])) ^ (1867624533)))));
                }
            } 
        } 
        var_77 = ((/* implicit */unsigned short) var_11);
    }
}
