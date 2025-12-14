/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84002
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
    var_13 = ((/* implicit */_Bool) var_2);
    var_14 = ((/* implicit */unsigned long long int) (short)11);
    var_15 = ((/* implicit */unsigned char) (~(min(((((_Bool)0) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) var_10))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) ^ (((/* implicit */int) var_12))));
                        var_17 = ((/* implicit */long long int) max((var_17), ((~(((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_5))))) : (var_2)))))));
                        var_18 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)51775)) : (((/* implicit */int) var_1)))))))));
                        var_19 = ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3])) && (((/* implicit */_Bool) (unsigned char)6)))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_3])) ? (arr_4 [i_1] [i_2] [i_3]) : (arr_4 [i_0] [i_0] [i_2]))) : (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (arr_4 [i_1] [i_2] [i_3]))));
                        arr_11 [i_1] [i_3] = (signed char)-5;
                    }
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_14 [i_4] [i_2] [i_4] [i_0] [i_0] = min((((/* implicit */signed char) ((min((arr_7 [i_0] [i_1] [i_2] [i_4]), (((/* implicit */unsigned long long int) var_1)))) <= (var_11)))), (var_9));
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_1] [(unsigned char)17] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) <= (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1] [i_4])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_4]))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) (-((~((~(((/* implicit */int) (signed char)-105))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            arr_23 [i_0] [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_20 [i_5] [i_0] [i_6 + 2] [i_5] [i_0]))));
                            var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) arr_0 [i_6 + 2])) : (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) ((unsigned char) arr_15 [i_1] [i_2] [i_1] [i_0])))))));
                            arr_24 [i_0] [i_5] [i_0] = ((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1]);
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) / (16744661474267928643ULL)));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_5 - 1])) ? (((/* implicit */int) (unsigned short)6993)) : (((/* implicit */int) arr_10 [i_5 + 1]))));
                            arr_28 [i_5] [(short)7] [i_2] [i_5] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) < (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))));
                        }
                        var_23 += min((((short) var_0)), (((/* implicit */short) (unsigned char)22)));
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 2; i_8 < 21; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) arr_10 [i_5 + 1]);
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_10 [i_5])))), (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_2] [i_5] [i_8 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1] [i_5]))) : (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_8] [i_8] [i_8 - 2] [i_8 - 1] [5LL] [i_8])))));
                            var_26 = ((/* implicit */short) (-(min((arr_19 [i_5 - 1] [i_5 + 2] [i_5 + 3] [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 2]), (((/* implicit */unsigned long long int) var_3))))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_17 [i_8 - 2] [i_5 + 1] [i_2] [i_1] [(signed char)7] [i_0]))))), (((((/* implicit */_Bool) arr_10 [i_8 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8 - 2]))) : (14ULL)))))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) | (arr_29 [i_2] [i_5] [i_5] [i_5 + 1] [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_5 - 1] [i_8 - 1] [i_8 - 1] [i_5 - 1] [i_8] [i_8])) ? (((/* implicit */int) arr_25 [i_5 + 1] [i_8 - 1] [i_8] [i_8] [(signed char)12] [i_8])) : (((/* implicit */int) arr_25 [i_5 + 3] [i_8 + 3] [i_8] [i_8 - 2] [i_8 - 2] [i_8 - 2])))))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) arr_21 [i_5 + 1] [i_1] [i_2] [i_8 + 3]))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_5 + 1] [i_0] [i_2] [i_8 + 2])) >> (((((/* implicit */int) arr_21 [i_5 - 1] [i_1] [i_2] [i_8 + 1])) - (121))))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 ^= ((/* implicit */signed char) var_7);
                            var_30 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_35 [i_5] [i_5 + 3] [i_5] [i_5] [i_5 + 3]))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            arr_38 [i_1] [i_5] [(unsigned char)6] [i_1] |= ((/* implicit */short) (+(((((((/* implicit */_Bool) 12766668120321562487ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_11))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9)))))))));
                            arr_39 [i_5] = ((/* implicit */short) var_8);
                        }
                        for (short i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            arr_43 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_11] [i_5 + 1] [i_1] [i_1])) : (((/* implicit */int) var_9))))));
                            var_31 = ((/* implicit */unsigned char) arr_37 [i_5 - 1] [i_5] [i_5 + 2] [i_5 + 3]);
                            var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) var_0))), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_5] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_13 [i_5] [i_1] [i_2] [i_5] [i_11] [i_11])))));
                        }
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_12 [i_5 + 3] [i_2] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_42 [i_5 - 1]))))) ? (((/* implicit */int) max((var_12), (((/* implicit */unsigned char) arr_31 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5] [i_5] [i_5 + 1]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_5]))))) ? (((/* implicit */int) arr_8 [14LL] [i_0] [i_1] [i_1] [i_2] [14LL])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */_Bool) (unsigned char)117);
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                        arr_47 [i_1] [i_2] [20ULL] &= ((/* implicit */long long int) (~((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))))));
                        var_36 = ((/* implicit */signed char) (~(((/* implicit */int) arr_33 [i_0] [i_1] [i_2] [i_2] [i_12]))));
                    }
                    for (short i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_37 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_30 [i_13] [i_0]))))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_46 [i_0] [i_1] [i_0] [i_2] [i_13] [i_1])) : (((/* implicit */int) arr_32 [i_1] [i_2] [i_13])))), (((/* implicit */int) arr_0 [i_13]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_13] [i_13] [i_2] [i_1] [i_1] [i_0]))) : (arr_42 [i_0])))) : (arr_7 [i_0] [i_0] [i_2] [i_13])));
                        arr_50 [i_0] [(unsigned char)4] [(unsigned char)4] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_0] [i_0] [i_13] [i_13])) | (((/* implicit */int) (signed char)-120))))) < (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_13])) ? (arr_12 [i_0] [i_1] [i_13] [i_13] [i_13] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_2] [i_13] [i_13])))))));
                        arr_51 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_0] [i_1] [i_2] [i_13]))) < (var_2)))) : (((/* implicit */int) arr_48 [i_0] [i_1] [i_13] [i_13])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_13])) ? (((/* implicit */int) min((var_0), (((/* implicit */short) arr_46 [i_0] [i_1] [i_2] [i_0] [i_2] [(unsigned char)18]))))) : (((/* implicit */int) var_1))))));
                    }
                }
            } 
        } 
    } 
}
