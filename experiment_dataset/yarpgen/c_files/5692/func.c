/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5692
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (max((arr_4 [i_0 + 2] [i_0 + 3] [i_0 - 1]), (((/* implicit */long long int) (unsigned short)16597))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)8868)))))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-82))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) && (((/* implicit */_Bool) (unsigned char)24))))) / (((/* implicit */int) arr_2 [i_0 + 3]))))) : (((((((-4596877231860504918LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)8868)) - (8811))))) | (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65535)), (3797869986U))))))));
                        arr_15 [i_1] = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 - 1]))))), (((arr_6 [i_0 + 2] [i_0 + 2]) & (arr_6 [i_0 + 1] [i_0 - 1]))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        arr_18 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */signed char) min(((((+(((/* implicit */int) var_2)))) >> (((/* implicit */int) ((((/* implicit */int) (short)-8868)) > (((/* implicit */int) var_0))))))), (((/* implicit */int) (unsigned char)0))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            arr_23 [i_0] [i_0] [i_4] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_1))))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-106)) + (2147483647))) >> (0))))))));
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_16 [i_0 + 1] [i_1] [i_1] [i_1] [i_1])))) ? (min((((/* implicit */long long int) (signed char)81)), (-4205236412611176556LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 3] [i_0 + 1] [i_5 - 1])) ? (arr_6 [i_0 + 3] [i_0 + 3]) : (arr_6 [i_0 - 1] [i_0])))))))));
                            arr_24 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_1] = ((/* implicit */int) ((max((((9983388685924726263ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */unsigned long long int) ((short) arr_12 [i_1]))))) >> (((((/* implicit */_Bool) arr_5 [i_5] [i_1] [i_0 + 2])) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_5] [i_5 - 1] [i_5 - 1]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
                            arr_27 [i_0] [i_1] [i_1] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0 + 3] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-100))))) : (((((/* implicit */_Bool) 3154194764207878129ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_6 - 1]))) : (592746595U)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_31 [i_0] [i_1] [i_2] [i_4] [i_0] [i_2] [i_7] = ((/* implicit */unsigned short) ((max((max((895088125U), (((/* implicit */unsigned int) arr_22 [i_1] [i_4])))), (((/* implicit */unsigned int) ((int) arr_1 [i_7]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                            arr_32 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((long long int) ((arr_4 [i_4] [i_1] [i_0]) / (var_6)))) < (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7] [i_2] [i_2])))));
                            var_14 -= ((/* implicit */_Bool) max((max((((/* implicit */short) (signed char)0)), (arr_3 [i_0 + 2] [i_0 + 3]))), (arr_3 [i_0 + 2] [i_0 + 1])));
                            arr_33 [i_0] [i_1] [i_1] [i_4] [i_4] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_7]))));
                            arr_34 [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((0U), (arr_21 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_7])))) ? (max((182988414U), (((/* implicit */unsigned int) (unsigned char)240)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 + 3] [i_1] [i_0] [i_0] [i_0 + 3] [i_0 + 3]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) | ((~(((/* implicit */int) arr_2 [i_7])))))))));
                        }
                        arr_35 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_22 [i_0 + 3] [i_0 - 1])) % (((/* implicit */int) var_10)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) ((unsigned short) arr_40 [i_0 - 1] [i_2] [i_8 + 1] [i_8 + 1] [i_9] [i_1] [i_9]));
                            arr_42 [i_1] [i_1] = ((/* implicit */unsigned int) ((var_8) | (((/* implicit */int) (short)32767))));
                            arr_43 [i_0 + 2] [i_1] [i_0 + 2] [i_8] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5542611154417498250LL)) && (((/* implicit */_Bool) var_5))));
                            var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_8 + 2] [i_8 + 2]))));
                        }
                        for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            arr_46 [i_1] [i_2] = ((short) (-2147483647 - 1));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_9))));
                        }
                        var_18 = ((/* implicit */long long int) 895088125U);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        var_19 -= ((/* implicit */long long int) (+((+(((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_11])) & (((/* implicit */int) var_1))))))));
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 15150883006384544484ULL)))))) & (var_4)));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~((~(((((/* implicit */_Bool) (unsigned short)4787)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (35184338534400ULL))))))))));
                    }
                }
                /* vectorizable */
                for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_0] [i_1] [i_0] [i_0 + 1] [i_0] [i_0 + 1])) % (((/* implicit */int) (unsigned short)63743))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1])) >> (((((/* implicit */int) (signed char)-81)) + (111))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_58 [i_0] [i_1] [i_14] = ((/* implicit */unsigned long long int) (_Bool)0);
                            /* LoopSeq 2 */
                            for (unsigned long long int i_15 = 4; i_15 < 17; i_15 += 1) 
                            {
                                arr_62 [i_1] [i_1] [i_15] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (unsigned short)0)), ((~(arr_53 [i_14] [i_14] [i_13]))))) > (arr_0 [i_15])));
                                arr_63 [i_1] [i_14] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)169))))) ? (max((arr_0 [i_0 + 3]), (((/* implicit */unsigned long long int) (signed char)127)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-7673)))))));
                                var_24 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_15] [i_14] [i_15])) ^ (((/* implicit */int) arr_2 [i_1]))))), (min((((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_1] [i_1] [i_13] [i_13] [i_0])), (3221067555137016871ULL))))) < (((/* implicit */unsigned long long int) var_6))));
                                arr_64 [i_0] [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_14] [i_1] = ((/* implicit */short) min((max((((/* implicit */int) max((arr_26 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)0))))), (((int) arr_22 [i_14] [i_1])))), (((((/* implicit */_Bool) min((var_2), ((unsigned short)17049)))) ? (((-429713565) / (((/* implicit */int) (signed char)81)))) : (((/* implicit */int) (unsigned short)42512))))));
                            }
                            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
                            {
                                var_25 += ((/* implicit */_Bool) ((-429713565) & (((/* implicit */int) (unsigned short)0))));
                                var_26 = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((unsigned short) var_3))), (max((((/* implicit */long long int) arr_65 [i_14] [i_14])), (arr_4 [i_0] [i_0] [i_14]))))), (((/* implicit */long long int) ((unsigned int) arr_54 [i_1] [i_1] [i_1])))));
                                arr_67 [i_13] [i_1] [i_13] [i_1] = (~((+(arr_40 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_1] [i_0]))));
                            }
                            arr_68 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) arr_5 [i_0 + 2] [i_0 + 2] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_4);
}
