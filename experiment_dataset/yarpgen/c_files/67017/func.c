/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67017
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_15)), (var_2))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned char)120)))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned int) max(((unsigned char)219), (arr_1 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)60))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            arr_10 [i_1] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 2] [i_0])) || (((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_0]))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    var_18 = ((/* implicit */int) max((var_9), ((((!(((/* implicit */_Bool) (signed char)78)))) ? (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) (signed char)-52))))) : (arr_14 [i_2 + 1] [i_3 - 1])))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_19 = (-(min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-60))))))));
                        arr_18 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)10310))))), (1978022970U)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2316944346U)), (var_9)))) ? (((/* implicit */long long int) ((2316944326U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((-(var_1))))) : (((/* implicit */long long int) min((1978022972U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [(unsigned char)8])) * (((/* implicit */int) var_15))))))))));
                        var_20 = ((/* implicit */unsigned long long int) min(((unsigned char)16), (((/* implicit */unsigned char) var_15))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        arr_22 [i_0] [3LL] [8ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_1 - 2] [(_Bool)1] [i_1 - 2]);
                        arr_23 [i_0] [i_1] [i_2] [i_3 + 1] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2316944323U)), (8537231074113875211LL)))) : (min((((/* implicit */unsigned long long int) 1484324278990769667LL)), (11717193937180869686ULL)))))));
                        var_21 = ((/* implicit */short) max((max((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_2 [i_3 + 2]))), (arr_2 [i_3 - 1])));
                    }
                }
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        var_22 = arr_17 [i_7] [i_6] [i_2 - 1] [(signed char)14] [(signed char)14];
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 9991741381122378634ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15))))))) ? (max((((unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))))) : (min((((/* implicit */unsigned long long int) arr_17 [i_2 + 1] [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_1 - 2])), (((unsigned long long int) 6729550136528681930ULL))))));
                        arr_28 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1 - 1]))) >= (6729550136528681930ULL)))), (((unsigned int) arr_20 [i_1] [i_1 - 1]))));
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((var_1) << (((arr_15 [i_0] [i_2 + 1] [i_1 - 2] [i_6] [5ULL]) - (2958506461U))))));
                    }
                    var_24 = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) var_0)) ? (arr_19 [i_0] [i_1] [i_0] [i_0] [6ULL] [i_6] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) arr_13 [(short)6] [i_1 - 2] [i_2] [i_2]))))))))));
                    arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_11);
                }
                for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(var_2))), (max((var_2), (((/* implicit */unsigned long long int) arr_13 [i_8] [i_2] [i_1] [i_0]))))))) ? (((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_14)))))))) : (min((-5117813484287824936LL), (((/* implicit */long long int) (_Bool)1))))));
                    var_26 = (unsigned char)90;
                }
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned char)40))));
            }
            arr_33 [(unsigned short)6] = ((/* implicit */unsigned int) max((min((arr_26 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1]), (((/* implicit */long long int) var_6)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1 - 2] [(signed char)14] [i_1 - 2] [(_Bool)1]))) : (arr_26 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1 - 1])))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_9 = 2; i_9 < 9; i_9 += 3) 
    {
        for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        arr_46 [i_9 + 1] [i_10] [i_9 + 1] [i_11] [i_10] [i_11] = ((/* implicit */unsigned int) ((((unsigned long long int) 11717193937180869679ULL)) > (((/* implicit */unsigned long long int) var_10))));
                        arr_47 [i_9] [4LL] [i_11] [(short)7] [i_10] [i_11] = min((((/* implicit */long long int) (-(arr_40 [i_9 - 1] [i_9 - 1])))), ((((~(arr_35 [i_9 + 3]))) & (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))));
                        var_28 = ((/* implicit */unsigned char) var_14);
                    }
                    /* vectorizable */
                    for (signed char i_13 = 3; i_13 < 11; i_13 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) 6729550136528681928ULL);
                        arr_50 [i_11] [(short)7] [i_11] [8U] = ((/* implicit */signed char) ((_Bool) ((_Bool) (unsigned char)251)));
                    }
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        var_30 = ((/* implicit */int) min((((arr_19 [i_9 - 2] [(unsigned char)11] [i_9 - 1] [i_9] [i_9 + 3] [i_9 + 3] [i_10]) / (((/* implicit */unsigned long long int) var_1)))), (((((/* implicit */_Bool) (unsigned char)104)) ? (arr_19 [i_9 + 3] [5U] [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 3]) : (11717193937180869678ULL)))));
                        var_31 = ((/* implicit */unsigned int) arr_41 [(_Bool)1]);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        arr_57 [(short)7] [7LL] [i_10] [i_11] [i_15] = ((/* implicit */_Bool) 1460278869U);
                        var_32 = ((/* implicit */_Bool) max((arr_31 [i_15 - 1] [i_15 - 1] [i_9 - 1] [i_9 + 1]), (min((((/* implicit */unsigned long long int) var_5)), (var_2)))));
                        var_33 = min((14660933408163009696ULL), (9992429105871696722ULL));
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (min((arr_2 [(unsigned char)8]), (((((/* implicit */_Bool) (short)-4096)) ? (arr_8 [i_15] [i_10] [i_10]) : (arr_34 [i_9]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_56 [i_9] [i_10] [i_10] [i_15 - 1] [i_10]) : (18446744073701163008ULL))))))))));
                    }
                    for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        var_35 = ((/* implicit */short) ((signed char) ((short) 9223372036854775807LL)));
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                        {
                            var_36 = ((/* implicit */short) ((signed char) min(((_Bool)1), (arr_64 [i_9 + 2] [i_9 + 2] [i_9 + 3] [i_9 + 1] [i_9 + 3] [i_11]))));
                            arr_65 [i_9] [8U] [8U] [i_16] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((arr_40 [i_9 + 3] [i_9 + 3]), (arr_40 [i_9 - 1] [i_9 - 1])))) - (min((((((/* implicit */_Bool) arr_61 [i_9 - 2])) ? (arr_35 [1U]) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_11]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)127)) || (((/* implicit */_Bool) var_0)))))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) /* same iter space */
                        {
                            arr_69 [i_18] [i_10] [i_18] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)162))) != (9223372036854775807LL))))));
                            var_37 = ((/* implicit */short) arr_6 [i_9] [i_9]);
                        }
                        for (long long int i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            var_38 = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13)))) / (arr_16 [i_9 + 2] [i_9] [i_9]))), (((/* implicit */unsigned int) arr_59 [i_19] [i_9 - 1] [i_19] [i_11] [3U]))));
                            var_39 = ((/* implicit */unsigned short) max((min((max((((/* implicit */long long int) var_16)), (var_3))), (((/* implicit */long long int) ((unsigned int) 9223372036854775788LL))))), (((/* implicit */long long int) ((unsigned short) var_4)))));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) arr_35 [i_9 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (((unsigned long long int) var_15))))));
                            arr_73 [i_9] [(short)4] [(short)4] [i_9 + 3] [i_9 + 3] = ((/* implicit */unsigned char) var_14);
                        }
                        var_41 = ((/* implicit */signed char) (((-(((/* implicit */int) (short)-236)))) > (((/* implicit */int) var_6))));
                        var_42 = min((((((/* implicit */_Bool) (signed char)-95)) ? (arr_42 [i_10] [i_10] [i_9 + 3] [i_9 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_9 + 2] [i_16])) ? (arr_42 [i_9] [i_9] [i_9 - 2] [i_16]) : (arr_42 [9LL] [i_10] [i_9 - 1] [i_9 - 1]))));
                    }
                    var_43 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) arr_43 [i_9 + 2])) : (((/* implicit */int) ((unsigned short) 13725540638257895972ULL)))))), (((((/* implicit */unsigned long long int) var_13)) ^ (((arr_56 [i_9] [(unsigned char)8] [i_9] [5] [i_9 + 1]) | (((/* implicit */unsigned long long int) -8324534614751961886LL))))))));
                }
            } 
        } 
    } 
}
