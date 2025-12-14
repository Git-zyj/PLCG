/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63154
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0 + 1] [i_1] [i_1 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4)))))))));
                arr_5 [(signed char)14] = ((/* implicit */int) max((arr_0 [i_0]), (max((arr_2 [i_1 + 1] [i_1 + 1]), (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2] [i_0])) || (arr_0 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_13 [i_1] [i_0 + 3] [i_0] [7] [i_0 - 1] [i_0] = (i_1 % 2 == 0) ? (((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(arr_3 [i_1 - 1] [i_1 - 1] [14])))) ? (((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 3] [i_1] [i_0 - 3]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_2 [i_3] [i_3])), (var_13)))))))))) : (((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(arr_3 [i_1 - 1] [i_1 - 1] [14])))) ? (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 3] [i_1] [i_0 - 3]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_2 [i_3] [i_3])), (var_13))))))))));
                            arr_14 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 3] [i_3] = ((/* implicit */signed char) (-(((((long long int) arr_2 [i_0] [i_0])) ^ (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [4LL] [i_1 + 1] [4LL])))))))));
                            arr_15 [i_3] [i_0 + 2] [i_0] = arr_7 [i_0] [i_3] [i_3];
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_11);
    var_19 = var_1;
}
