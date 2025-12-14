/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91831
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        var_16 = ((/* implicit */signed char) (+((~(((/* implicit */int) var_1))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) (-((~(((arr_2 [8]) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_4))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 3; i_4 < 12; i_4 += 1) 
                    {
                        arr_16 [i_3] [i_4] = ((/* implicit */int) ((signed char) (-(((/* implicit */int) max((((/* implicit */unsigned short) (short)-28800)), (arr_1 [i_2])))))));
                        var_18 = ((/* implicit */signed char) min((((int) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_3] [i_4]))))), (((/* implicit */int) (!(((((/* implicit */int) (signed char)104)) == (((/* implicit */int) (unsigned short)0)))))))));
                        arr_17 [i_1] [i_2] [i_3] = min((((/* implicit */int) arr_0 [i_2] [i_2])), ((+(((/* implicit */int) (signed char)106)))));
                    }
                    var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (arr_12 [i_1] [i_1])))) ? (min((520093696), (((/* implicit */int) var_7)))) : (min((((/* implicit */int) var_13)), (var_8)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_2]))))) : (min((((/* implicit */unsigned int) (signed char)-5)), (((arr_12 [i_1] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((short) (+(((/* implicit */int) (signed char)3))))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */int) min((var_6), (var_4)))) : (((/* implicit */int) ((unsigned char) -1165043218)))))) ? ((+(max((4231644712U), (((/* implicit */unsigned int) (short)-15678)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_24 [i_5] [i_6] [i_7] [i_7])) + (2147483647))) << (((((/* implicit */int) var_0)) - (104))))))));
                    var_22 = max((((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) (signed char)77)) : (127))), (((((/* implicit */_Bool) min((arr_22 [i_5] [i_6] [i_5]), (arr_24 [i_5] [i_5] [i_5] [0])))) ? (((/* implicit */int) arr_25 [i_5])) : (((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (short)15315)) - (15298))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_8 = 1; i_8 < 24; i_8 += 4) 
    {
        var_23 *= ((/* implicit */int) ((min((((/* implicit */int) arr_27 [i_8])), ((+(((/* implicit */int) arr_26 [i_8])))))) >= (((((/* implicit */int) arr_27 [i_8 - 1])) * (((/* implicit */int) arr_27 [i_8 - 1]))))));
        arr_28 [i_8] [i_8] = (unsigned short)60784;
        arr_29 [i_8] = ((/* implicit */short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_8 + 1]))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_27 [i_8])) / (((/* implicit */int) arr_26 [i_8]))))))) : (max((((/* implicit */unsigned int) max((arr_26 [(short)2]), ((signed char)79)))), ((~(var_14)))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        arr_32 [i_9] = ((/* implicit */int) ((short) arr_18 [i_9]));
        var_24 = arr_20 [i_9] [i_9] [i_9];
        /* LoopSeq 4 */
        for (short i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 1; i_11 < 20; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    {
                        arr_39 [i_11] [i_11] [i_11] [i_11 + 1] [i_10] [i_9] = ((/* implicit */signed char) ((((((/* implicit */int) var_15)) > (arr_34 [i_9]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)50)) % (((/* implicit */int) var_6))))) : ((+(var_14)))));
                        var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */unsigned short) ((short) var_4));
                        var_27 *= ((/* implicit */short) arr_27 [i_9]);
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    arr_45 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) arr_31 [i_9]);
                    /* LoopSeq 3 */
                    for (signed char i_15 = 1; i_15 < 20; i_15 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */int) arr_46 [i_15 - 1] [i_15 - 1] [i_15] [i_15 + 1] [i_15] [i_15] [i_15 - 1]);
                        arr_49 [i_9] [i_10] [i_10] [i_15] [i_15] = ((/* implicit */short) ((unsigned short) arr_22 [i_9] [i_14] [i_15]));
                    }
                    for (signed char i_16 = 1; i_16 < 20; i_16 += 2) /* same iter space */
                    {
                        arr_52 [i_9] [i_10] [i_13] [i_10] [i_14] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) arr_36 [i_16 + 1] [i_16 - 1] [i_16 - 1] [i_16 - 1])) * (((/* implicit */int) arr_36 [i_16 - 1] [i_16 + 1] [i_16 - 1] [i_16 + 1]))));
                        var_29 = ((/* implicit */int) max((var_29), ((~(((/* implicit */int) arr_46 [i_9] [i_10] [i_9] [i_14] [i_16 - 1] [i_10] [i_16 + 1]))))));
                        var_30 = ((/* implicit */short) (~(((int) arr_40 [i_9]))));
                    }
                    for (signed char i_17 = 1; i_17 < 20; i_17 += 2) /* same iter space */
                    {
                        var_31 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_3)))));
                        var_32 += ((/* implicit */unsigned short) arr_46 [i_17 + 1] [i_17] [i_9] [i_9] [i_17 - 1] [i_17] [i_17 - 1]);
                    }
                    var_33 |= ((/* implicit */int) (!(((((/* implicit */int) arr_21 [i_14] [i_10] [i_9])) <= (((/* implicit */int) (signed char)-8))))));
                }
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 21; i_18 += 3) 
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)39344)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_41 [i_9])))))));
                    var_35 = ((/* implicit */short) ((unsigned short) ((var_2) / (((/* implicit */int) arr_20 [i_9] [i_10] [i_13])))));
                    var_36 = ((signed char) arr_50 [i_9] [i_10] [i_13] [i_18] [i_9] [i_18]);
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        arr_62 [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_26 [i_13])) >= (((/* implicit */int) var_5))))) == (((/* implicit */int) ((((/* implicit */int) arr_18 [i_9])) >= (arr_34 [i_20]))))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((short) arr_47 [i_10] [i_9])))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_41 [i_9]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) var_1)))))));
                        var_40 *= ((/* implicit */unsigned char) arr_19 [i_10]);
                        var_41 = ((/* implicit */int) var_5);
                    }
                    for (signed char i_22 = 2; i_22 < 19; i_22 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */int) max((var_42), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_38 [i_9])) : (var_8)))));
                        var_43 = ((/* implicit */unsigned int) var_3);
                        var_44 = ((/* implicit */int) arr_68 [i_9] [i_9] [i_9] [i_9] [i_9]);
                    }
                    for (signed char i_23 = 2; i_23 < 19; i_23 += 2) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_44 [i_23] [i_23] [i_10] [i_23 - 2] [i_19] [i_10])))))));
                        var_46 = ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_46 [i_23] [i_23] [i_10] [i_23] [i_10] [i_23] [i_13])));
                    }
                    arr_71 [i_19] [i_9] = ((/* implicit */short) var_5);
                    var_47 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_64 [i_9] [i_10] [i_10] [i_9] [i_9] [i_13] [i_19])) ? (((/* implicit */int) (short)24701)) : (arr_30 [i_9]))) ^ (((/* implicit */int) (short)26559))));
                }
                var_48 = ((((/* implicit */_Bool) ((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_10] [i_10] [i_10])))))) ? (((/* implicit */int) var_11)) : (var_8));
                arr_72 [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_44 [i_9] [i_10] [i_10] [i_9] [i_13] [i_13]);
            }
            for (unsigned short i_24 = 0; i_24 < 21; i_24 += 4) /* same iter space */
            {
                arr_75 [i_9] [i_10] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) (short)24400))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_42 [i_9]))));
                var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_9]))))) < (((/* implicit */int) arr_68 [7] [i_10] [i_10] [i_24] [i_24]))));
            }
            for (unsigned short i_25 = 0; i_25 < 21; i_25 += 4) /* same iter space */
            {
                var_50 += ((/* implicit */unsigned short) (!(((_Bool) var_10))));
                /* LoopSeq 2 */
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                {
                    arr_81 [i_26] [i_25] [i_25] [i_10] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (short)-31738)))) < (((/* implicit */int) arr_41 [i_9]))));
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1])) ? (((/* implicit */int) arr_51 [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1])) : (((/* implicit */int) arr_51 [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1]))));
                    var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_55 [i_9] [i_10] [i_25] [i_26] [i_25] [i_9])))) : (((/* implicit */int) arr_61 [i_26 - 1]))));
                }
                for (unsigned short i_27 = 2; i_27 < 20; i_27 += 4) 
                {
                    arr_86 [i_27] [i_25] [i_10] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)54834)) / ((+(((/* implicit */int) arr_54 [i_9] [i_10] [(short)14] [i_27]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_28 = 0; i_28 < 21; i_28 += 1) 
                    {
                        var_53 = ((((/* implicit */_Bool) ((short) arr_63 [i_28] [i_27] [i_25] [i_10] [i_9]))) ? (var_2) : (((/* implicit */int) arr_85 [i_9] [i_10] [i_27 - 2] [i_27])));
                        var_54 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                        var_55 = ((/* implicit */short) (+(var_14)));
                        var_56 &= ((/* implicit */short) arr_60 [i_9]);
                    }
                }
                var_57 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_22 [i_9] [i_10] [i_9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_84 [i_25])))) + (((/* implicit */int) arr_55 [6] [i_25] [i_10] [11] [i_9] [i_9]))));
                arr_89 [i_9] [i_9] [i_10] [i_25] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
            }
            for (unsigned short i_29 = 0; i_29 < 21; i_29 += 4) /* same iter space */
            {
                arr_94 [i_9] [i_10] [i_10] = ((((/* implicit */int) arr_82 [i_9] [i_10] [i_29] [i_29])) * (((/* implicit */int) arr_82 [i_9] [i_10] [i_10] [i_29])));
                arr_95 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) (short)20499);
            }
            arr_96 [i_9] [i_10] [i_9] = ((/* implicit */short) (~(((/* implicit */int) arr_74 [i_9] [i_9] [i_9] [i_9]))));
        }
        for (unsigned int i_30 = 2; i_30 < 18; i_30 += 4) 
        {
            var_58 += ((((/* implicit */_Bool) arr_70 [i_9] [i_30 + 1] [i_30] [i_30] [i_9])) ? (((/* implicit */int) arr_70 [i_9] [i_30 + 2] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_70 [i_9] [i_30 + 2] [i_30] [i_9] [13U])));
            arr_99 [i_9] [i_30 + 3] [i_30] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_73 [i_30 + 3]))));
        }
        for (unsigned short i_31 = 0; i_31 < 21; i_31 += 1) 
        {
            arr_103 [i_9] [i_31] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_9] [i_31] [i_9] [(short)3] [i_31]))))) >> ((((-(((/* implicit */int) (short)-20474)))) - (20452)))));
            var_59 -= ((/* implicit */short) arr_18 [i_9]);
        }
        for (short i_32 = 1; i_32 < 18; i_32 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                /* LoopNest 2 */
                for (short i_34 = 0; i_34 < 21; i_34 += 3) 
                {
                    for (int i_35 = 2; i_35 < 20; i_35 += 1) 
                    {
                        {
                            arr_114 [i_9] [i_9] [i_9] [(signed char)20] [i_9] [i_9] [i_9] = ((unsigned short) arr_65 [i_35 - 1]);
                            arr_115 [i_9] [i_32] [i_33] [i_34] [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */int) arr_104 [i_9] [i_9] [i_35])) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)-123)) == (((/* implicit */int) arr_69 [i_33])))))));
                        }
                    } 
                } 
                var_60 = ((/* implicit */int) arr_46 [i_9] [(short)12] [i_9] [i_32 + 1] [(short)14] [i_32] [i_9]);
                /* LoopNest 2 */
                for (short i_36 = 0; i_36 < 21; i_36 += 2) 
                {
                    for (int i_37 = 0; i_37 < 21; i_37 += 2) 
                    {
                        {
                            var_61 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_102 [i_32] [i_32 + 2] [i_33])) ? (arr_102 [i_9] [i_32 + 2] [i_33]) : (arr_102 [i_9] [i_32 + 3] [i_9])));
                            var_62 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_67 [i_33] [i_33])))) || (((/* implicit */_Bool) (~(arr_79 [i_9]))))));
                        }
                    } 
                } 
                var_63 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_9] [i_9] [i_9] [i_32] [i_33]))) & (var_14)));
            }
            /* LoopSeq 3 */
            for (signed char i_38 = 1; i_38 < 19; i_38 += 4) /* same iter space */
            {
                var_64 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_82 [i_38] [i_38 - 1] [i_38] [i_38 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_117 [i_38] [i_9]))) : (((2740857723U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_32])))))));
                /* LoopNest 2 */
                for (unsigned char i_39 = 4; i_39 < 20; i_39 += 2) 
                {
                    for (unsigned char i_40 = 0; i_40 < 21; i_40 += 1) 
                    {
                        {
                            var_65 = ((/* implicit */short) (((+(((/* implicit */int) var_12)))) < (arr_30 [i_38 + 2])));
                            arr_131 [i_40] [i_38] [i_38] [i_38] [i_38] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_31 [i_39]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)14263))))));
                        }
                    } 
                } 
                var_66 |= ((/* implicit */unsigned char) ((signed char) (unsigned short)30382));
                var_67 = ((/* implicit */signed char) arr_31 [i_38 + 1]);
            }
            for (signed char i_41 = 1; i_41 < 19; i_41 += 4) /* same iter space */
            {
                var_68 = ((/* implicit */int) min((var_68), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_122 [i_9] [i_32] [i_9])) || (((/* implicit */_Bool) arr_128 [i_9])))))))));
                var_69 = ((/* implicit */short) (unsigned char)31);
            }
            for (signed char i_42 = 1; i_42 < 19; i_42 += 4) /* same iter space */
            {
                arr_137 [i_42] [i_42] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) arr_59 [i_9] [(unsigned char)20] [i_9] [i_9] [i_9])) : (((/* implicit */int) (signed char)-6))))));
                var_70 = ((/* implicit */signed char) arr_135 [i_42] [i_42]);
                var_71 = ((/* implicit */int) ((((((/* implicit */int) (short)-24706)) | (((/* implicit */int) arr_112 [i_42] [i_32] [i_32] [i_32] [i_9])))) >= (((/* implicit */int) arr_46 [i_9] [(signed char)6] [i_42] [i_32] [i_32] [(signed char)6] [(unsigned short)7]))));
            }
            arr_138 [i_32] [i_9] [i_9] = arr_18 [i_32 - 1];
            arr_139 [i_9] [i_32] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_51 [i_32 - 1] [i_32] [i_32] [17] [i_32])) + (2147483647))) >> (((((/* implicit */int) arr_129 [i_32 - 1] [i_32 + 2] [i_9] [(short)4] [i_32] [i_32 - 1])) - (22)))));
        }
        arr_140 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -600921005))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
    }
    for (short i_43 = 0; i_43 < 18; i_43 += 2) 
    {
        var_72 = ((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)-26563)) + (26571))))), (((/* implicit */int) max(((signed char)97), (arr_55 [i_43] [i_43] [i_43] [i_43] [i_43] [i_43]))))));
        arr_143 [i_43] [i_43] = ((/* implicit */short) ((((/* implicit */_Bool) (short)15686)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_112 [(_Bool)1] [i_43] [i_43] [i_43] [i_43]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        var_73 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_83 [i_43] [i_43] [(short)14] [i_43] [i_43])) ? (((/* implicit */int) arr_83 [i_43] [i_43] [i_43] [i_43] [i_43])) : (((/* implicit */int) arr_83 [i_43] [i_43] [i_43] [i_43] [i_43])))), (((int) var_13))));
    }
}
