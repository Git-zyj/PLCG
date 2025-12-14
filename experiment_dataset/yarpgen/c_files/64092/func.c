/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64092
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_19 += ((/* implicit */unsigned long long int) arr_1 [(signed char)4]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_4))));
                    var_21 = ((/* implicit */short) 1272620497U);
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            arr_13 [i_3] [i_4] [i_4] &= ((/* implicit */unsigned long long int) arr_6 [i_4] [i_4] [i_4] [i_3]);
            var_22 = ((/* implicit */short) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))));
        }
        arr_14 [i_3] = ((/* implicit */short) ((_Bool) arr_8 [i_3]));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_3]))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */long long int) var_9);
        arr_18 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_5] [i_5] [i_5])) * (((/* implicit */int) var_5))))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) arr_6 [i_5] [i_5] [i_5] [i_5]))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(485670753U))))))))))));
    }
    /* LoopNest 3 */
    for (long long int i_6 = 2; i_6 < 11; i_6 += 4) 
    {
        for (short i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                {
                    arr_26 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */long long int) max((((unsigned int) ((((/* implicit */int) (unsigned short)65533)) + (arr_25 [i_6] [i_7 + 3] [i_8])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_25 [i_7 + 2] [i_6 + 3] [i_8]) : (((/* implicit */int) ((_Bool) var_5))))))));
                    var_25 = ((/* implicit */int) var_4);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) (unsigned short)65521)), (var_3))))) ? (((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)528))) : (0U))) : (((/* implicit */unsigned int) (+(arr_25 [i_9 - 1] [i_6 + 3] [i_6]))))))));
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_24 [i_9 - 1])) || (((/* implicit */_Bool) arr_24 [i_9 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_7 + 3])) || (((/* implicit */_Bool) arr_19 [i_6 - 1]))))) : ((+(((/* implicit */int) (signed char)-7)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) var_16);
}
