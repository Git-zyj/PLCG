/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75684
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
    var_17 = (+(((/* implicit */int) (!(min((var_1), (var_12)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)18)))))));
                            arr_10 [i_3 - 2] [20LL] [19LL] [i_1] [i_1] [i_0] = ((/* implicit */int) var_15);
                            arr_11 [i_0] [i_1] [(signed char)4] [1LL] = ((/* implicit */unsigned char) min((min(((+(-6255296459167587521LL))), (((/* implicit */long long int) ((var_3) ^ (var_3)))))), (((/* implicit */long long int) (-(((((/* implicit */int) var_13)) - (((/* implicit */int) var_9)))))))));
                            arr_12 [i_0] [i_1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + (var_16)))), (max((var_2), (((/* implicit */unsigned int) var_13))))))), ((+(max((var_8), (((/* implicit */long long int) var_16))))))));
                            arr_13 [i_3] [i_3 + 1] [i_3] [i_3 - 4] [i_3 - 2] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (max((var_2), (((/* implicit */unsigned int) var_9))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) var_10);
            }
        } 
    } 
}
