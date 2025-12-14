/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98054
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
    var_16 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */short) var_2)), (var_7)))) ? (var_11) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (var_14)))))), (((/* implicit */unsigned long long int) var_8))));
                var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_14)) : (var_13)))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0] [19LL])), (16587208394742002610ULL))) : (min((arr_3 [17LL]), (((/* implicit */unsigned long long int) var_13)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (var_15)))) ? ((~(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_3))))))), ((-9223372036854775807LL - 1LL))));
    var_19 = ((/* implicit */unsigned char) max((max((max((((/* implicit */unsigned long long int) var_3)), (0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_15))));
        var_21 = ((/* implicit */int) arr_7 [i_2] [i_2]);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_16 [i_3] [(_Bool)1] [i_5])) : (var_14)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (var_14) : (var_15))) / (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */int) var_10)) : (var_14)))));
                            var_24 = ((/* implicit */int) var_8);
                            var_25 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) >= ((-(var_11))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                var_26 &= ((/* implicit */unsigned char) var_10);
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 19; i_9 += 2) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (16ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (808887250393901520LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_4] [i_8] [i_9 + 2] [(signed char)0]))))))));
                            var_28 = ((/* implicit */unsigned char) ((((808887250393901520LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15192))))) / (-7086140259353889974LL)));
                            arr_28 [i_3] [(short)10] [i_8] [(_Bool)1] [14LL] [i_3 + 1] [i_3] = ((/* implicit */short) var_15);
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [14U]))) / (var_11)))) ? (((((/* implicit */_Bool) arr_13 [i_8] [i_4] [i_3] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))) : (arr_13 [i_3] [i_3] [i_3] [i_3])));
                var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_26 [i_3] [i_8] [9LL] [i_4 - 1] [i_3])) >= (((((/* implicit */_Bool) var_5)) ? (arr_23 [i_3 + 1] [i_3] [i_8] [i_8] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            }
            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
            {
                var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (var_15)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (~(1647141799)))));
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_11))));
                /* LoopNest 2 */
                for (long long int i_12 = 1; i_12 < 20; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) (~((~(arr_13 [i_4] [i_11] [1] [i_4])))));
                            var_35 = ((/* implicit */unsigned char) var_15);
                        }
                    } 
                } 
                arr_37 [i_3] [i_3] [i_4 - 1] [i_3] = (-((-(((/* implicit */int) var_10)))));
                arr_38 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))) >= (((/* implicit */int) (unsigned char)0))));
            }
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
            {
                var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 708864054U)) | (var_12)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_12)) ? (-770850570) : (((/* implicit */int) var_7))))));
                var_37 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) -2147483620)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) / (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */int) var_6))))));
            }
        }
        for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            var_38 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (var_1)));
            var_39 = ((/* implicit */long long int) var_12);
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_20 [i_3 + 1] [i_3] [i_3 + 1] [i_15]) >= (((/* implicit */int) (unsigned char)0)))))) : (var_1)));
            arr_46 [i_3] = ((/* implicit */long long int) ((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) >= (var_9)))))));
        }
        for (unsigned char i_16 = 1; i_16 < 19; i_16 += 3) 
        {
            var_41 = var_6;
            var_42 &= ((/* implicit */unsigned long long int) var_8);
            var_43 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_16 + 3])))))));
            /* LoopSeq 2 */
            for (short i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                var_44 |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
                var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)0)) : (-1647141824))) : (var_14)));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        {
                            arr_56 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_19] [21ULL] [i_16 + 1] [i_3]))) : (arr_54 [i_3] [(unsigned short)21]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16605)))));
                            var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_54 [4LL] [i_19])) : (var_12)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_53 [i_19] [10LL] [10LL] [i_3 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((16ULL) < (((/* implicit */unsigned long long int) var_15)))))))))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(var_15)))) | (18446744073709551615ULL))))));
                /* LoopSeq 3 */
                for (short i_20 = 4; i_20 < 18; i_20 += 4) 
                {
                    var_48 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                    /* LoopSeq 4 */
                    for (unsigned int i_21 = 3; i_21 < 18; i_21 += 4) 
                    {
                        var_49 += ((/* implicit */unsigned long long int) var_4);
                        arr_63 [i_3] [i_20] [i_17] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) >= (23ULL)))))));
                        var_50 = ((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned int) var_15))));
                    }
                    for (short i_22 = 2; i_22 < 21; i_22 += 3) 
                    {
                        var_51 = ((/* implicit */long long int) var_15);
                        var_52 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) + (((((/* implicit */int) var_10)) / (var_14)))));
                        var_53 |= ((/* implicit */signed char) (((~(var_15))) + ((-(((/* implicit */int) (short)-32762))))));
                        var_54 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [7] [i_20 + 2] [7LL]))) : (((6209135230700996575ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    }
                    for (int i_23 = 2; i_23 < 18; i_23 += 4) /* same iter space */
                    {
                        var_55 = ((/* implicit */_Bool) var_15);
                        var_56 = ((/* implicit */int) ((((/* implicit */_Bool) arr_65 [3ULL] [i_16 + 2] [3ULL] [i_17] [15ULL] [i_23 + 1] [i_3])) ? (((/* implicit */long long int) var_8)) : ((~(9223372036854775807LL)))));
                        var_57 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)18402))));
                    }
                    for (int i_24 = 2; i_24 < 18; i_24 += 4) /* same iter space */
                    {
                        var_58 = ((/* implicit */unsigned char) ((9ULL) ^ (((/* implicit */unsigned long long int) (~(var_1))))));
                        var_59 = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_3 + 1] [i_16] [4LL] [i_3])) : (((/* implicit */int) var_2)))) + (375297301));
                        var_60 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 168557111)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_7)))));
                        var_61 = ((/* implicit */unsigned char) max((var_61), (((/* implicit */unsigned char) (unsigned short)50337))));
                    }
                }
                for (unsigned char i_25 = 0; i_25 < 22; i_25 += 1) /* same iter space */
                {
                    arr_76 [(unsigned char)4] &= ((/* implicit */unsigned long long int) var_5);
                    var_62 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_8 [(unsigned char)16])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                }
                for (unsigned char i_26 = 0; i_26 < 22; i_26 += 1) /* same iter space */
                {
                    arr_81 [i_3] [i_3] [1LL] [i_17] [i_26] [i_26] = ((((((/* implicit */_Bool) arr_33 [i_3] [i_16] [10U] [i_26])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) / (((((/* implicit */_Bool) (short)18402)) ? (9ULL) : (((/* implicit */unsigned long long int) var_8)))));
                    var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_24 [12LL] [i_17] [(short)9] [i_16] [i_3 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_3 + 1] [i_16 - 1] [i_17] [i_26] [i_26])) ? (((/* implicit */int) var_0)) : (var_15)))) : ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) var_14))))));
                    arr_82 [i_3 + 1] [i_3 + 1] [i_17] [6LL] [(unsigned char)4] &= ((((/* implicit */int) var_7)) | (((((/* implicit */_Bool) var_9)) ? (var_15) : (var_15))));
                }
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                var_64 = ((/* implicit */_Bool) var_12);
                var_65 *= ((/* implicit */unsigned long long int) var_6);
            }
        }
        var_66 += ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)15191)) >= (((/* implicit */int) var_7)))))));
    }
}
