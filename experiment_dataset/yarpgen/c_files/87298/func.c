/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87298
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) var_2);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_16 [i_0] = ((/* implicit */long long int) (~(arr_11 [i_0] [i_1])));
                            arr_17 [i_1] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0]))))), (((arr_6 [i_0] [i_0] [i_0]) << (((arr_6 [i_0] [i_0] [i_0]) - (176553049)))))))) : (((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0]))))), (((((arr_6 [i_0] [i_0] [i_0]) + (2147483647))) << (((((arr_6 [i_0] [i_0] [i_0]) - (176553049))) + (2089444934))))))));
                            arr_18 [i_0] [i_0] [i_2] [16U] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                arr_34 [i_8] [i_8] [7ULL] [i_4] [6ULL] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_27 [i_5] [9ULL] [9ULL]) << (((((/* implicit */int) arr_26 [i_8] [(unsigned short)5] [i_6] [i_5])) - (9))))))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_4] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_0 [i_8] [i_5]))))))));
                                var_11 &= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_4 - 1] [i_7 - 2] [i_4 - 1] [i_7 + 1] [(_Bool)1] [i_7]) ? (((/* implicit */int) arr_13 [i_4 - 1] [i_7 - 2] [(signed char)2] [i_7 + 1] [i_8] [i_8])) : (((/* implicit */int) arr_13 [i_4 - 1] [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7] [(unsigned short)8]))))) ? (max((var_10), (((/* implicit */unsigned long long int) arr_13 [i_4 - 1] [i_7 - 2] [i_7] [i_7 + 1] [i_4 - 1] [i_7])))) : (((/* implicit */unsigned long long int) ((arr_13 [i_4 - 1] [i_7 - 2] [i_7 - 2] [i_7 + 1] [13U] [i_7 - 2]) ? (((/* implicit */int) arr_13 [i_4 - 1] [i_7 - 2] [i_7] [i_7 + 1] [15LL] [i_8])) : (((/* implicit */int) arr_13 [i_4 - 1] [i_7 - 2] [i_7] [i_7 + 1] [i_7] [i_8])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        var_12 *= ((/* implicit */signed char) 458752);
                        arr_37 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_4 + 1] [i_4] [i_9 + 2] [i_6]))))) != (var_9)));
                        arr_38 [i_4] [i_5] [i_4] [i_4] [i_4] [i_5] = (-(((/* implicit */int) arr_23 [8LL] [(unsigned char)12])));
                        arr_39 [i_4] [i_5] [i_6] [i_5] [(_Bool)1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((arr_32 [i_4] [i_4] [i_9] [i_9 + 2] [i_4]) < (((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_5] [(short)4] [i_6]))))), (arr_4 [i_4 - 2] [i_6])))) ? (((((/* implicit */_Bool) arr_21 [i_4] [i_9 + 4])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [(_Bool)1]))) : (arr_31 [(short)5] [i_9 - 1] [10ULL] [i_6]))))))));
                    }
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_4] [i_4] [i_4] [i_6]))))) : (((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_26 [i_4 - 3] [i_5] [i_6] [i_6])))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_14 = ((/* implicit */_Bool) ((arr_23 [i_4 + 1] [i_4 - 3]) ? (((/* implicit */int) arr_2 [i_4])) : (var_7)));
                            var_15 = var_5;
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-((~(var_9))))))));
                            arr_44 [i_11] [i_4] [i_10] [i_6] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -1731965673)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_4 - 3] [i_4 - 1] [i_4 - 2] [1ULL]))) : (arr_11 [i_4] [i_4 + 1])));
                        }
                        for (int i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            arr_47 [12] [i_4] [i_6] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_4] [i_4])) - (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_4] [i_4] [23] [i_12]))))) : ((-(1311249965U))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(arr_14 [i_4 + 1]))))));
                            arr_48 [i_6] [i_6] [i_6] [i_4] [i_12] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [(short)8] [i_6] [i_4]))) : (2983717356U)))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_3 [i_4] [i_12])) : (((/* implicit */int) var_6))))));
                            arr_49 [(unsigned short)4] [i_4] [(unsigned short)4] [i_5] [i_5] [i_4] [(unsigned char)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_4 - 2] [i_4 - 2] [i_4 - 3] [i_4 + 1])) ? (arr_42 [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4 - 2] [5U] [i_4 - 3] [i_4 + 1])))));
                        }
                        for (unsigned int i_13 = 2; i_13 < 11; i_13 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_40 [i_4 + 1] [i_4 + 1] [i_5] [i_4 + 1]))));
                            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_13 + 1] [i_10] [i_10] [i_4])) ? (((/* implicit */unsigned long long int) arr_31 [i_5] [i_6] [i_10] [i_13 - 1])) : (arr_33 [i_10])))) ? (((/* implicit */unsigned long long int) arr_30 [i_13 + 2] [4LL] [i_5] [i_4 + 1])) : (((var_4) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_5] [i_10] [(unsigned short)7])))))));
                        }
                        for (unsigned int i_14 = 2; i_14 < 11; i_14 += 1) /* same iter space */
                        {
                            arr_55 [i_4] [i_4 - 1] [i_4] [i_5] [i_6] [(signed char)5] [(short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_6 [i_14 + 2] [i_14 - 1] [i_4])) % (arr_15 [i_4] [i_4] [i_4 - 3] [i_14 - 2] [i_14 + 2])));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
                            arr_56 [i_4] [i_10] [(unsigned char)1] [i_6] [i_5] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_9 [i_4] [i_5] [i_14 - 1] [i_4])))) ? (arr_24 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4 - 2] [i_10])))));
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || ((!(((/* implicit */_Bool) var_6))))));
                        }
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_4])) ? (((((/* implicit */_Bool) arr_46 [(signed char)6] [(_Bool)1] [i_10] [i_10] [(_Bool)1])) ? (var_7) : (((/* implicit */int) (unsigned char)6)))) : (((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4]))))))));
                    }
                    for (long long int i_15 = 1; i_15 < 12; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_16 = 2; i_16 < 12; i_16 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (short)2244))));
                            arr_62 [i_6] [(signed char)7] [i_4] = ((((/* implicit */long long int) (~(805306368)))) < (((((/* implicit */long long int) ((/* implicit */int) arr_60 [4] [4ULL] [4] [i_4]))) % (var_0))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_24 [i_4]) : (arr_24 [i_4])));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_17 = 3; i_17 < 10; i_17 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)12)) : (arr_61 [i_4] [i_5])))) * (((((/* implicit */_Bool) var_9)) ? (arr_9 [i_17] [i_15] [7ULL] [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_24 [i_4]))))));
                            arr_65 [i_4] [i_6] [i_4] = ((/* implicit */long long int) var_2);
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_26 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1]))));
                            var_27 = ((/* implicit */short) arr_52 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 3] [i_4 - 2]);
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_58 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_17 - 2] [i_17 - 2] [i_4] [i_15] [i_15 + 1] [(unsigned short)9] [i_15])))));
                        }
                        var_29 = ((/* implicit */_Bool) min((var_29), (var_5)));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_15 [(signed char)5] [(signed char)5] [i_15] [i_15] [(signed char)5])))) ? (arr_61 [i_6] [i_15 - 1]) : ((-(arr_6 [i_6] [i_15 - 1] [i_6]))))))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)30042)) : (((/* implicit */int) (short)30042))))), (((((/* implicit */_Bool) arr_46 [i_4] [i_5] [i_4] [i_4] [(_Bool)1])) ? (arr_31 [(short)8] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_6]))))))) / (((((arr_61 [i_5] [i_5]) > (((/* implicit */int) var_4)))) ? (min((var_0), (((/* implicit */long long int) arr_51 [i_4] [i_4] [i_5] [i_4] [i_5] [i_6] [i_5])))) : (arr_46 [i_4 + 1] [i_4] [11] [i_4] [i_4 + 1]))))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */int) var_8);
}
