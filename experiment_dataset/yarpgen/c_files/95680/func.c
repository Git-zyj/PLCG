/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95680
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_9 [i_1] = ((/* implicit */short) max((((int) var_1)), (((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned long long int) ((_Bool) ((short) arr_11 [i_0] [i_1] [i_2])));
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((arr_1 [i_1]), (((/* implicit */unsigned int) (!(var_12)))))))));
                    var_15 ^= max((((/* implicit */unsigned long long int) var_12)), ((+(18446744073709551615ULL))));
                    var_16 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)255))));
                }
                var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)30207))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (int i_5 = 3; i_5 < 21; i_5 += 2) 
            {
                {
                    var_18 |= ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (_Bool)0))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_6] [i_3] [i_3] [i_6] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_6 + 1] [i_5 + 1]))));
                            var_19 = arr_20 [i_6] [i_6] [i_3] [i_6] [i_3];
                        }
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                        {
                            var_20 *= ((/* implicit */unsigned long long int) arr_22 [3ULL] [3ULL] [i_5 + 1] [i_5] [i_5 - 1] [3ULL] [i_5 + 3]);
                            var_21 = (!(((/* implicit */_Bool) arr_21 [i_5] [i_5 - 2] [i_5 + 2] [i_6] [i_6 + 1] [i_8])));
                            arr_30 [i_3] [i_4] [i_3] [i_6] [i_3] = var_1;
                        }
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((int) ((short) (unsigned char)234)));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((unsigned long long int) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6])))));
                            var_24 = ((/* implicit */int) arr_24 [i_3] [i_3] [i_5] [i_5 - 2] [i_9]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                            var_26 = ((/* implicit */int) (~(arr_31 [i_10] [i_6 + 1] [i_6] [i_4] [i_3])));
                        }
                    }
                    for (short i_11 = 1; i_11 < 23; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_11] [i_3] [i_5] [i_5] [i_3] [i_3] = ((/* implicit */_Bool) var_1);
                        var_27 = ((/* implicit */unsigned char) (-(max((arr_36 [i_3] [i_11 - 1] [i_5 - 3] [i_3]), (arr_36 [i_3] [i_11 + 1] [i_5 - 2] [i_3])))));
                    }
                    for (short i_12 = 1; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) arr_28 [i_3] [i_5 + 1] [i_5 + 1])), (arr_31 [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 - 3])))));
                        var_29 ^= ((/* implicit */unsigned short) min((min((arr_19 [i_12 + 1]), (((/* implicit */unsigned int) ((unsigned short) var_7))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1232226094U)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_30 |= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_42 [(signed char)6] [i_5] [i_5 - 1] [i_5] [i_5]))))));
                            var_31 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned long long int) ((signed char) arr_42 [i_3] [i_5 - 2] [i_5] [i_12] [i_13])))));
                            arr_47 [i_3] [i_3] = ((/* implicit */int) var_2);
                        }
                        var_32 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_8))))));
                    }
                    for (unsigned char i_14 = 2; i_14 < 21; i_14 += 2) 
                    {
                        arr_51 [(_Bool)1] [(unsigned char)13] [i_3] = ((/* implicit */_Bool) (~((~(arr_38 [i_5] [i_5 + 2] [i_5] [i_5] [i_5 + 2] [i_14 + 3])))));
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 1; i_15 < 23; i_15 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) var_10);
                            var_34 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)52))));
                            var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                            var_36 = (~((~(((/* implicit */int) var_6)))));
                            var_37 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_4)), (arr_52 [i_3] [i_3])))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 2; i_16 < 23; i_16 += 2) /* same iter space */
                        {
                            arr_58 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_5);
                            var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                            var_39 &= ((/* implicit */unsigned char) var_0);
                        }
                        for (long long int i_17 = 2; i_17 < 23; i_17 += 2) /* same iter space */
                        {
                            var_40 = ((/* implicit */int) max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_42 [i_3] [i_14 + 2] [i_5] [i_3] [i_3])), (var_0))))))));
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((unsigned short) (unsigned char)22)))));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            var_42 = (-(var_2));
                            var_43 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_41 [i_3] [i_18 - 1] [i_18] [i_18 - 1] [4U]))))));
                        }
                        for (int i_19 = 0; i_19 < 24; i_19 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned int) arr_42 [i_3] [i_4] [i_14 - 2] [i_14] [i_5 - 3]);
                            var_45 = ((/* implicit */short) (+(((/* implicit */int) arr_53 [i_14] [i_3] [i_3] [i_14] [i_14 - 2] [i_14] [i_14 - 1]))));
                            var_46 = ((/* implicit */signed char) ((unsigned char) (unsigned char)0));
                        }
                        for (long long int i_20 = 0; i_20 < 24; i_20 += 4) 
                        {
                            var_47 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_28 [i_20] [i_20] [i_14 + 2]), (arr_28 [i_20] [i_20] [i_14 + 3]))))));
                            arr_70 [i_3] [i_14] [i_5 + 1] [i_5] [i_20] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_18 [i_4] [i_5 + 2]), (arr_18 [i_3] [i_4])))), ((~(((/* implicit */int) arr_18 [i_5 - 2] [i_14]))))));
                            var_48 ^= ((/* implicit */_Bool) arr_26 [i_5 + 2] [i_20] [i_14 - 2] [i_20] [i_20]);
                        }
                        for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                        {
                            var_49 += ((/* implicit */unsigned short) min((arr_35 [i_21 + 1] [i_14] [i_14] [i_3]), (((/* implicit */signed char) arr_68 [i_21 + 1]))));
                            arr_73 [i_4] [i_14] |= ((/* implicit */unsigned short) (+(3062741202U)));
                        }
                        var_50 = max(((unsigned char)245), (((/* implicit */unsigned char) (_Bool)1)));
                        var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) var_6)))));
                    }
                    var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) var_11))));
                    /* LoopSeq 2 */
                    for (unsigned char i_22 = 3; i_22 < 23; i_22 += 1) 
                    {
                        var_53 = ((/* implicit */_Bool) var_4);
                        var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) arr_63 [i_3] [i_4] [i_4] [i_5] [(_Bool)1]))));
                        var_55 = ((/* implicit */signed char) (~(((/* implicit */int) arr_57 [(unsigned short)21] [(unsigned short)21] [i_5 - 3] [i_5 + 1] [i_5 - 3] [i_22]))));
                        var_56 = ((/* implicit */short) var_9);
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_57 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned long long int) var_0)), (arr_14 [i_5 - 2]))));
                        /* LoopSeq 3 */
                        for (long long int i_24 = 0; i_24 < 24; i_24 += 1) 
                        {
                            arr_83 [i_3] [i_3] [i_24] = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned short) var_6)), (var_3))));
                            var_58 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)));
                            var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) min(((signed char)76), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)224))))))))));
                            var_60 = ((/* implicit */unsigned short) min((var_60), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1255609706)))))));
                        }
                        for (unsigned char i_25 = 0; i_25 < 24; i_25 += 2) 
                        {
                            var_61 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_1)))));
                            arr_87 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_69 [i_3] [i_3] [i_4] [i_4] [i_23] [i_25]);
                            var_62 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_5 - 3] [i_25]))))), (((unsigned short) var_8))));
                        }
                        for (unsigned char i_26 = 2; i_26 < 23; i_26 += 4) 
                        {
                            var_63 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_84 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5] [i_26 + 1] [i_26]))));
                            var_64 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (unsigned short)38010)))));
                            var_65 = ((/* implicit */short) min((var_65), (((/* implicit */short) arr_61 [i_3] [i_4] [i_4] [i_5 - 1] [i_23] [i_4]))));
                            var_66 = ((/* implicit */short) arr_18 [i_3] [i_3]);
                            var_67 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)24039)), (1232226094U)));
                        }
                        var_68 -= ((/* implicit */_Bool) var_10);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_27 = 2; i_27 < 23; i_27 += 1) /* same iter space */
                        {
                            var_69 = ((/* implicit */unsigned char) ((_Bool) max((arr_90 [i_5] [i_5] [(unsigned char)12] [i_5 + 2]), (arr_90 [i_4] [i_5] [i_5] [i_5 - 2]))));
                            var_70 = ((/* implicit */unsigned char) min((var_70), (((/* implicit */unsigned char) arr_46 [i_27] [i_27 - 1] [18ULL] [i_27] [22LL] [i_27]))));
                        }
                        for (unsigned long long int i_28 = 2; i_28 < 23; i_28 += 1) /* same iter space */
                        {
                            var_71 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_0)))))))));
                            var_72 = ((/* implicit */unsigned short) arr_65 [i_3] [i_5 + 3] [i_5 + 1] [i_23] [i_28 - 2] [i_23]);
                        }
                        for (unsigned long long int i_29 = 2; i_29 < 23; i_29 += 1) /* same iter space */
                        {
                            var_73 = var_0;
                            var_74 = ((/* implicit */short) var_3);
                            var_75 = ((/* implicit */_Bool) (-(var_10)));
                            var_76 = ((/* implicit */unsigned long long int) (-((~(arr_60 [i_3])))));
                        }
                        var_77 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_29 [i_3] [i_3]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_30 = 0; i_30 < 24; i_30 += 1) 
                    {
                        for (unsigned short i_31 = 0; i_31 < 24; i_31 += 4) 
                        {
                            {
                                var_78 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */int) arr_100 [i_3] [i_5 + 1] [i_30] [i_3])), (arr_21 [i_3] [i_5 - 3] [i_31] [(short)16] [i_31] [i_31]))));
                                var_79 = ((/* implicit */_Bool) min((var_79), (((/* implicit */_Bool) var_0))));
                                var_80 = ((/* implicit */unsigned long long int) arr_88 [i_3] [i_3] [i_3] [i_3] [i_3] [(short)16] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_81 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((unsigned short)22477), (((/* implicit */unsigned short) (_Bool)0)))))));
    }
    /* LoopNest 2 */
    for (int i_32 = 1; i_32 < 21; i_32 += 2) 
    {
        for (unsigned char i_33 = 4; i_33 < 20; i_33 += 4) 
        {
            {
                var_82 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)27264))), (((/* implicit */unsigned short) arr_23 [i_33] [i_32 + 1] [i_32 + 1] [i_33 - 4] [i_33 - 4]))));
                arr_108 [i_33] = ((/* implicit */signed char) ((long long int) min((min((arr_32 [i_32] [i_32 + 1] [i_32] [i_33] [i_32] [i_33]), (((/* implicit */unsigned long long int) arr_75 [i_32 + 2] [(_Bool)0] [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] [(_Bool)1])))), (((/* implicit */unsigned long long int) arr_41 [i_33] [i_33] [i_33] [i_33] [i_33])))));
            }
        } 
    } 
}
