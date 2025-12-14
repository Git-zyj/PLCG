/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77312
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) (-(max((6989281131618773777LL), (((/* implicit */long long int) 2038647311))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_9 [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((unsigned int) (_Bool)0));
                        var_16 = ((/* implicit */int) (-(arr_6 [i_0] [i_1 - 1] [i_2 - 1] [(short)0] [i_2])));
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_13 [i_1] = ((/* implicit */unsigned char) ((int) arr_2 [i_0] [i_2] [i_2]));
                        arr_14 [i_4] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_0] = ((((/* implicit */_Bool) arr_3 [i_1] [i_4])) || (((/* implicit */_Bool) arr_1 [i_0] [i_2 + 1])));
                        arr_15 [i_0] [i_1] [i_2 + 1] [(unsigned short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_5 [i_1] [0LL] [i_1] [i_4]))) ? (((unsigned long long int) arr_11 [10] [10] [10] [10] [i_4])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1LL))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (long long int i_6 = 3; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_17 |= ((/* implicit */signed char) (+(arr_8 [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_6 - 1])));
                                arr_21 [i_1] [15ULL] [i_2] [i_5] [i_2] = ((/* implicit */long long int) (+((+(0ULL)))));
                                var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1]))) < (2368312827U));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_5 [i_5] [i_5] [i_2] [i_5]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_23 [i_1]))));
                                arr_26 [i_8] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_20 [18LL] [18LL] [i_2] [i_2] [i_1]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)0)))));
                    arr_27 [i_1] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [11U] [i_0] [i_0] [i_2 + 1]))));
                }
                for (int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(min((max((((/* implicit */unsigned long long int) 2441017971858291889LL)), (arr_10 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [(_Bool)1] [i_9]))))))))))));
                    arr_31 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((arr_28 [i_0] [i_1 + 1] [i_1 + 1] [i_9]) ? (((/* implicit */int) arr_28 [i_1] [i_1 - 1] [i_1] [i_9])) : (((/* implicit */int) arr_28 [i_1] [i_1 + 1] [i_9] [i_9])))) < (((((/* implicit */int) arr_28 [i_0] [i_1 - 1] [i_1 - 1] [i_1])) | (((/* implicit */int) arr_28 [(_Bool)1] [i_1 - 1] [i_9] [i_9]))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((max((2368312833U), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18926)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) var_6))))))));
    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_4) | (var_4)))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */long long int) (-(0U)))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (1134907106097364992LL)))))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        for (signed char i_11 = 1; i_11 < 10; i_11 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_39 [i_12] [(_Bool)1] [i_12] [i_10] = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -1127320079))) ? ((+(((/* implicit */int) arr_30 [i_10] [i_11] [i_10])))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_12 [i_10] [i_10])) : (((/* implicit */int) (signed char)42))))))), (((((/* implicit */_Bool) arr_10 [i_10])) ? (((((/* implicit */_Bool) (short)265)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10] [i_10] [i_10] [i_11] [i_10]))))) : (1134907106097364992LL))));
                    arr_40 [i_10] [i_11] [i_12] = arr_38 [7U];
                }
                /* LoopNest 2 */
                for (long long int i_13 = 3; i_13 < 11; i_13 += 3) 
                {
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        {
                            arr_46 [i_10] [i_10] [i_10] [(_Bool)1] [i_14] = arr_29 [i_14];
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_1 [i_10] [i_11]))) ? (max((max((((/* implicit */unsigned long long int) arr_7 [i_10] [i_11 - 1] [i_10] [i_14])), (18446744073701163008ULL))), (arr_18 [i_10] [i_13] [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_45 [i_10] [i_10] [i_10] [i_10]))) | (((((/* implicit */_Bool) (short)18938)) ? (((/* implicit */int) arr_30 [i_14] [i_13] [i_14])) : (((/* implicit */int) arr_30 [i_10] [i_13 + 1] [i_10])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */int) (!(((8754900974012114677ULL) <= (18446744073701163008ULL)))));
}
