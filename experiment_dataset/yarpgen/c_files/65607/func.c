/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65607
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
    var_19 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((((unsigned char) 6221169100387168576LL)), (((unsigned char) (+(((/* implicit */int) (signed char)-88)))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(6221169100387168592LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)209)))) : (min((((/* implicit */long long int) arr_5 [i_0 + 1] [i_2])), (-7591787173937949519LL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_22 ^= (~(18446744073709551615ULL));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                arr_17 [i_3] [0U] [i_5] |= ((/* implicit */_Bool) (signed char)-108);
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5 - 1] [i_5 - 1] [i_5 + 1]))) : (arr_19 [6] [i_5 - 1] [i_6] [i_6]))))));
                    var_24 = ((/* implicit */long long int) (signed char)-108);
                    arr_21 [i_3] [(short)8] [i_5] = ((/* implicit */int) 11ULL);
                }
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_8] [i_8 + 1] [i_8 + 2] [i_8] [i_8])) << (((((/* implicit */int) (unsigned short)48198)) - (48194)))));
                        var_26 = ((/* implicit */long long int) ((arr_10 [i_3] [i_3]) != (2017612633061982208ULL)));
                    }
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */int) ((_Bool) (signed char)33));
                        arr_32 [i_3] [i_5] [11LL] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_9 [i_4]))));
                    }
                    arr_33 [i_3] [i_5] [i_5 - 1] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [8LL]))) & (-6221169100387168568LL)));
                }
                var_28 = ((/* implicit */unsigned short) ((long long int) arr_4 [i_5 - 1] [i_5 + 1]));
            }
            var_29 = ((/* implicit */unsigned short) ((arr_8 [i_4] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) (short)-14339)))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_4] [2] [i_3])) ? (((/* implicit */int) arr_14 [i_4] [i_3] [0] [i_3])) : (((/* implicit */int) (signed char)33)))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_31 -= ((/* implicit */short) arr_11 [i_10]);
            var_32 = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)-96)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))));
            /* LoopSeq 1 */
            for (long long int i_11 = 2; i_11 < 11; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 2; i_12 < 8; i_12 += 3) 
                {
                    for (unsigned char i_13 = 2; i_13 < 8; i_13 += 1) 
                    {
                        {
                            var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) arr_14 [i_11] [(unsigned short)10] [i_11 - 2] [i_11 - 2])) : (((/* implicit */int) arr_14 [(short)3] [i_11 - 1] [i_11 - 2] [i_11 - 2]))));
                            arr_46 [i_13 - 1] [i_12 - 2] [i_11] [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-72)) + (2147483647))) >> (((/* implicit */int) ((unsigned char) var_18)))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) 1641943717469355416LL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (signed char)-1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (int i_15 = 2; i_15 < 10; i_15 += 1) 
                    {
                        {
                            var_35 &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_45 [i_11 + 1] [i_11 + 1] [i_15 + 1] [i_11 + 1] [i_15] [i_15] [i_15]))));
                            var_36 = ((/* implicit */signed char) 268435456LL);
                            var_37 += ((/* implicit */short) ((arr_50 [i_3] [i_11 + 1] [i_14 - 1] [i_15]) % (arr_50 [i_3] [i_3] [i_3] [i_10])));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 2 */
        for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))));
            var_39 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((736583692155354587LL) - (736583692155354560LL)))));
        }
        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_18 = 1; i_18 < 10; i_18 += 3) 
            {
                arr_63 [i_3] [i_3] [i_18] = ((/* implicit */unsigned short) ((long long int) (unsigned char)116));
                /* LoopSeq 4 */
                for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    arr_66 [i_18] [i_18] [i_18 + 2] [6ULL] [i_18] = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_3] [i_3] [i_18 - 1]))));
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) arr_44 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                }
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    var_41 = ((/* implicit */_Bool) ((unsigned long long int) (signed char)-73));
                    arr_69 [i_18] [i_20] = ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) arr_26 [i_3] [3LL] [i_3] [i_3] [i_3])));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) -268435462LL)))));
                    var_43 = ((/* implicit */int) 1ULL);
                    var_44 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_18])))) && (((/* implicit */_Bool) arr_70 [i_3] [i_3] [(short)11] [i_3] [i_18] [i_18 + 2]))));
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                {
                    arr_74 [i_18] [(unsigned char)0] [i_17] [i_18] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)71))));
                    arr_75 [i_3] [i_17] [i_18] [i_18] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_18 + 2] [i_18 - 1]))));
                }
            }
            for (unsigned short i_23 = 0; i_23 < 12; i_23 += 4) 
            {
                var_45 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)250))));
                /* LoopSeq 4 */
                for (short i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    var_46 = ((/* implicit */int) max((var_46), (((((/* implicit */_Bool) 28ULL)) ? (((/* implicit */int) arr_18 [i_3] [i_17] [i_17] [i_3] [i_24])) : (((/* implicit */int) arr_34 [i_23]))))));
                    arr_81 [i_17] [i_17] [i_17] = ((((/* implicit */int) arr_79 [i_3] [i_17] [i_17] [i_24])) >= (((/* implicit */int) (_Bool)1)));
                    arr_82 [i_17] = ((/* implicit */short) -1LL);
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_47 = (_Bool)1;
                    var_48 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)116)) * (((/* implicit */int) (signed char)-34))));
                    var_49 = ((/* implicit */unsigned short) ((arr_71 [i_3] [i_3] [i_23]) ? (((/* implicit */int) arr_71 [i_3] [(short)10] [i_23])) : (((/* implicit */int) (unsigned char)176))));
                }
                for (unsigned char i_26 = 3; i_26 < 10; i_26 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_27 = 2; i_27 < 10; i_27 += 3) 
                    {
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((long long int) (short)1)))));
                        var_51 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                    }
                    arr_89 [i_26] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-72))));
                    arr_90 [i_23] [0U] = ((/* implicit */unsigned short) ((unsigned char) arr_50 [i_26 + 2] [i_26 + 2] [i_26 + 1] [i_26 + 2]));
                }
                for (signed char i_28 = 3; i_28 < 11; i_28 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_29 = 1; i_29 < 11; i_29 += 4) 
                    {
                        var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)72)) & (((/* implicit */int) (unsigned char)8)))))));
                        var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) (~(-1332400997))))));
                        arr_96 [i_3] [i_17] [i_23] [i_28] [i_29] = ((/* implicit */unsigned char) 736583692155354565LL);
                    }
                    arr_97 [i_28] [i_28] [i_23] [i_17] [i_28] = ((/* implicit */unsigned char) (signed char)65);
                    /* LoopSeq 2 */
                    for (short i_30 = 0; i_30 < 12; i_30 += 2) /* same iter space */
                    {
                        var_54 = ((/* implicit */_Bool) arr_47 [i_28] [i_28] [i_23] [i_28] [i_28]);
                        arr_100 [(_Bool)1] [i_28 - 1] [(unsigned char)2] [i_28 - 1] [i_28] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-8622412857337978987LL)));
                        arr_101 [i_3] |= ((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)33)))) + (((/* implicit */int) (short)-18817))));
                    }
                    for (short i_31 = 0; i_31 < 12; i_31 += 2) /* same iter space */
                    {
                        var_55 = ((/* implicit */unsigned short) (+(1974701853)));
                        arr_105 [i_28] [i_28] [i_23] [i_28] [i_28] = ((/* implicit */int) (+(-268435465LL)));
                        arr_106 [i_28] [i_3] [i_3] [i_3] [i_28] = ((unsigned char) (short)-18823);
                        var_56 = ((/* implicit */unsigned short) min((var_56), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5928354230751396701LL)))))));
                    }
                    var_57 = ((/* implicit */unsigned int) (short)18823);
                }
                var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) ((short) arr_98 [i_3] [(unsigned short)10] [i_17] [(unsigned char)8] [i_17] [i_17])))));
                var_59 &= ((/* implicit */unsigned long long int) (unsigned char)224);
            }
            for (long long int i_32 = 0; i_32 < 12; i_32 += 3) 
            {
                var_60 *= ((/* implicit */unsigned char) ((int) arr_14 [i_3] [i_3] [i_32] [i_3]));
                /* LoopSeq 2 */
                for (short i_33 = 1; i_33 < 10; i_33 += 4) /* same iter space */
                {
                    arr_112 [i_3] [i_17] [i_17] = ((/* implicit */unsigned long long int) (unsigned char)242);
                    var_61 *= ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551580ULL))));
                    var_62 += ((/* implicit */unsigned short) arr_7 [i_17] [i_3]);
                }
                for (short i_34 = 1; i_34 < 10; i_34 += 4) /* same iter space */
                {
                    arr_115 [i_3] [(unsigned char)4] [i_3] [i_34] |= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)27727))));
                    var_63 += ((/* implicit */unsigned char) arr_71 [i_3] [i_3] [i_3]);
                    arr_116 [i_3] [i_3] [i_3] [i_34] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_71 [i_34 + 1] [i_34] [i_3]))));
                }
                var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-89))) ? (((/* implicit */int) (unsigned short)65528)) : (arr_50 [10] [i_3] [i_17] [i_32])));
                arr_117 [i_3] [i_17] [i_32] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)60))));
            }
            arr_118 [i_3] [i_17] [i_3] = ((((((/* implicit */_Bool) (unsigned short)62255)) ? (((/* implicit */unsigned long long int) -8622412857337978986LL)) : (arr_10 [(_Bool)1] [(_Bool)1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)60)) <= (((/* implicit */int) var_11)))))));
        }
    }
    for (short i_35 = 0; i_35 < 12; i_35 += 4) /* same iter space */
    {
        var_65 = ((/* implicit */short) min(((+(((((/* implicit */int) (signed char)31)) + (((/* implicit */int) var_5)))))), ((+(((/* implicit */int) arr_92 [i_35] [i_35] [i_35] [i_35]))))));
        /* LoopNest 2 */
        for (short i_36 = 0; i_36 < 12; i_36 += 1) 
        {
            for (long long int i_37 = 2; i_37 < 11; i_37 += 1) 
            {
                {
                    var_66 |= (~(((/* implicit */int) (unsigned short)0)));
                    arr_126 [i_35] [i_35] [i_36] [i_35] = ((unsigned char) 5928354230751396701LL);
                }
            } 
        } 
        var_67 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)28)), (5928354230751396696LL)))) ? (((((/* implicit */_Bool) arr_16 [i_35] [i_35] [i_35] [i_35])) ? (arr_50 [i_35] [10LL] [i_35] [i_35]) : (arr_50 [i_35] [i_35] [i_35] [i_35]))) : (min((arr_50 [i_35] [i_35] [i_35] [i_35]), (arr_16 [i_35] [i_35] [i_35] [i_35])))));
        arr_127 [i_35] [i_35] = ((/* implicit */long long int) ((min((((/* implicit */int) (short)-14655)), ((-(((/* implicit */int) (unsigned short)65535)))))) - (((/* implicit */int) ((unsigned char) arr_49 [i_35])))));
        /* LoopSeq 2 */
        for (unsigned char i_38 = 3; i_38 < 8; i_38 += 3) /* same iter space */
        {
            arr_131 [3LL] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned char)239)))))) << (((((long long int) arr_2 [i_38])) - (82LL)))));
            arr_132 [i_35] = ((/* implicit */signed char) -1915039677);
            arr_133 [i_38] |= ((/* implicit */unsigned char) ((signed char) (unsigned char)83));
        }
        /* vectorizable */
        for (unsigned char i_39 = 3; i_39 < 8; i_39 += 3) /* same iter space */
        {
            var_68 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)5))));
            arr_136 [i_39] [i_39 - 3] [i_39] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)195)) | (((/* implicit */int) (short)1023))));
            var_69 = ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_39 + 4]))) ^ (8622412857337979001LL));
            arr_137 [i_39] [i_35] [i_39] = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_39] [i_39] [i_35]))));
            var_70 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-13253))));
        }
    }
    /* vectorizable */
    for (short i_40 = 0; i_40 < 12; i_40 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_41 = 0; i_41 < 0; i_41 += 1) 
        {
            var_71 = ((/* implicit */short) max((var_71), (((short) (short)(-32767 - 1)))));
            arr_142 [i_40] [i_40] [i_40] = (+(arr_12 [i_41 + 1] [i_41 + 1] [i_41 + 1]));
            arr_143 [10U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [(short)8] [(short)8] [(unsigned char)10] [i_41 + 1])) ? (-5928354230751396701LL) : (((/* implicit */long long int) arr_50 [i_40] [(unsigned char)3] [i_40] [i_41 + 1]))));
        }
        arr_144 [i_40] &= ((/* implicit */int) ((-14LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)60)))));
        /* LoopSeq 3 */
        for (short i_42 = 4; i_42 < 10; i_42 += 3) 
        {
            var_72 = ((/* implicit */short) max((var_72), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (-1LL) : (((/* implicit */long long int) 1081745458)))))));
            /* LoopSeq 2 */
            for (long long int i_43 = 0; i_43 < 12; i_43 += 1) /* same iter space */
            {
                arr_150 [(unsigned short)10] [i_42] [(unsigned short)5] [(unsigned short)10] = ((/* implicit */long long int) (unsigned char)50);
                var_73 = ((/* implicit */long long int) 95026795);
                var_74 = ((long long int) arr_139 [i_42 + 2]);
            }
            for (long long int i_44 = 0; i_44 < 12; i_44 += 1) /* same iter space */
            {
                var_75 -= ((/* implicit */unsigned int) (+(2LL)));
                var_76 += ((arr_151 [i_40]) <= (arr_151 [i_40]));
            }
        }
        for (unsigned int i_45 = 3; i_45 < 11; i_45 += 4) 
        {
            var_77 = ((/* implicit */_Bool) min((var_77), (((/* implicit */_Bool) ((int) arr_77 [i_45] [i_45 - 3] [i_45] [i_45])))));
            var_78 ^= ((/* implicit */unsigned char) ((arr_44 [i_45 + 1] [i_45 + 1] [i_45] [i_45 + 1] [i_45 - 3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36684)))));
            var_79 = ((/* implicit */unsigned char) var_5);
        }
        for (long long int i_46 = 0; i_46 < 12; i_46 += 3) 
        {
            var_80 = ((/* implicit */unsigned int) ((unsigned short) -5928354230751396712LL));
            arr_160 [i_46] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_73 [i_40] [i_40]))));
            var_81 = ((/* implicit */long long int) max((var_81), (((/* implicit */long long int) (unsigned char)247))));
            var_82 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
        }
        var_83 = ((/* implicit */short) max((var_83), (((/* implicit */short) ((((/* implicit */int) arr_114 [i_40] [i_40])) / (((/* implicit */int) arr_114 [i_40] [i_40])))))));
        var_84 |= ((/* implicit */_Bool) (unsigned char)83);
    }
    var_85 = ((((/* implicit */int) var_0)) & (((/* implicit */int) (signed char)15)));
    var_86 = ((/* implicit */unsigned short) max((var_86), (((/* implicit */unsigned short) var_2))));
}
