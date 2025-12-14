/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57112
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_18 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)9712)) ? (((/* implicit */int) var_10)) : (arr_0 [i_2] [i_2])))));
                    var_19 = ((/* implicit */signed char) (!(var_0)));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) (short)16951)) : (((/* implicit */int) arr_5 [i_3] [i_1] [i_1] [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_21 = arr_4 [i_0] [i_0] [i_0];
                        var_22 = ((/* implicit */_Bool) arr_9 [i_4] [12U] [i_1]);
                        var_23 = ((/* implicit */short) arr_0 [i_3] [i_1]);
                        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [5] [2LL]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 4; i_5 < 23; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_16 [i_5] [i_1] [(signed char)15] [(signed char)15] [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [10U] [i_0] [i_3] [i_5 + 1])) ? (((/* implicit */unsigned long long int) arr_12 [i_5 + 1] [i_5 + 2])) : (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2314)))))));
                                arr_17 [i_6] [i_1] [i_1] [3U] [i_5] [22LL] = ((/* implicit */int) ((((/* implicit */_Bool) (short)9707)) ? (-1263164341767715320LL) : (((/* implicit */long long int) 15U))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (7U)))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (unsigned int i_8 = 3; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((7U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned int) var_17))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_7] [10])) : (((/* implicit */int) arr_18 [i_0] [i_1] [24U] [i_8]))));
                            arr_23 [i_8] [i_7] [(unsigned char)12] [i_8] = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) & (min((var_14), (((/* implicit */unsigned int) (short)3213)))))), (min((max((15U), (((/* implicit */unsigned int) arr_22 [i_0] [i_1] [i_1] [i_7] [i_8])))), (min((((/* implicit */unsigned int) (_Bool)1)), (arr_4 [i_0] [i_1] [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 4; i_9 < 21; i_9 += 4) 
    {
        for (short i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            {
                var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9] [i_9] [i_9 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_19 [i_9] [i_10]))))) : (arr_9 [i_9 + 2] [i_9] [i_9 + 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9 - 2] [i_9 + 1]))) : (((unsigned long long int) arr_5 [i_9 - 2] [13] [13] [i_9 - 2]))));
                arr_29 [i_9 + 3] [i_9 - 2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9] [i_10]))) & ((-(288160007407534080ULL)))));
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (unsigned short)63))));
            }
        } 
    } 
}
