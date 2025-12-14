/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98945
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
    var_10 = ((/* implicit */signed char) ((long long int) 3802898312U));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [12U] [12LL] [i_0] [i_0] [12U] &= ((unsigned int) (~(arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 2])));
                                arr_13 [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2017937555U)) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 2] [i_1 - 1]))))));
                                var_11 = ((/* implicit */signed char) max((var_11), ((signed char)67)));
                                var_12 ^= ((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_1] [i_1]), (arr_0 [(signed char)17]))))) : ((~(arr_4 [i_4]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 2])) && (((/* implicit */_Bool) (~(arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_4])))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) max(((-(arr_11 [i_0] [i_0] [i_0] [i_0] [0LL] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */long long int) var_1)) ^ (arr_9 [(signed char)2] [i_0] [(signed char)2] [i_0])))))));
                    var_14 = ((/* implicit */long long int) max((var_14), (min((((/* implicit */long long int) (((-(((/* implicit */int) (signed char)3)))) + (((/* implicit */int) (signed char)9))))), (((long long int) -1LL))))));
                }
            } 
        } 
    } 
}
