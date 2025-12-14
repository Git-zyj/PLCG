/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61858
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
    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) var_0)))))), (((((/* implicit */_Bool) (~(479152738)))) ? (((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)0), ((_Bool)0)))))))));
    var_20 = ((/* implicit */signed char) (-(min((((/* implicit */int) var_14)), (var_13)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned short) (_Bool)0);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-28386))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1]))))) ? (-1432139202) : ((~(((/* implicit */int) (short)1551))))))) && (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-96)), (arr_6 [i_1]))))));
        arr_7 [i_1] = ((((/* implicit */int) (short)-27963)) * (((/* implicit */int) (_Bool)1)));
    }
    var_22 = ((/* implicit */short) min((min((min((((/* implicit */int) var_14)), (var_15))), (2147483647))), (1729015385)));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        arr_22 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)(-32767 - 1))) - (-951913302))), (((/* implicit */int) ((((/* implicit */int) (signed char)-39)) < (((/* implicit */int) arr_9 [i_2])))))))) && (((/* implicit */_Bool) ((arr_19 [i_2] [i_3 - 2] [i_3 + 2] [i_5]) * (((/* implicit */unsigned int) var_0)))))));
                        var_23 = ((/* implicit */int) arr_11 [(signed char)14]);
                    }
                    for (int i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        arr_25 [i_2] [i_3] = ((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)-108))));
                        var_24 |= 85606743;
                    }
                    for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_33 [i_2] [i_2] [i_7] [i_3] [i_7] [i_3 + 2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [(_Bool)1] [i_3] [i_3 + 1] [(short)15] [i_3] [i_3])) ? (((/* implicit */long long int) arr_30 [i_8] [i_3 + 1] [i_3 + 1] [(short)3] [i_3] [(short)15])) : (0LL)))) ? ((+(((/* implicit */int) (signed char)-113)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))));
                            arr_34 [i_2] [i_3] [i_3] [i_3] [i_8] = min((((/* implicit */int) ((((/* implicit */int) (signed char)-108)) == (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (_Bool)1))))) ? (((int) (unsigned short)57917)) : (1138884456))));
                            var_25 = min(((~(((((/* implicit */_Bool) -2147483632)) ? (1267859189709038189LL) : (((/* implicit */long long int) (-2147483647 - 1))))))), (((/* implicit */long long int) (signed char)107)));
                            var_26 *= ((/* implicit */_Bool) ((short) (~((~(arr_29 [i_7] [i_3] [i_7] [i_3]))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_39 [i_3] = ((/* implicit */signed char) ((arr_13 [i_3 + 1] [i_3]) ? (-5916079674454470644LL) : (((/* implicit */long long int) var_15))));
                            arr_40 [i_3] [i_7] [i_3] = ((/* implicit */_Bool) (unsigned short)47321);
                            arr_41 [i_2] [(_Bool)1] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)1002)) / (((/* implicit */int) (short)-1017)))) & (((/* implicit */int) (short)-1003))));
                        }
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_27 [i_2] [(_Bool)1] [i_4] [i_7] [i_10]))));
                            var_28 ^= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_32 [i_2] [i_3] [i_4] [i_3] [12])) : (((/* implicit */int) (signed char)-85))))))))));
                            arr_46 [i_4] [i_7] |= (~((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_3 + 2] [i_7] [i_3 + 2]))) >= (arr_27 [i_2] [(_Bool)1] [i_10] [i_7] [(short)12])))))));
                            arr_47 [i_7] [i_7] [i_4] [i_3] [i_7] |= ((/* implicit */unsigned int) var_12);
                        }
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                        {
                            arr_51 [i_2] [i_3] [i_4] [i_3] [i_11] = (((~(((/* implicit */int) (short)-1)))) << (((((/* implicit */_Bool) arr_37 [i_2] [i_3] [i_3] [i_3] [i_3 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16760832U))))) : (((((/* implicit */_Bool) 77352606)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_24 [i_2] [i_3 + 4] [(_Bool)1] [i_3] [i_7] [i_11])))))));
                            var_29 = ((/* implicit */_Bool) (~(((min(((_Bool)0), (var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36928))))) : ((+(1)))))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (_Bool)1))));
                        }
                        arr_52 [i_3] [i_4] [i_3] = ((/* implicit */signed char) arr_5 [19U] [i_3]);
                        arr_53 [i_2] [16LL] [i_3] [i_2] = ((/* implicit */_Bool) min((min((arr_19 [(_Bool)1] [i_3 - 3] [i_3 + 2] [i_3 + 1]), (((/* implicit */unsigned int) min((-1), (((/* implicit */int) (short)1002))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_31 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_37 [i_2] [21] [i_3] [i_12] [21])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_2] [i_3] [i_3 + 3] [i_3] [i_3 - 2]))) : (var_17)));
                        arr_58 [i_2] [i_3] [i_3] [i_2] = ((arr_45 [i_3 - 1] [i_3] [i_3 + 4] [i_3 + 2] [i_3 + 3] [i_12] [(signed char)20]) ? (((/* implicit */int) arr_45 [i_3 - 1] [i_3] [i_3 + 3] [i_3] [i_3 + 1] [i_4] [4LL])) : (((/* implicit */int) (short)-1)));
                        var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((int) 9223372036854775807LL)) : (((/* implicit */int) var_4))));
                        var_33 = (!((!(((/* implicit */_Bool) (short)-23688)))));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 19; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)9)))))))) < (((/* implicit */int) min((arr_10 [i_3 + 4] [i_13 - 1]), (arr_10 [i_3 + 4] [i_13 - 1]))))));
                                arr_64 [i_2] [i_4] &= ((/* implicit */int) min(((signed char)-107), (((/* implicit */signed char) ((((/* implicit */int) (short)-23386)) >= (2021881754))))));
                            }
                        } 
                    } 
                    var_35 = 4294967295U;
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            {
                                arr_70 [i_2] [i_3] [i_4] [i_3] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) -1008741286)) && (((/* implicit */_Bool) (short)4)))))));
                                arr_71 [i_16] [i_3] [i_4] [i_15] [i_4] [i_3] [i_2] = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)29693)) ? (arr_37 [i_16] [i_16] [i_3] [i_16] [i_16]) : (var_6))), (((/* implicit */unsigned int) ((384) | (-1073954158))))))));
                                var_36 = ((/* implicit */signed char) 2466109233U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
