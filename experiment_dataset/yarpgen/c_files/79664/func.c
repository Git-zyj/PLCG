/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79664
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
    var_13 = ((/* implicit */unsigned int) min((((long long int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) | (18446744073709551615ULL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)113)), (var_3)))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (unsigned char)47)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)209))))), (((long long int) var_7))))) ? (3653833016U) : (((((/* implicit */_Bool) 641134280U)) ? (min((641134280U), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)209)) != (((/* implicit */int) (unsigned char)1))))), (arr_0 [i_0] [i_0])))), (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_8);
        var_16 = 864691128455135232ULL;
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_7)), (0ULL)))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [6U])) : (max((((((/* implicit */_Bool) 5690022759343597210LL)) ? (((/* implicit */unsigned long long int) arr_0 [1ULL] [7U])) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1468412140U)) ? (((/* implicit */long long int) 1847028908U)) : (var_7)))))))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((4294967295U) / (var_6)))))), (max((min((18446744073709551615ULL), (var_10))), (((/* implicit */unsigned long long int) -760989942425785985LL))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])) > (((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned long long int) arr_4 [0ULL] [i_1])) : (arr_2 [11U]))))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (unsigned char)209))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)191)))))) : ((-(2966924945U)))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_1] [i_2 + 1]) : (arr_4 [4LL] [i_2 + 3])));
            arr_10 [i_1] [9ULL] = ((/* implicit */unsigned int) arr_4 [i_2] [9U]);
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_8 [i_3])) ? (-4456132391685027206LL) : (((/* implicit */long long int) 524287U)))), (((long long int) (unsigned char)210))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524278U)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_1 [i_1] [i_3])) : (arr_7 [i_3]))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) 536870911U)) : (var_4)))))) ? (max((((/* implicit */unsigned long long int) -1LL)), (((((/* implicit */_Bool) var_6)) ? (10ULL) : (((/* implicit */unsigned long long int) var_12)))))) : (((((/* implicit */_Bool) var_8)) ? (18446744073709551610ULL) : (18446744073709551615ULL)))));
            var_23 = ((/* implicit */unsigned int) var_4);
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_13 [6U])))) ? (((/* implicit */unsigned long long int) arr_1 [i_4] [1ULL])) : (3811008049471419164ULL))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 8; i_6 += 1) 
                {
                    {
                        var_25 = ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) - (0LL))));
                        var_26 = ((((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)4])) ? ((~(1162847710383969379ULL))) : (((/* implicit */unsigned long long int) 750234178U)));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)43)))) ^ (2966924945U)));
                            arr_22 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_4] [i_6 + 3] [0ULL] [i_6] [i_6 + 1]));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1328042351U)) ? (((/* implicit */unsigned long long int) 503414788U)) : (13945052714326947548ULL)))) ? (((((/* implicit */_Bool) -8111497082237436686LL)) ? (3811008049471419183ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 9; i_8 += 4) 
                        {
                            arr_25 [i_1] [i_1] [i_4] [i_1] [i_1] [i_8] [i_8] |= ((/* implicit */unsigned long long int) (~(288753520U)));
                            arr_26 [1U] [i_1] [i_4] [i_4] [i_6] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6] [8ULL] [7ULL] [i_4] [i_4])) ? (0ULL) : (18446744073709551606ULL)));
                            arr_27 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_6 - 1] [i_4]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            arr_31 [i_1] [0U] [i_5] [i_6 + 2] [i_9] [i_4] [i_1] = 1624025663U;
                            arr_32 [i_4] [i_4] [i_5] [1ULL] [i_9] [i_9] = var_6;
                        }
                        var_30 = ((((/* implicit */_Bool) arr_12 [i_1] [i_5])) ? (((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_5] [i_6] [i_1] [i_4])) ? (-9082694135715366202LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((unsigned int) var_3))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_13 [i_4]) : (arr_13 [i_4])));
            arr_33 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)8))));
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 2030758296U)) ? (var_4) : (((/* implicit */unsigned long long int) -9082694135715366202LL))))))));
        }
        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 3) 
        {
            var_33 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)148)), (-9082694135715366202LL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 0ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) 26U)) : (var_4)))) ? (((/* implicit */unsigned long long int) min((arr_9 [8U] [i_10]), (((/* implicit */unsigned int) var_2))))) : (min((arr_14 [i_1] [(unsigned char)6]), (((/* implicit */unsigned long long int) var_12)))))));
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) max((11ULL), (((/* implicit */unsigned long long int) arr_16 [i_10] [i_10] [i_1]))))) ? ((-(arr_13 [2ULL]))) : (min((7917707233984473553ULL), (((/* implicit */unsigned long long int) var_12)))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))))), (min((133169152ULL), (((/* implicit */unsigned long long int) 1152921504606846975LL)))))))))));
            var_35 = ((/* implicit */long long int) min((var_35), (max((max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)0)))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) != (-8111497082237436686LL)))))))))));
            arr_36 [i_1] [i_1] [(unsigned char)10] = ((/* implicit */long long int) (~(((arr_35 [i_10] [i_10] [i_10 - 1]) ^ (arr_35 [i_10] [i_10] [i_10 - 1])))));
        }
        /* LoopNest 2 */
        for (unsigned char i_11 = 3; i_11 < 9; i_11 += 3) 
        {
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                {
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_12 [i_11 - 3] [i_11 - 1]), (arr_38 [i_11 + 2] [5LL] [i_12])))) ? (((((/* implicit */_Bool) 26U)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_1))) : (max((((/* implicit */unsigned long long int) -1152921504606846975LL)), (18446744073709551615ULL))))) : (arr_14 [i_1] [i_11])));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_13 = 4; i_13 < 9; i_13 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_14 = 4; i_14 < 9; i_14 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_1] [i_11] [i_13 - 2] [i_11 - 1] [i_14]))))), (((unsigned int) (unsigned char)153))));
                            arr_47 [i_11] [8ULL] [i_13] [7LL] = ((/* implicit */long long int) min((min((14635736024238132452ULL), (((/* implicit */unsigned long long int) (unsigned char)248)))), (((/* implicit */unsigned long long int) (-(var_7))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            arr_50 [i_1] [i_11] [i_12] [i_11] [2LL] = ((/* implicit */unsigned long long int) max((max(((!(((/* implicit */_Bool) 2295899129736026282LL)))), ((!(((/* implicit */_Bool) 0LL)))))), (((((((/* implicit */_Bool) arr_44 [(unsigned char)8] [i_11] [3U] [(unsigned char)6] [i_13] [i_13] [(unsigned char)7])) ? (-2295899129736026282LL) : (var_7))) > (((/* implicit */long long int) arr_12 [i_13] [i_15]))))));
                            arr_51 [i_1] [i_1] [i_11] [5U] [i_11] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_11 - 3] [i_13 - 3] [i_13 + 2])) ? (arr_9 [i_13 + 1] [9LL]) : (arr_9 [i_13 - 4] [i_13 - 4])))) ? (((unsigned int) arr_37 [i_11] [i_13 - 4])) : (max((3380524522U), (var_8)))));
                            var_38 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2295899129736026282LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1152921504606846975LL))))) ? (((((/* implicit */_Bool) 26659700955306167ULL)) ? (15ULL) : (((/* implicit */unsigned long long int) 3446039367U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */long long int) 2336719034U)) : (2295899129736026281LL)))))), ((-(8429451549900078313ULL)))));
                        }
                        for (unsigned int i_16 = 2; i_16 < 9; i_16 += 1) 
                        {
                            arr_54 [i_1] [i_1] [i_11] [i_13] [(unsigned char)4] = ((/* implicit */unsigned int) ((unsigned long long int) 13660631425228194891ULL));
                            var_39 = ((/* implicit */unsigned int) arr_29 [i_11]);
                        }
                        var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_39 [i_13 - 4] [i_11] [i_12] [i_13 - 4]) : (((/* implicit */long long int) 0U)))))));
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2295899129736026282LL)), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 8ULL))) : (((((/* implicit */_Bool) arr_29 [i_13])) ? (arr_29 [i_13]) : (((/* implicit */unsigned long long int) 33554431U))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_17 = 2; i_17 < 7; i_17 += 3) 
                    {
                        var_42 -= 1636813628U;
                        var_43 = ((/* implicit */long long int) var_8);
                    }
                    for (unsigned int i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_11), (((((/* implicit */_Bool) arr_23 [i_1] [6ULL] [i_11] [i_12] [i_11])) ? (-1LL) : (var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((4157530080U), (arr_38 [i_12] [i_11] [i_1])))))))) : ((~(289523264U))))))));
                        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) var_12))));
                    }
                    for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 12256560U))) ? (max((((/* implicit */unsigned int) arr_53 [i_1] [10ULL] [5LL] [6ULL] [i_12] [i_19] [10ULL])), (2711616899U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [6U] [6U] [i_19] [i_19] [i_19])))))))))));
                        arr_64 [i_1] [i_1] [i_1] [i_1] [i_11] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_8), (var_6))))))), (min((((2980959997U) - (4195945722U))), (max((1921985820U), (((/* implicit */unsigned int) (unsigned char)185))))))));
                        var_47 = ((((/* implicit */_Bool) ((unsigned char) arr_56 [i_1] [i_11 - 1] [8U] [i_19]))) ? (min((arr_15 [i_11 - 2] [i_19] [i_11] [i_11 - 2]), (arr_15 [i_11 - 2] [i_11] [i_11] [i_11]))) : (((arr_30 [i_1] [1ULL] [1ULL] [i_11 - 3] [1ULL] [4U]) * (((unsigned int) var_0)))));
                    }
                    arr_65 [i_11] [3U] [i_12] = ((/* implicit */unsigned int) 11755031306431377300ULL);
                }
            } 
        } 
    }
    for (unsigned char i_20 = 4; i_20 < 17; i_20 += 2) 
    {
        arr_70 [8U] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((1639953336U), (((/* implicit */unsigned int) var_0)))))))), (((((/* implicit */unsigned long long int) min((var_7), (arr_66 [i_20])))) * (((((/* implicit */_Bool) 12792949992714644059ULL)) ? (((/* implicit */unsigned long long int) 1095087509U)) : (arr_67 [i_20])))))));
        var_48 = ((/* implicit */unsigned char) ((unsigned int) max((2295899129736026281LL), (9223372036854775807LL))));
    }
}
