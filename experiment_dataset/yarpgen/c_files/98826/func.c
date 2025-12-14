/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98826
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((208736026U) ^ (4086231270U))))));
                    arr_8 [(signed char)0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) 4086231289U);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_12 = ((/* implicit */long long int) arr_13 [i_0] [i_6] [i_4]);
                        var_13 = arr_17 [i_0] [i_0] [0U] [i_0 + 1] [i_0];
                        arr_19 [i_6] [i_5] [i_4] = ((/* implicit */unsigned char) var_4);
                    }
                    var_14 = ((/* implicit */_Bool) arr_11 [i_0 + 1] [4ULL] [i_0 + 1]);
                    /* LoopSeq 4 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        arr_23 [i_0] [(unsigned char)3] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0 - 1] [i_4] [i_5 + 2] [i_7])) << (((arr_20 [i_7]) - (2338460442041400051LL)))));
                        arr_24 [i_0 + 1] [i_3] [i_4] [i_0] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_1 [i_0 - 1]))));
                    }
                    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_15 -= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_8] [i_4]))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (208736007U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73)))))));
                        arr_29 [i_0] [i_3] [i_4] [i_5] [i_8] = ((((/* implicit */_Bool) 144115188075823104ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [(unsigned char)1] [i_0 - 1] [i_0 + 1]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [i_8]))) : (arr_20 [i_0 - 1]))));
                        var_16 = ((/* implicit */unsigned char) ((((-781015669) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_4] [i_4])) - (22)))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (arr_18 [i_0] [i_3] [i_4] [10] [i_8])));
                    }
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        arr_33 [i_0] [i_0 + 1] [i_0] [(unsigned char)17] [(unsigned char)17] = ((/* implicit */signed char) arr_10 [i_0 + 1]);
                        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) 4086231280U)) ? (781015669) : (((((/* implicit */_Bool) -781015669)) ? (((/* implicit */int) (short)992)) : (((/* implicit */int) var_10))))));
                    }
                    for (int i_10 = 4; i_10 < 16; i_10 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (15826967810281203749ULL)));
                        arr_37 [i_4] |= ((/* implicit */signed char) arr_34 [(unsigned char)9] [i_0] [3ULL] [i_0]);
                    }
                }
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]))));
                    arr_42 [(short)6] [i_3] [i_3] [(short)6] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_0] [(unsigned char)8] [i_4] [i_0] [i_11] [i_4]))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_31 [i_0] [19U] [i_4] [(unsigned char)4] [i_12] [i_11] [i_11])) ? (arr_3 [(signed char)16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                    }
                    var_23 = ((/* implicit */short) arr_41 [i_0] [i_3] [i_4] [i_11] [i_11]);
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) arr_47 [i_0] [i_0 - 1] [i_3] [15U] [i_14] [i_13] [(unsigned char)6]);
                            var_25 = ((((/* implicit */_Bool) -781015664)) ? (4086231295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-983))));
                            var_26 = ((/* implicit */unsigned char) (-(var_9)));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)28)) ? (10307284692989167802ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13452)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_2 [(unsigned char)18] [i_4]))));
                var_29 = ((/* implicit */signed char) (~(arr_27 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
            }
            for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        arr_58 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) arr_43 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0]);
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [12U] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_56 [i_0 + 1] [i_0 + 1] [10LL] [i_16] [i_17])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_0 - 1] [(unsigned char)14] [i_0 + 1] [i_0 + 1] [i_0 - 1])) ^ (((/* implicit */int) arr_43 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                    }
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_57 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(short)0] [(short)0] [7LL] [i_16])) : (208736016U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_27 [i_0] [i_3] [i_16] [13LL])) ? (arr_41 [i_0 + 1] [i_0] [17LL] [i_15] [(unsigned char)15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                }
                for (unsigned int i_18 = 1; i_18 < 16; i_18 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        arr_63 [i_18] [i_18] [i_15] [i_3] [i_3] [i_18] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                        var_33 = ((/* implicit */_Bool) 4086231296U);
                        var_34 = ((/* implicit */unsigned int) (signed char)100);
                    }
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((((/* implicit */_Bool) arr_49 [i_0] [i_3] [(unsigned char)7] [i_15] [i_15] [i_18] [i_18])) && (((/* implicit */_Bool) (short)-13442)))) || ((!(((/* implicit */_Bool) arr_34 [i_0] [i_15] [i_0] [i_0])))))))));
                }
                for (unsigned int i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (int i_21 = 0; i_21 < 20; i_21 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) 2303591209400008704ULL);
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_0 - 1] [i_15] [i_15] [i_21])) != ((~(arr_25 [i_0] [(signed char)4] [i_3] [i_15] [i_20] [i_21] [i_21])))));
                        var_38 -= ((((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))) : (var_6))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))));
                    }
                    for (int i_22 = 0; i_22 < 20; i_22 += 1) /* same iter space */
                    {
                        var_39 -= (-(var_6));
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(signed char)10] [i_15])) ? (((13211531820560634371ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0 + 1] [5] [i_0 + 1] [i_0 - 1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1777192692U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_15] [i_15] [(short)16]))))))))));
                        var_42 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)6595))));
                    }
                    for (unsigned char i_23 = 3; i_23 < 19; i_23 += 1) 
                    {
                        var_43 = ((/* implicit */int) arr_20 [i_0]);
                        var_44 = ((/* implicit */long long int) ((unsigned char) (_Bool)0));
                        var_45 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_15])) : (((/* implicit */int) var_5))))));
                        var_46 -= var_9;
                    }
                    for (unsigned char i_24 = 0; i_24 < 20; i_24 += 2) 
                    {
                        arr_76 [i_0] [i_3] [(_Bool)1] [i_20] [(signed char)12] [i_24] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_15] [i_3] [i_0 + 1])) ? (((/* implicit */int) arr_11 [i_24] [i_15] [i_0])) : (((/* implicit */int) arr_11 [i_24] [i_20] [i_0]))));
                        arr_77 [i_15] [i_3] [i_0] [i_20] [i_24] [i_0] [i_0] = ((/* implicit */short) ((arr_9 [i_15] [i_3] [i_0 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0] [i_0 - 1]))) : (arr_73 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                        arr_78 [i_0] [i_0] [i_15] [i_0] = arr_31 [i_0] [i_0] [i_0] [i_3] [i_15] [i_20] [i_0];
                        var_47 = ((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_0] [i_0]);
                    }
                    var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_36 [i_20] [(signed char)4] [i_15] [i_3] [i_3] [i_20])))) ? (((/* implicit */unsigned long long int) arr_45 [4ULL] [i_0] [i_0])) : ((((_Bool)1) ? (arr_54 [i_0] [i_0 + 1] [2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_0 - 1] [(unsigned char)9] [i_0 - 1]))))))))));
                }
                for (unsigned int i_25 = 0; i_25 < 20; i_25 += 2) /* same iter space */
                {
                    var_49 *= (~(1U));
                    arr_82 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_75 [i_0 - 1] [i_0 + 1] [i_0 + 1] [1LL] [i_0]) >> (((arr_75 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [5ULL]) - (3839215804U)))));
                }
                /* LoopSeq 1 */
                for (signed char i_26 = 0; i_26 < 20; i_26 += 3) 
                {
                    var_50 = arr_22 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0];
                    /* LoopSeq 3 */
                    for (unsigned long long int i_27 = 3; i_27 < 18; i_27 += 1) 
                    {
                        var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4086231293U)) ? (arr_34 [i_0] [i_0 - 1] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_3] [i_15] [18ULL] [13U]))) : (4086231289U))))));
                        var_52 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_27] [i_27 - 2] [i_27] [i_0 + 1] [i_15] [i_0 + 1] [i_0 + 1]))) : (arr_80 [i_0] [i_3] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
                        arr_87 [i_26] [(signed char)18] = ((/* implicit */unsigned int) ((var_4) ? (arr_34 [i_0 - 1] [11U] [i_0 - 1] [i_0]) : (((/* implicit */long long int) var_7))));
                        var_53 |= ((/* implicit */short) ((((/* implicit */_Bool) 4086231277U)) ? ((+(arr_41 [i_27] [i_26] [19LL] [19LL] [19LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_0 - 1] [i_3] [i_27] [i_26] [i_3] [i_15])))));
                        var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) arr_50 [i_0 + 1] [(unsigned char)5] [i_0]))));
                    }
                    for (unsigned int i_28 = 0; i_28 < 20; i_28 += 4) 
                    {
                        var_55 = arr_84 [(unsigned char)7] [i_26] [i_15] [i_15] [i_26] [i_0 - 1];
                        var_56 -= ((/* implicit */unsigned short) arr_43 [i_0 + 1] [i_3] [(signed char)8] [i_26] [i_26]);
                    }
                    for (unsigned long long int i_29 = 0; i_29 < 20; i_29 += 3) 
                    {
                        var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) arr_17 [10LL] [(short)13] [i_15] [(short)8] [i_0]))));
                        var_58 = ((/* implicit */short) var_7);
                        arr_95 [i_26] [i_26] [i_3] [i_26] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 4086231320U)) ? (144115188075823104ULL) : (((/* implicit */unsigned long long int) 4086231287U)))) >> ((((~(arr_80 [i_0] [i_0] [i_0]))) - (757637243U)))));
                        var_59 = ((/* implicit */unsigned short) arr_91 [i_0 - 1] [i_3] [i_0 - 1] [i_15]);
                    }
                    var_60 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9235421611700651244ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_36 [i_26] [(unsigned char)15] [i_3] [i_26] [i_0 + 1] [(unsigned char)15]))));
                }
            }
            var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)992)) || (((/* implicit */_Bool) 4294967295U)))))))))));
            var_62 = ((/* implicit */unsigned int) var_4);
        }
    }
    for (unsigned int i_30 = 0; i_30 < 23; i_30 += 3) 
    {
        var_63 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_97 [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 311395727U)))))) : (arr_96 [i_30] [i_30]))))));
        var_64 -= ((/* implicit */short) (signed char)-123);
    }
    var_65 = ((/* implicit */unsigned int) var_2);
    var_66 = var_1;
    var_67 = ((/* implicit */unsigned short) max((var_67), (((/* implicit */unsigned short) var_9))));
}
