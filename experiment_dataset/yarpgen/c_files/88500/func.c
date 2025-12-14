/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88500
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
    var_17 = ((/* implicit */long long int) var_9);
    var_18 = ((/* implicit */int) 3896887377U);
    var_19 *= ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) var_16)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_20 += ((/* implicit */unsigned char) ((long long int) min((((/* implicit */long long int) (~(398079919U)))), (((((/* implicit */_Bool) 1274943870)) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_11)))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 398079912U)) % (-3475435840231070302LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)143))) ? (((/* implicit */int) ((_Bool) (unsigned short)49152))) : (((/* implicit */int) (unsigned short)448))))) : (3645237182U)));
            var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_4 [i_1 - 2]), (arr_4 [i_1 - 2])))), (min((15539685554583098441ULL), (((/* implicit */unsigned long long int) ((arr_2 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (short)23773))))))))));
            var_23 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_3 [i_1 + 2] [6ULL] [i_0])) <= (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_1 + 3] [(_Bool)1] [i_1 - 3])))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) ((long long int) (unsigned short)13921));
            arr_8 [i_2 + 1] [i_2 + 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8333)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [(unsigned char)8])))) : (arr_3 [i_2] [i_2 - 1] [1])));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                var_25 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (arr_4 [i_0]));
                var_26 = (unsigned short)5539;
            }
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_27 -= ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_5]);
                var_28 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_5])) != (((/* implicit */int) (unsigned short)5537)))))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_5] [i_3] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (arr_5 [i_3])));
                var_30 = ((/* implicit */signed char) arr_0 [i_0]);
                var_31 = ((/* implicit */unsigned long long int) arr_10 [i_0]);
            }
            var_32 = ((/* implicit */unsigned short) 3721057818902170421LL);
            var_33 = ((/* implicit */unsigned long long int) ((short) arr_3 [i_0] [i_0] [i_3]));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            var_34 |= ((/* implicit */unsigned short) (~(arr_7 [i_0])));
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_35 = ((/* implicit */long long int) var_15);
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_36 += ((/* implicit */unsigned char) arr_14 [i_9] [i_6] [(signed char)3] [i_8 + 2]);
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_8 - 1] [i_7] [i_7] [i_6])) ? (arr_3 [(unsigned char)0] [i_6] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57201)) * (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                arr_27 [i_0] [i_0] [2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9890036309984268537ULL)) ? (((/* implicit */int) (short)16872)) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                for (short i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    arr_30 [(unsigned short)5] [i_6] [i_0] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_10] [i_10 - 1] [i_10 - 1] [i_11])) ? (((/* implicit */int) arr_18 [i_11] [i_11] [i_0])) : ((~(((/* implicit */int) (unsigned short)45369))))));
                    var_38 = ((/* implicit */int) (unsigned short)15013);
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 2; i_12 < 8; i_12 += 2) 
                    {
                        arr_33 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(unsigned short)0] [i_12] [i_0] [i_0] [i_10 - 1] [i_6]))) % (arr_16 [i_0]));
                        var_39 = ((/* implicit */unsigned short) arr_6 [i_0]);
                        var_40 = ((/* implicit */short) (unsigned short)8352);
                        var_41 = ((/* implicit */long long int) (short)-2204);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        var_42 |= ((/* implicit */unsigned char) arr_31 [i_0] [i_11] [i_10 - 1] [i_11] [0U]);
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (unsigned short)7505)) ? (((/* implicit */int) arr_14 [i_13] [i_11] [i_10] [i_11])) : (((/* implicit */int) arr_20 [8LL] [8LL] [i_10] [i_11]))))));
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)180)) ? (arr_3 [i_10] [i_10 - 1] [i_10]) : (15241567504567113264ULL)));
                        var_45 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) * (arr_32 [i_0] [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_13] [i_0] [i_10] [i_0])))));
                    }
                }
                for (unsigned long long int i_14 = 2; i_14 < 10; i_14 += 4) 
                {
                    var_46 = ((/* implicit */short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (short i_15 = 1; i_15 < 10; i_15 += 1) 
                    {
                        var_47 = ((/* implicit */_Bool) arr_18 [i_10 - 1] [i_10 - 1] [i_0]);
                        var_48 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16376)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)8333)) : (-943218629)))));
                        var_49 = ((/* implicit */short) arr_0 [i_0]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) /* same iter space */
                    {
                        var_50 = ((/* implicit */int) ((long long int) arr_12 [i_0] [i_6] [i_10 - 1] [i_14]));
                        var_51 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1146589975029644203ULL))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                    {
                        var_52 += ((/* implicit */signed char) arr_23 [i_0]);
                        var_53 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */_Bool) 8419625465732982324ULL)) || (((/* implicit */_Bool) arr_18 [7LL] [i_6] [i_0]))))));
                    }
                }
                for (int i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_19 = 0; i_19 < 12; i_19 += 4) /* same iter space */
                    {
                        var_54 = ((/* implicit */int) arr_49 [i_19] [i_18] [i_10 - 1] [i_6] [(signed char)0]);
                        var_55 ^= ((/* implicit */unsigned short) arr_34 [(unsigned short)1] [i_6] [i_10 - 1] [3LL] [i_6] [i_0] [i_18]);
                    }
                    for (long long int i_20 = 0; i_20 < 12; i_20 += 4) /* same iter space */
                    {
                        var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) (_Bool)0))));
                        var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) 3799050340997199052ULL))));
                        var_58 = ((/* implicit */signed char) (unsigned char)199);
                        var_59 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -6315552551155131046LL)) % (((((/* implicit */_Bool) 10027118607976569297ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63290))) : (1402709749167791263ULL)))));
                        var_60 += ((unsigned long long int) arr_36 [(short)8] [i_18] [i_10 - 1] [i_18] [6ULL]);
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_61 = ((/* implicit */short) 3475435840231070301LL);
                        var_62 = ((/* implicit */unsigned long long int) min((var_62), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (unsigned short)8340)))))));
                        var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) 2006277895948222403ULL))));
                        arr_58 [i_0] [i_6] [i_0] [i_10] [0U] [i_18] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_10] [i_10 - 1] [i_10] [4U] [i_10 - 1] [i_10 - 1]))) % (((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_10] [i_10 - 1]))) : (arr_31 [i_0] [i_0] [i_0] [(signed char)4] [i_0])))));
                        var_64 = ((/* implicit */signed char) ((long long int) ((long long int) (unsigned char)247)));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 1) 
                    {
                        var_65 = ((/* implicit */unsigned long long int) ((int) (_Bool)1));
                        var_66 = ((/* implicit */int) ((((unsigned int) (unsigned short)45369)) <= (var_5)));
                    }
                    arr_62 [i_0] [i_0] [i_6] [i_10 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_6] [i_10] [i_18])) ? ((~(var_8))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_10])) || (((/* implicit */_Bool) arr_12 [i_0] [(short)10] [i_0] [i_0])))))));
                    var_67 = ((/* implicit */long long int) ((((var_3) >= (((/* implicit */unsigned int) 1080799573)))) ? (18446744073709551585ULL) : ((-(var_0)))));
                    var_68 = ((/* implicit */short) min((var_68), (((/* implicit */short) (unsigned short)45362))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_23 = 3; i_23 < 10; i_23 += 4) 
            {
                var_69 = ((/* implicit */short) (+(9223372036854775807LL)));
                /* LoopNest 2 */
                for (int i_24 = 2; i_24 < 11; i_24 += 1) 
                {
                    for (signed char i_25 = 2; i_25 < 11; i_25 += 1) 
                    {
                        {
                            var_70 = ((/* implicit */unsigned int) ((short) (_Bool)1));
                            var_71 = ((((/* implicit */int) arr_65 [i_0] [i_6] [i_0] [i_23 - 1] [i_25 - 1])) ^ (((/* implicit */int) arr_65 [i_0] [i_6] [i_0] [i_23 - 2] [(unsigned short)6])));
                        }
                    } 
                } 
            }
            var_72 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [(signed char)8]) : (((/* implicit */long long int) -780654354))));
            /* LoopSeq 2 */
            for (signed char i_26 = 0; i_26 < 12; i_26 += 3) 
            {
                var_73 = ((/* implicit */unsigned short) ((arr_72 [i_26] [i_6] [i_0]) / (((/* implicit */long long int) arr_41 [i_0]))));
                /* LoopNest 2 */
                for (short i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    for (unsigned short i_28 = 0; i_28 < 12; i_28 += 1) 
                    {
                        {
                            var_74 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)217))));
                            var_75 = ((/* implicit */long long int) (unsigned short)57215);
                        }
                    } 
                } 
            }
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                var_76 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_66 [i_0] [i_6] [i_29] [i_29] [i_29] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) : (7322599426421815081LL)))));
                var_77 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_6])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
                var_78 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_6] [(short)2])) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) (short)-17361)))));
                /* LoopSeq 3 */
                for (unsigned short i_30 = 0; i_30 < 12; i_30 += 3) /* same iter space */
                {
                    var_79 = ((/* implicit */long long int) ((unsigned char) ((arr_41 [i_0]) << (((17044034324541760337ULL) - (17044034324541760325ULL))))));
                    var_80 = ((/* implicit */long long int) ((arr_75 [i_0] [i_29] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30412)))));
                    /* LoopSeq 1 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        var_81 = ((/* implicit */short) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))));
                        var_82 = ((/* implicit */short) ((((/* implicit */_Bool) arr_67 [i_0] [i_6] [i_29] [i_30] [i_31] [i_31])) ? (arr_67 [i_0] [i_6] [i_29] [i_30] [i_31] [i_0]) : (arr_67 [i_0] [i_6] [i_29] [i_30] [i_30] [i_30])));
                        arr_87 [i_0] [10] [10] [i_30] [(unsigned short)3] [i_0] [i_31] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_52 [i_0] [i_6] [i_0]))));
                        var_83 = (signed char)94;
                    }
                }
                for (unsigned short i_32 = 0; i_32 < 12; i_32 += 3) /* same iter space */
                {
                    var_84 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [i_29] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)232))));
                    var_85 = ((unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_0])) && (((/* implicit */_Bool) 140737488355072ULL))));
                }
                for (unsigned short i_33 = 0; i_33 < 12; i_33 += 3) /* same iter space */
                {
                    var_86 = ((/* implicit */unsigned int) arr_25 [i_0]);
                    arr_93 [i_33] [i_0] [i_6] [i_6] [i_0] [8ULL] = ((/* implicit */unsigned short) ((((_Bool) -6114138565279448260LL)) && (((/* implicit */_Bool) ((unsigned char) var_15)))));
                    var_87 = ((/* implicit */short) ((arr_1 [i_0]) || (arr_1 [i_6])));
                    var_88 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1440196821U)) ? (((/* implicit */long long int) 1143033557)) : (-3475435840231070287LL)))) ? (-6114138565279448239LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_29] [i_0])))));
                }
            }
        }
        var_89 = ((/* implicit */unsigned long long int) max((var_89), (((unsigned long long int) 6981144830216849398LL))));
        var_90 ^= ((/* implicit */long long int) (signed char)93);
    }
}
