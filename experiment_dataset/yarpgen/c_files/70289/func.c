/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70289
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
    var_14 = ((/* implicit */short) ((((/* implicit */int) min((var_10), (((/* implicit */unsigned char) ((var_0) >= (((/* implicit */unsigned long long int) -2051028701)))))))) < ((~(((/* implicit */int) (signed char)-122))))));
    var_15 = ((/* implicit */unsigned char) var_3);
    var_16 = ((/* implicit */unsigned int) max((((int) ((var_1) * (((/* implicit */unsigned long long int) var_11))))), (min((max((-768293593), (768293592))), (var_8)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            var_17 &= ((/* implicit */long long int) arr_3 [i_4]);
                            arr_16 [i_4] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                            var_18 = ((/* implicit */_Bool) (~(-768293593)));
                        }
                        for (int i_5 = 1; i_5 < 18; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) (unsigned short)65535);
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(arr_11 [i_5 + 1] [i_5] [i_5] [i_5 + 1]))))));
                            arr_20 [i_3] [i_1] [i_1] [0ULL] [i_2] [11LL] [i_5 - 1] = ((/* implicit */unsigned long long int) 120259084288LL);
                            arr_21 [i_0] [i_5] [12U] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (var_8)));
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                        }
                        var_22 += ((/* implicit */_Bool) var_2);
                    }
                    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        arr_26 [i_0] [i_2] [i_1 + 1] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_6] [i_6 - 1]), (arr_9 [i_1] [i_6 + 1])))) && (((/* implicit */_Bool) (-(arr_0 [i_1 - 3]))))));
                        var_23 -= ((/* implicit */_Bool) min((8829478938094165567LL), (((/* implicit */long long int) 768293592))));
                        var_24 = ((/* implicit */int) var_5);
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (~(arr_17 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_1] [i_1 + 1] [i_1] [i_1] [18U] [i_1])) || (((/* implicit */_Bool) var_6))));
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_8)) | (var_3))) >= (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_6]))));
                            arr_31 [i_2] [i_1] [i_6] [i_1] [i_6] [i_6] [11U] = ((/* implicit */short) arr_6 [i_6 + 1]);
                        }
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            arr_36 [8] [i_8] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) min((768293590), (((/* implicit */int) (unsigned short)8160))));
                            var_28 += ((/* implicit */signed char) (unsigned char)68);
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) var_1))));
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_1 - 1] [i_8] [i_0] [i_2] [2])) ? (((/* implicit */long long int) var_12)) : (arr_14 [i_1 - 1] [i_1] [i_1])));
                            arr_41 [i_10] = arr_34 [i_0] [i_1] [i_1] [i_8] [(unsigned short)6] [i_8] [(unsigned short)6];
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_1);
                            var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) -768293603)) && (((/* implicit */_Bool) (unsigned short)24622))));
                        }
                        arr_43 [i_8] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_25 [i_0] [i_0])) | (max((arr_39 [i_1 - 3] [0LL] [i_1] [i_1] [i_1] [i_0]), (arr_39 [i_1 + 1] [i_1] [i_0] [17U] [i_1] [i_0])))));
                    }
                    arr_44 [i_0] [i_2] = ((/* implicit */unsigned char) (((~(arr_30 [i_1] [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 1]))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_2] [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 1]))))))));
                    var_32 -= ((/* implicit */_Bool) max((arr_5 [i_0] [5ULL]), (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_1] [i_1] [i_1 - 1] [(unsigned short)11] [9U] [i_1])) & (((/* implicit */int) arr_23 [i_0] [i_1 + 1] [i_1 - 1] [i_1] [i_2] [i_2])))))));
                    var_33 -= var_5;
                    var_34 &= ((((/* implicit */_Bool) ((768293590) | (((/* implicit */int) (unsigned short)57352))))) ? (((/* implicit */unsigned int) arr_1 [6LL] [i_2])) : (arr_3 [i_1]));
                }
            } 
        } 
    } 
}
