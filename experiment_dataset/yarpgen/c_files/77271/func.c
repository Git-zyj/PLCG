/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77271
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (3097406195U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (max((((/* implicit */long long int) arr_4 [i_1 + 3] [2LL] [i_1 + 3])), (arr_6 [i_1 + 3] [i_1 + 3])))));
                    arr_8 [i_0] [i_0] [(short)11] [i_0] = min((((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) 3998843052U)) / (-5591599853320551417LL))))))), (arr_1 [i_2] [i_1]));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_4] [i_2] [i_2] [i_2]) >= (arr_12 [i_4] [i_2] [i_3 + 3] [i_4 - 1]))))) == (arr_12 [i_4] [i_1 + 3] [i_2] [i_2])));
                                arr_14 [i_4] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) arr_4 [i_3] [2U] [i_1 + 4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) max(((signed char)-65), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5]))) ^ (arr_7 [i_5])))))))));
                    arr_22 [i_5] [i_5] [i_6] [i_7] = ((((long long int) arr_6 [i_5] [i_6 - 3])) ^ (((/* implicit */long long int) 1793753290U)));
                    arr_23 [i_6] [i_6] = ((/* implicit */long long int) 670281441U);
                }
            } 
        } 
    } 
}
