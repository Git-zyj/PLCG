/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88124
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
    var_12 = ((/* implicit */unsigned int) var_11);
    var_13 = ((/* implicit */int) max((9624918066509737668ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_8)) - (((/* implicit */int) var_0)))) : (((/* implicit */int) (signed char)62)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [3LL] [i_1] [i_1] = ((/* implicit */signed char) ((short) min((min((arr_2 [i_1]), (((/* implicit */unsigned long long int) (signed char)-60)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 2]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) || (((/* implicit */_Bool) (signed char)0))));
                            arr_11 [i_0] [i_3] [4] [3] = (signed char)-2;
                            arr_12 [i_0 - 2] [i_3] [i_2] = ((unsigned long long int) ((signed char) arr_2 [i_0 + 2]));
                        }
                    } 
                } 
            }
        } 
    } 
}
