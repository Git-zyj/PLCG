/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58602
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-78)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))) == (((((/* implicit */_Bool) (short)3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (var_3)))))), (var_14)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */signed char) max((((/* implicit */int) max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))), (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) (short)28867))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (max(((((!(((/* implicit */_Bool) (short)-1)))) ? (max((0ULL), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 + 1]))))), (var_12))))))));
                                var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_3 + 2] [i_3 + 2] [i_4] [i_1])) ? (((/* implicit */long long int) arr_12 [i_0] [i_4] [i_3 - 1] [i_3] [i_3 - 1] [(unsigned short)16])) : (var_5)))));
                                var_22 |= ((/* implicit */int) max((max((arr_12 [i_3 + 1] [i_0 + 1] [i_2] [i_3 + 3] [i_4] [i_2]), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_3 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [12LL] [12LL]))))) ? (((unsigned long long int) 4529982629635125909ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-31))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 7; i_5 += 4) 
    {
        var_23 += ((/* implicit */signed char) ((((arr_15 [i_5 + 2]) + (9223372036854775807LL))) >> (((arr_12 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 3] [i_5] [i_5]) - (2333235383U)))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_19 [2U] = ((/* implicit */short) ((signed char) arr_11 [i_5] [i_6 - 1]));
            var_24 = ((/* implicit */unsigned char) ((signed char) (-(0U))));
            arr_20 [i_6 - 1] [i_6 - 1] = ((/* implicit */unsigned short) arr_5 [(short)4]);
        }
        var_25 = ((unsigned long long int) 4294967295U);
        arr_21 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5 + 2])) ? (((((/* implicit */_Bool) arr_5 [6LL])) ? (((/* implicit */int) arr_5 [20ULL])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_17 [i_5 + 1]))));
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 24; i_7 += 1) 
    {
        arr_25 [i_7 - 1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (8083395148560103490ULL))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_7 + 1])))))));
        arr_26 [i_7] [i_7] = ((/* implicit */signed char) ((arr_23 [i_7 - 1]) ? (((/* implicit */int) arr_23 [i_7])) : ((-(((/* implicit */int) (unsigned short)48997))))));
    }
    var_26 = (-((-(13916761444074425706ULL))));
}
