/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64266
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
    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0 - 3] [i_1 + 1]))));
                        var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)31))));
                    }
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) var_2);
                            arr_15 [(_Bool)1] [(_Bool)1] [i_1] [i_4] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))) | (arr_1 [i_0 - 2])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (arr_1 [i_0])))));
                        }
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) (_Bool)1);
                            var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned long long int) (short)9883)) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 1] [i_0 - 1] [i_0 + 1])))))) ? ((~(((/* implicit */int) arr_4 [i_4] [i_2] [i_1 + 1] [i_1])))) : (((/* implicit */int) min((arr_18 [i_0 - 3] [i_1 + 1] [i_4]), (arr_18 [i_0 - 2] [i_1 + 1] [i_1 + 1]))))));
                        }
                        arr_19 [(signed char)12] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [13ULL] [i_0])) ? ((~(((/* implicit */int) arr_11 [i_0] [i_2] [i_0])))) : (((/* implicit */int) min((var_8), (var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) : (((/* implicit */int) (short)-9871))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            arr_25 [i_0] [i_0] [i_1] [i_7] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_18 [i_7] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_2]))));
                            arr_26 [(signed char)2] [(signed char)2] [i_1] [(signed char)2] [(_Bool)1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-9871))))) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_5))))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))));
                        }
                        arr_27 [i_0] [i_1] [(signed char)6] [i_1 + 1] [i_1 + 1] [(_Bool)1] &= var_3;
                        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)32765))));
                    }
                    var_21 *= ((((/* implicit */_Bool) ((var_1) ? (((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)32765)))) : (((/* implicit */int) min(((_Bool)1), (arr_3 [(_Bool)1]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_0] [(signed char)6] [i_2]))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_8 [i_0] [i_0] [i_0]))))))));
                    arr_28 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-49))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_22 = ((signed char) arr_24 [i_0] [(signed char)2] [i_1 + 1] [i_1] [i_9] [(signed char)9]);
                        var_23 = ((/* implicit */unsigned long long int) ((arr_29 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0 - 3]) ? (((/* implicit */int) arr_29 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0 - 2])) : (((/* implicit */int) arr_29 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0 - 2]))));
                        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) arr_29 [i_0 - 3] [i_0 - 2] [i_0 + 1] [(signed char)11]))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        arr_35 [i_0] [i_0] [i_1] = ((/* implicit */short) ((var_11) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_33 [i_1] [i_1] [i_1] [i_1] [i_10])))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) ((((/* implicit */int) arr_34 [i_1])) <= (((/* implicit */int) var_10)))))));
                        arr_36 [(_Bool)1] [i_1] [i_1] [i_10] [i_0] [3ULL] = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [(_Bool)1] [i_1]);
                        var_26 ^= ((/* implicit */_Bool) 1327212987U);
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max(((-((+(((/* implicit */int) (short)1359)))))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (((signed char) var_9))))))))));
    var_28 = ((/* implicit */short) ((((/* implicit */int) (signed char)-19)) * (((/* implicit */int) var_6))));
}
