/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81035
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1765380869)))) ? (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)180)))) : (((/* implicit */int) (unsigned char)180))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_2] [i_2] [(short)4]))) ? (var_6) : (((/* implicit */int) (unsigned char)159))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 7; i_3 += 3) 
                    {
                        arr_14 [4] [(short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (var_6) : (arr_3 [9ULL] [i_3 - 2])));
                        var_19 = ((/* implicit */unsigned int) ((var_8) ^ (((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 2200666872U)) : (var_10)))));
                    }
                    arr_15 [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_15)) ? (722837596) : (((/* implicit */int) (short)-9221))))));
                }
            } 
        } 
        arr_16 [(short)6] = ((/* implicit */short) ((((/* implicit */_Bool) 6695470780999195366ULL)) ? (6695470780999195366ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((-2147483647 - 1)) : ((~(arr_18 [i_4])))));
        arr_20 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (short)-10553)) : (((/* implicit */int) (unsigned char)91)))))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 2; i_5 < 23; i_5 += 2) 
        {
            var_20 = ((/* implicit */int) ((unsigned int) arr_17 [i_4 + 2]));
            var_21 += ((/* implicit */short) 62914560U);
            arr_23 [i_5] [i_4 + 3] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
            arr_24 [i_5] [i_4 + 3] [(unsigned char)5] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
            arr_25 [i_4] [(short)14] [(short)14] &= ((/* implicit */int) ((4138394881U) * (((/* implicit */unsigned int) arr_21 [i_4 + 2]))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_4 + 3]))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)87)) : (arr_27 [i_4 - 1])));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    {
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)29))));
                        var_25 = ((((/* implicit */_Bool) arr_29 [i_4 + 3] [i_4 + 3])) ? (var_1) : (var_1));
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            arr_36 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11751273292710356268ULL)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (short)-1))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)55)) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (8323072U))) : (62914562U)));
                            arr_37 [i_4 + 1] [i_7] [i_4 + 1] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4 + 1]))) <= (-7811307390707393576LL)));
                            var_27 = ((/* implicit */int) var_16);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) 597875486)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -757075225))))) : (((arr_30 [(unsigned char)14] [i_6] [i_6]) - ((-2147483647 - 1)))))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_22 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))) : (((((/* implicit */_Bool) 2200666874U)) ? (3821068477U) : (((/* implicit */unsigned int) var_6))))));
                            var_30 = ((/* implicit */int) ((3462114531U) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -16777216))))))));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) -2147483624)) : (72057594029539328ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_4] [(short)4] [(short)4] [i_7] [i_8] [i_10]))) : (var_8))) : (((/* implicit */unsigned long long int) 2128386246U))));
                        }
                        arr_40 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)230))));
                    }
                } 
            } 
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (arr_21 [i_4 + 1]) : (((/* implicit */int) (short)23335)))))));
            var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -553650874)) ? (((/* implicit */int) arr_35 [i_4 + 3] [i_6] [14U] [i_6] [i_4])) : (var_6))))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 3) 
    {
        arr_44 [i_11] = ((/* implicit */short) (~(max((arr_41 [i_11 - 1]), (((((-378158788) + (2147483647))) << (((2147483647) - (2147483647)))))))));
        /* LoopSeq 3 */
        for (unsigned char i_12 = 4; i_12 < 13; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                arr_50 [i_12] [i_12] [i_13] [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_49 [i_11] [i_11 + 1] [(short)6] [i_11])) ? (((/* implicit */int) (short)18219)) : (((/* implicit */int) (short)-29106)))) >> (((var_4) + (51519636)))));
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3462114531U)) ? (((/* implicit */unsigned long long int) 0U)) : (var_8)));
                arr_51 [i_13] [i_13] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((short) arr_47 [i_11] [i_11 - 1] [i_12 - 3]));
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) (~(407392544)))) ? ((-(4698081688854120220ULL))) : (((/* implicit */unsigned long long int) 3462114527U)))))));
            }
            /* vectorizable */
            for (short i_14 = 3; i_14 < 13; i_14 += 3) 
            {
                arr_55 [i_11 + 1] [i_12] [i_11 + 1] [i_11 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 2147483637)) : (4698081688854120218ULL)));
                arr_56 [i_11] [i_12] = ((/* implicit */unsigned long long int) 3147577340U);
            }
            for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                arr_59 [i_11] [i_11] [i_15] [i_12] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((2046), (((/* implicit */int) arr_29 [i_11] [i_11]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_12 + 1])) ? (((((/* implicit */_Bool) 432304521825600383LL)) ? (var_7) : (832852779U))) : (((3462114527U) / (var_17)))))) : ((~(min((((/* implicit */unsigned long long int) var_1)), (13748662384855431397ULL)))))));
                arr_60 [i_11] [i_12 + 1] |= ((/* implicit */short) (~((~(arr_46 [i_11 + 1] [i_11 - 1] [i_12 - 3])))));
            }
            arr_61 [7U] [7U] = ((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) -378158788))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_52 [i_11 + 1] [i_11 + 2] [i_12 - 1])), (8977779465256066084LL)))) : (((((/* implicit */_Bool) arr_52 [i_12] [i_11 + 1] [i_12 + 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_52 [i_12] [i_11 - 1] [i_12 + 1]))))));
            var_36 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 3449291051U)) ? (-1317291152) : (-915258544))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (13) : (arr_22 [i_11 - 1])))));
        }
        /* vectorizable */
        for (unsigned char i_16 = 4; i_16 < 13; i_16 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4698081688854120218ULL))));
            /* LoopSeq 3 */
            for (long long int i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    for (unsigned char i_19 = 0; i_19 < 14; i_19 += 3) 
                    {
                        {
                            var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(14418653311202154426ULL)))) ? (((/* implicit */long long int) 845676240U)) : ((~(var_0)))));
                            var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)252)) ? (arr_75 [i_19]) : (arr_66 [i_11] [i_16 - 3])))) ? ((~(-378158788))) : (205749324));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) var_1)) : (704642877U)))) > (arr_66 [i_11 + 2] [i_16 + 1])));
                            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (2147483647) : (((/* implicit */int) (!(((/* implicit */_Bool) 13748662384855431416ULL)))))));
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3462114531U)) ? (var_2) : (3462114531U)))) ? (var_4) : (((((/* implicit */_Bool) var_9)) ? (1745916739) : (var_6))))))));
                        }
                    } 
                } 
                arr_76 [i_17] [i_16] [i_11 + 1] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_58 [i_11] [i_16 - 4] [i_17] [i_17]))));
            }
            for (int i_20 = 2; i_20 < 13; i_20 += 3) 
            {
                var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_20 + 1])) ? (((((/* implicit */_Bool) (short)-12546)) ? (96650312) : (var_1))) : (((int) -597875486))));
                arr_81 [i_20] [i_20] [i_20 + 1] [i_20 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_26 [i_11 + 1] [i_11]) >= (((/* implicit */unsigned int) -205749324)))))));
                var_45 = ((/* implicit */short) ((((/* implicit */_Bool) 3449291051U)) ? (18014261070528512LL) : (((/* implicit */long long int) 3462114531U))));
                arr_82 [i_11] [i_11] [i_20 + 1] = ((/* implicit */int) ((long long int) var_12));
            }
            for (unsigned char i_21 = 3; i_21 < 10; i_21 += 3) 
            {
                var_46 = ((/* implicit */unsigned char) (+((-2147483647 - 1))));
                /* LoopSeq 2 */
                for (int i_22 = 1; i_22 < 11; i_22 += 4) 
                {
                    var_47 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_16)) ^ (13748662384855431416ULL)));
                    arr_87 [i_11 - 1] [i_22] [i_21] [i_22] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) + (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -205749325)) ^ (-8758099689696626281LL)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 5626159533571783624LL)) : (arr_75 [i_22]))));
                }
                for (unsigned long long int i_23 = 3; i_23 < 12; i_23 += 3) 
                {
                    var_48 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_83 [i_16] [i_11 + 1] [i_11 + 1] [i_23 + 1])) ? (((/* implicit */int) arr_83 [i_21] [i_11 + 2] [i_11] [i_23 + 2])) : (((/* implicit */int) (short)3554))));
                    var_49 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)93)) ? (arr_79 [i_11 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21504)))));
                    var_50 = ((/* implicit */int) min((var_50), ((~(((((/* implicit */_Bool) 832852791U)) ? (var_12) : (1849049075)))))));
                }
                arr_92 [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */long long int) arr_64 [i_16 - 2])) ^ (5626159533571783608LL)));
            }
        }
        for (unsigned char i_24 = 4; i_24 < 13; i_24 += 1) /* same iter space */
        {
            var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_41 [i_11 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_41 [i_11 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)15362))))))))));
            var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) -1868326315)) && (((/* implicit */_Bool) 9223372036854775807LL))))))))));
            arr_97 [i_11] [i_11] |= ((((/* implicit */_Bool) 205749324)) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_45 [i_11 + 1])), (1849049075)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_2))));
        }
    }
    for (long long int i_25 = 2; i_25 < 11; i_25 += 4) 
    {
        var_53 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 832852791U)) / (var_0)))) ? (min((((/* implicit */unsigned long long int) (+(var_9)))), (arr_75 [i_25]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483647)), (1148737648U)))) ? (((/* implicit */unsigned long long int) arr_63 [i_25 - 1])) : ((-(11158950741424122496ULL)))))));
        var_54 += ((/* implicit */int) ((((/* implicit */_Bool) ((4294967287U) + (1627170088U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483645)) ? (((/* implicit */int) arr_42 [i_25 + 1])) : (((/* implicit */int) (short)32766))))) : (((var_3) ^ (((/* implicit */unsigned long long int) var_4))))));
    }
    var_55 = ((/* implicit */short) var_0);
    var_56 = ((/* implicit */short) (-((+(((((/* implicit */_Bool) var_12)) ? (var_17) : (((/* implicit */unsigned int) var_14))))))));
    var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) ((((/* implicit */_Bool) ((((var_11) - (-4686935932207989275LL))) - (((/* implicit */long long int) (+(2667797208U))))))) ? (((/* implicit */long long int) (-((+(((/* implicit */int) (short)-32767))))))) : ((+((-(1730960185776058571LL))))))))));
}
