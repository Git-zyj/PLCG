/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92625
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
    var_20 = ((/* implicit */unsigned short) ((((min((var_1), (2251662374731776ULL))) >= (((/* implicit */unsigned long long int) ((unsigned int) 2305843009213685760ULL))))) ? ((~(10624645078243268977ULL))) : (((unsigned long long int) var_6))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_6))));
        var_22 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0]);
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((10591959836594329919ULL), (((((/* implicit */unsigned long long int) min((0U), (169247907U)))) ^ ((+(7854784237115221697ULL))))))))));
        arr_2 [i_0 - 1] = ((/* implicit */short) (+(((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_1 [i_0 + 2] [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_24 += ((/* implicit */unsigned short) 2468251105U);
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
            {
                arr_9 [i_1] [i_2] [i_2] = min((min((4263432842U), (var_16))), (((((/* implicit */_Bool) arr_5 [i_2])) ? (var_6) : (arr_5 [i_2]))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((((/* implicit */_Bool) 7854784237115221696ULL)) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (var_4))), (((/* implicit */unsigned long long int) (+(arr_0 [i_1])))))))));
                arr_10 [i_2] [i_1] &= ((((/* implicit */_Bool) min((4003246888U), (arr_4 [i_2])))) ? (min((var_4), (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_1]))))) : (((((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26561)))))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1])), (10591959836594329919ULL))) : (((arr_7 [i_1]) + (var_2))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 7; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        {
                            arr_21 [i_1] [i_2] [i_4] [i_2] [9U] = ((/* implicit */signed char) min((var_8), (((((/* implicit */_Bool) (~(arr_0 [i_6])))) ? (((((/* implicit */_Bool) 6412753857025483474ULL)) ? (2035248040831951820ULL) : (((/* implicit */unsigned long long int) arr_8 [i_2])))) : (((/* implicit */unsigned long long int) min((1826716190U), (1826716174U))))))));
                            arr_22 [i_1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (7575347992261096120ULL)))) ? (((((/* implicit */int) var_19)) - (((/* implicit */int) (short)-20371)))) : (((/* implicit */int) max((((/* implicit */short) var_3)), ((short)-19683))))))) && (((/* implicit */_Bool) (-(max((13725455510166305589ULL), (((/* implicit */unsigned long long int) 4125719388U)))))))));
                        }
                    } 
                } 
                arr_23 [i_1] [i_2] [i_2] [(signed char)5] = ((/* implicit */unsigned long long int) (+((+(4263432842U)))));
                var_26 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(var_17)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37429))) - (3803881485409808454ULL))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (9882706403184630318ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
            }
        }
        for (unsigned int i_7 = 1; i_7 < 7; i_7 += 1) 
        {
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (-(0ULL)))) ? (((unsigned long long int) ((14060261219381756278ULL) + (((/* implicit */unsigned long long int) 2468251105U))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (366974296U)))), (max((((/* implicit */unsigned long long int) var_6)), (10591959836594329919ULL))))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                arr_31 [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_14)))));
                arr_32 [i_8] = ((/* implicit */signed char) arr_4 [i_1]);
                var_28 = 18446744073709551615ULL;
            }
            for (short i_9 = 2; i_9 < 6; i_9 += 3) 
            {
                arr_36 [i_1] [6ULL] [i_1] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (short)32169))))), ((-(2468251115U)))))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)37429))))), (min((((/* implicit */unsigned long long int) 2325274921U)), (var_7)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) 4074511150U);
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_25 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_9 - 2] [i_1] [i_1]))) : (6588446501015534372ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3875424732U)) && (((/* implicit */_Bool) var_14)))))))))));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */unsigned long long int) 0U)) >= (((9376899731178139783ULL) + (((/* implicit */unsigned long long int) min((651007985U), (0U)))))))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) min((min((arr_34 [i_9 + 2] [i_9 - 2] [i_9] [(short)0]), (((/* implicit */unsigned long long int) arr_26 [i_9 + 3] [i_9 - 2] [i_9])))), (max((min((9853323752433785028ULL), (((/* implicit */unsigned long long int) 2201736147U)))), (((/* implicit */unsigned long long int) 3598308355U)))))))));
                        var_33 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (unsigned short)44619)))));
                        var_34 = ((/* implicit */unsigned short) ((unsigned int) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_30 [i_12] [(unsigned short)6] [i_7 + 1] [i_1]), (((/* implicit */unsigned short) var_13)))))))));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (4818537795456520867ULL)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        var_36 = ((/* implicit */signed char) 8301791772699487797ULL);
                        var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)12716))) + (0U)));
                        var_38 = ((/* implicit */unsigned short) ((262143U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_7 - 1] [i_7 - 1] [i_1])))));
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned short) (short)-28398)), (var_18))), (((/* implicit */unsigned short) (short)12716)))))) * (min((((((/* implicit */_Bool) 1848458199U)) ? (((/* implicit */unsigned long long int) 2440710984U)) : (arr_25 [8ULL] [i_13]))), (((/* implicit */unsigned long long int) (signed char)-90))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16208438187765007344ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-60))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-2841)), (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_10))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_47 [i_1] [i_7] [i_9 + 4] [i_10] [i_14]))))))))));
                        arr_51 [i_14] [i_10] [i_9] [i_7] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (short)127)) / (((/* implicit */int) (unsigned short)41389)))))), (var_1)));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        arr_54 [i_1] [i_1] [i_15] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((5503017009785535303ULL), (((/* implicit */unsigned long long int) (signed char)-70))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 10382143828753361371ULL)) ? (arr_25 [i_1] [i_1]) : (2859926141273987930ULL))))))), (((((((/* implicit */_Bool) 0U)) ? (0U) : (arr_15 [i_7] [i_9 - 1] [(signed char)4] [i_15]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3889586184U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_1]))))))));
                        var_41 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) (signed char)3)) ? (var_9) : (0ULL)))));
                        var_42 += min((var_8), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7]))) + (16208438187765007344ULL))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_43 [i_1] [i_1])) : (((/* implicit */int) arr_43 [i_1] [i_7 + 3])))))));
                        var_44 += ((/* implicit */signed char) ((3868238720U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) 291482601U))))))));
                        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_39 [i_7] [i_10] [(signed char)6])) : (((/* implicit */int) arr_39 [i_1] [i_9] [i_10]))));
                        var_46 = ((arr_12 [i_1] [i_10]) / (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11882))) : (3800900892028916477ULL))));
                        var_47 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59305)) / (((/* implicit */int) var_10))));
                    }
                    for (unsigned short i_17 = 1; i_17 < 9; i_17 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned int) 4713582525882347122ULL);
                        arr_60 [i_1] [3ULL] [3ULL] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_39 [i_9] [i_17 - 1] [(unsigned short)0]))) ? (max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22339))) >= (arr_47 [i_17 + 1] [i_10] [i_9] [i_7 + 1] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        arr_61 [i_1] [i_1] [i_1] [i_1] [(signed char)4] [i_1] = ((/* implicit */unsigned int) (signed char)-25);
                        var_49 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_42 [(short)5] [i_7] [i_7] [i_10] [4ULL] [i_17 - 1]))))), (2037918615935366851ULL)));
                    }
                }
                for (short i_18 = 3; i_18 < 8; i_18 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551609ULL)) ? (9607644271934041138ULL) : (var_1))) + (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_15 [i_1] [i_7] [i_9 + 1] [i_18])) : (7585467866818155005ULL)))))) && (((/* implicit */_Bool) (-(max((var_5), (((/* implicit */unsigned long long int) 3990729359U)))))))));
                        var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_18)), (min((((/* implicit */unsigned long long int) arr_29 [i_1])), (var_7))))))));
                        arr_68 [i_1] [i_1] = (((~((-(arr_64 [(signed char)9]))))) + (2285919260U));
                    }
                    arr_69 [i_7] [(signed char)4] = ((/* implicit */short) 677183405U);
                }
                /* vectorizable */
                for (short i_20 = 3; i_20 < 8; i_20 += 2) 
                {
                    arr_73 [8ULL] [i_9 + 4] [i_20] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (3614753563U)));
                    var_52 = ((/* implicit */signed char) 2647952261U);
                }
                var_53 = ((/* implicit */unsigned long long int) arr_11 [i_7] [i_9 - 2]);
            }
        }
        arr_74 [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4677869178399397170ULL)) ? (13650035199910712474ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11891)))))) ? (((18446744073709551609ULL) + (((/* implicit */unsigned long long int) 2987598664U)))) : (((((/* implicit */_Bool) 36028797018963967ULL)) ? (18446744073709551615ULL) : (5ULL))))) * ((-(((arr_44 [5ULL] [i_1] [i_1] [i_1] [i_1]) * (16306987260276417025ULL))))));
    }
}
