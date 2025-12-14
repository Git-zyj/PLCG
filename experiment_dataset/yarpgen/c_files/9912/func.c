/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9912
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((_Bool) ((unsigned char) arr_1 [i_0]));
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (-((~(((/* implicit */int) (short)-6106)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_13 -= ((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_8 [7U] [7U])));
                    var_14 *= ((/* implicit */unsigned int) ((long long int) ((unsigned int) var_7)));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_15 -= ((/* implicit */signed char) ((unsigned int) ((short) var_5)));
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 23; i_4 += 3) /* same iter space */
                        {
                            var_16 -= ((/* implicit */signed char) (+(((long long int) (_Bool)1))));
                            arr_15 [i_0] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned char) (_Bool)1)));
                        }
                        for (short i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_3] [i_3] [i_3] [i_0] [i_3 + 1] [(signed char)8] [i_3 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)118)))))));
                            arr_19 [i_0] [(signed char)6] [(_Bool)1] [(_Bool)1] [i_0] [i_0] |= ((/* implicit */int) ((_Bool) ((unsigned int) (_Bool)1)));
                        }
                        arr_20 [(signed char)23] [i_0] [i_2 - 1] [(signed char)23] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_13 [i_0] [i_1] [i_0])))));
                        var_17 = ((/* implicit */long long int) ((unsigned int) ((unsigned int) 1753657926U)));
                    }
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) (!((_Bool)1)));
                        var_19 = ((/* implicit */short) ((unsigned char) (short)32767));
                        /* LoopSeq 1 */
                        for (short i_7 = 2; i_7 < 21; i_7 += 3) 
                        {
                            var_20 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) 2951069636U)))));
                            var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_16 [i_1])))));
                        }
                    }
                    for (long long int i_8 = 1; i_8 < 22; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((long long int) ((int) (short)4818)));
                        arr_29 [i_0] [i_0] [3LL] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) (_Bool)1)))));
                    }
                    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_5)))));
                }
            } 
        } 
        arr_30 [i_0] [i_0] = ((/* implicit */signed char) (-((~(2879696215U)))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)1))))))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 2; i_10 < 20; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_25 = ((/* implicit */signed char) ((short) (_Bool)1));
                    arr_38 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_26 *= ((_Bool) (_Bool)1);
                                var_27 += ((/* implicit */unsigned int) ((int) ((short) var_7)));
                                arr_45 [i_9] [i_9] [i_11] [i_12] [i_13] = ((/* implicit */long long int) ((short) (~(var_6))));
                                var_28 = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (signed char)-126)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_14 = 1; i_14 < 13; i_14 += 3) 
    {
        var_29 = ((/* implicit */long long int) (~((~(var_10)))));
        /* LoopSeq 4 */
        for (long long int i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            arr_51 [i_15] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_34 [i_15])))));
            arr_52 [i_15] [i_15] [i_15] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (short)32767)))));
            var_30 -= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_14]))))));
        }
        for (int i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_17 = 1; i_17 < 12; i_17 += 3) 
            {
                for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    for (signed char i_19 = 2; i_19 < 12; i_19 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_14])))))));
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (+(2951069636U))))));
                            var_33 ^= (~(((/* implicit */int) ((_Bool) (_Bool)1))));
                        }
                    } 
                } 
            } 
            arr_63 [i_14] [i_16] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) (signed char)18)))));
        }
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_21 = 0; i_21 < 14; i_21 += 3) 
            {
                for (signed char i_22 = 0; i_22 < 14; i_22 += 3) 
                {
                    for (short i_23 = 1; i_23 < 12; i_23 += 3) 
                    {
                        {
                            var_34 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (_Bool)0)))));
                            var_35 += ((/* implicit */_Bool) ((int) ((signed char) var_0)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_25 = 1; i_25 < 13; i_25 += 3) 
                {
                    for (short i_26 = 0; i_26 < 14; i_26 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) (~(((int) (_Bool)1))));
                            var_37 = ((/* implicit */_Bool) ((signed char) ((signed char) var_5)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_27 = 0; i_27 < 14; i_27 += 3) 
                {
                    for (signed char i_28 = 3; i_28 < 13; i_28 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */int) min((var_38), (((int) (-(((/* implicit */int) var_1)))))));
                            arr_85 [i_14] [i_20] [i_20] [i_24] [i_28] = ((/* implicit */signed char) ((int) (-(arr_68 [i_28 - 3] [i_27] [i_20] [i_20]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_29 = 0; i_29 < 14; i_29 += 3) 
                {
                    for (signed char i_30 = 0; i_30 < 14; i_30 += 3) 
                    {
                        {
                            arr_91 [i_24] [i_24] = ((/* implicit */_Bool) (~((-(var_5)))));
                            var_39 = ((/* implicit */signed char) ((short) (+(((/* implicit */int) var_11)))));
                            var_40 -= (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_30]))))));
                            var_41 -= ((/* implicit */unsigned char) ((signed char) ((signed char) (_Bool)1)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 14; i_31 += 3) 
                {
                    for (signed char i_32 = 0; i_32 < 14; i_32 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1)))))))));
                            var_43 = (!(((/* implicit */_Bool) ((long long int) (_Bool)0))));
                            arr_97 [(short)8] [(short)8] [(short)8] [i_24] [8U] [(short)8] [i_32] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) arr_82 [i_32] [(unsigned char)10] [(unsigned char)10] [i_20] [(unsigned char)10])))));
                        }
                    } 
                } 
                var_44 += (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))));
            }
            for (short i_33 = 1; i_33 < 13; i_33 += 3) /* same iter space */
            {
                arr_100 [i_14 - 1] [i_20] [i_14 + 1] = ((long long int) (+(((/* implicit */int) arr_90 [i_14] [i_14] [i_14] [(_Bool)0] [i_20] [i_33]))));
                /* LoopNest 2 */
                for (signed char i_34 = 0; i_34 < 14; i_34 += 3) 
                {
                    for (short i_35 = 2; i_35 < 11; i_35 += 3) 
                    {
                        {
                            arr_106 [i_14] [i_34] [i_20] [i_34] [(_Bool)1] [i_35] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) 1343897657U)))));
                            var_45 = ((/* implicit */int) ((long long int) (+(((/* implicit */int) var_9)))));
                            var_46 += ((/* implicit */unsigned char) ((long long int) ((short) arr_39 [(unsigned char)0] [20U] [i_34] [i_35])));
                        }
                    } 
                } 
                arr_107 [i_33 - 1] = ((/* implicit */_Bool) ((unsigned char) ((long long int) 2951069636U)));
            }
            for (short i_36 = 1; i_36 < 13; i_36 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_37 = 0; i_37 < 14; i_37 += 3) 
                {
                    for (unsigned int i_38 = 4; i_38 < 13; i_38 += 3) 
                    {
                        {
                            arr_114 [i_36] [i_20] [i_20] [i_36 + 1] [i_37] [i_38] [(short)13] = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) (short)-16372)))));
                            var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((short) ((signed char) (_Bool)1))))));
                            var_48 = ((long long int) (~(((/* implicit */int) var_4))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_39 = 0; i_39 < 14; i_39 += 3) 
                {
                    for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
                    {
                        {
                            var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (~(((unsigned int) var_2)))))));
                            var_50 = ((/* implicit */_Bool) min((var_50), (((_Bool) (!(((/* implicit */_Bool) arr_61 [6U] [i_20 + 1] [i_36] [i_39] [6U])))))));
                            arr_122 [i_36] [i_36] [i_36] [i_39] [i_40] = ((signed char) (_Bool)1);
                            var_51 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_52 = ((signed char) (_Bool)1);
                arr_123 [i_36] [i_20] [i_36] = ((/* implicit */_Bool) (+(((int) (unsigned char)160))));
                arr_124 [i_36] [i_20] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_10))))));
            }
            for (short i_41 = 1; i_41 < 13; i_41 += 3) /* same iter space */
            {
                arr_127 [i_14] [i_14] [i_41] [i_14] = ((/* implicit */short) (-((+(((/* implicit */int) (signed char)-1))))));
                arr_128 [i_41] [i_41] [i_14 - 1] = ((/* implicit */_Bool) ((short) ((short) 3970704236U)));
            }
            var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((unsigned char) (_Bool)1)))));
            var_54 = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) var_4)))));
            arr_129 [i_14 + 1] [(short)2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_4)))));
        }
        for (unsigned char i_42 = 1; i_42 < 12; i_42 += 3) 
        {
            var_55 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) var_5)))));
            var_56 = (!((!(((/* implicit */_Bool) 2951069636U)))));
        }
        var_57 = ((unsigned int) ((signed char) (short)-7412));
        /* LoopNest 2 */
        for (unsigned int i_43 = 0; i_43 < 14; i_43 += 3) 
        {
            for (unsigned int i_44 = 0; i_44 < 14; i_44 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_45 = 0; i_45 < 14; i_45 += 3) 
                    {
                        arr_144 [i_14] [i_45] [i_44] [i_43] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
                        var_58 = ((/* implicit */unsigned char) (-((+(var_3)))));
                        var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) (_Bool)1))))))));
                        var_60 = ((/* implicit */_Bool) max((var_60), ((!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))))));
                        var_61 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_2))))));
                    }
                    for (unsigned char i_46 = 0; i_46 < 14; i_46 += 3) 
                    {
                        arr_148 [i_14] [i_14] [(short)1] [i_44] [i_43] [(short)1] = ((/* implicit */_Bool) ((short) ((short) 9223372036854775807LL)));
                        var_62 += ((/* implicit */short) (!(((/* implicit */_Bool) ((short) 9223372036854775800LL)))));
                    }
                    for (signed char i_47 = 0; i_47 < 14; i_47 += 3) /* same iter space */
                    {
                        arr_153 [i_14 + 1] [i_43] [i_14] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        var_63 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_9)))));
                    }
                    for (signed char i_48 = 0; i_48 < 14; i_48 += 3) /* same iter space */
                    {
                        arr_156 [i_48] [i_43] [i_43] [3U] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_75 [i_48] [i_48] [i_44]))))));
                        var_64 = ((/* implicit */signed char) ((_Bool) ((signed char) var_8)));
                    }
                    arr_157 [(unsigned char)13] [(unsigned char)13] [i_43] [(signed char)4] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (short)18181))))));
                    /* LoopSeq 4 */
                    for (signed char i_49 = 0; i_49 < 14; i_49 += 3) /* same iter space */
                    {
                        var_65 -= ((_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_66 -= ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) var_7)))));
                    }
                    for (signed char i_50 = 0; i_50 < 14; i_50 += 3) /* same iter space */
                    {
                        arr_164 [(short)5] [i_14] [i_14] [(unsigned char)6] [i_43] [i_50] = ((/* implicit */int) (!((_Bool)1)));
                        arr_165 [i_44] [(_Bool)1] [i_43] [(_Bool)1] = ((/* implicit */signed char) ((unsigned char) (~(var_10))));
                        arr_166 [i_14 + 1] [i_43] [i_44] [i_50] = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_17 [i_14] [i_43] [i_43] [i_43])))));
                        arr_167 [i_43] [i_43] [i_44] [i_44] [i_44] = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (signed char)17)))));
                    }
                    for (short i_51 = 1; i_51 < 11; i_51 += 3) /* same iter space */
                    {
                        arr_171 [i_51] [i_43] [i_51] [i_44] [i_43] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-19)))))));
                        var_67 = ((/* implicit */signed char) min((var_67), (((/* implicit */signed char) ((long long int) ((long long int) arr_110 [(_Bool)0]))))));
                        /* LoopSeq 1 */
                        for (signed char i_52 = 0; i_52 < 14; i_52 += 3) 
                        {
                            arr_174 [i_14] [i_43] [i_44] [i_43] [i_43] [i_52] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                            var_68 = ((/* implicit */signed char) min((var_68), (((/* implicit */signed char) ((_Bool) (+(var_10)))))));
                            var_69 = (~((-(9223372036854775807LL))));
                            arr_175 [i_51] [i_43] [(signed char)9] [i_43] [i_43] [(signed char)9] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_42 [(_Bool)1] [i_43] [(_Bool)1])))));
                        }
                        var_70 = (~(((/* implicit */int) ((unsigned char) (_Bool)1))));
                        /* LoopSeq 4 */
                        for (unsigned int i_53 = 0; i_53 < 14; i_53 += 3) 
                        {
                            arr_178 [i_14] [i_14] [i_14] [i_14] [i_51] [i_43] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                            var_71 = ((/* implicit */_Bool) min((var_71), (((/* implicit */_Bool) ((signed char) (+(var_0)))))));
                        }
                        for (_Bool i_54 = 0; i_54 < 1; i_54 += 1) 
                        {
                            var_72 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_9)))));
                            var_73 = ((/* implicit */long long int) ((int) (+(((/* implicit */int) (_Bool)1)))));
                            arr_183 [i_14 - 1] [(unsigned char)2] [i_43] [i_51 + 3] = ((/* implicit */long long int) (-(((unsigned int) (signed char)17))));
                            var_74 -= ((/* implicit */long long int) ((int) (unsigned char)32));
                            var_75 = ((/* implicit */_Bool) min((var_75), (((_Bool) ((_Bool) (signed char)-58)))));
                        }
                        for (_Bool i_55 = 1; i_55 < 1; i_55 += 1) 
                        {
                            var_76 = ((/* implicit */unsigned char) max((var_76), (((/* implicit */unsigned char) (~((-(((/* implicit */int) (signed char)-31)))))))));
                            arr_186 [i_14] [(short)6] [i_43] [i_43] [i_55] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_98 [(_Bool)1] [i_44] [i_51])))));
                            arr_187 [i_43] [i_43] [i_43] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_159 [i_14 + 1] [i_43] [i_14 + 1] [i_43] [i_14 + 1])))));
                        }
                        for (int i_56 = 4; i_56 < 12; i_56 += 3) 
                        {
                            arr_190 [i_43] [i_43] = ((/* implicit */short) (-((-(arr_53 [i_43])))));
                            var_77 -= ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_1))))));
                            arr_191 [i_56] [i_43] [i_44] [i_43] [i_14] = ((/* implicit */long long int) ((_Bool) ((_Bool) arr_70 [i_14] [i_43] [i_43] [i_43] [i_43] [i_56])));
                        }
                    }
                    for (short i_57 = 1; i_57 < 11; i_57 += 3) /* same iter space */
                    {
                        var_78 *= ((int) (~(((/* implicit */int) arr_161 [i_57] [i_44] [(short)4] [i_14] [i_14] [i_14]))));
                        arr_195 [i_14 + 1] [(_Bool)1] [i_43] [i_14 + 1] [i_57] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_196 [i_43] [i_44] [i_43] [i_43] = ((/* implicit */signed char) (!(((_Bool) var_10))));
                    }
                    var_79 = ((/* implicit */_Bool) min((var_79), (((/* implicit */_Bool) ((signed char) ((short) arr_158 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11]))))));
                    var_80 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-100))))));
                }
            } 
        } 
    }
    var_81 = ((/* implicit */_Bool) max((var_81), (((/* implicit */_Bool) ((short) ((signed char) min((((/* implicit */signed char) (_Bool)1)), (var_1))))))));
    var_82 = max((((/* implicit */long long int) (~(min((((/* implicit */int) var_1)), (var_0)))))), (((long long int) ((signed char) var_10))));
    var_83 -= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_10))))))), (min((max((((/* implicit */int) (unsigned char)226)), (var_0))), (((/* implicit */int) max(((unsigned char)235), (((/* implicit */unsigned char) var_1)))))))));
    var_84 = ((/* implicit */unsigned char) min((var_84), (((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (signed char)-37)))))), ((~(max((((/* implicit */long long int) (unsigned char)223)), (var_2))))))))));
}
