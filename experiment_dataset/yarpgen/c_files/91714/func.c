/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91714
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
    var_11 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_1)), (((unsigned long long int) 6144U))));
    var_12 = ((/* implicit */unsigned long long int) min((var_9), (2078853219U)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                var_14 = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */short) var_7);
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_0] [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) var_2))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (9223372036854775807ULL)))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (max((arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]), (var_9)))))) ? (arr_8 [i_0] [i_0] [i_0] [i_0 + 1]) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))));
                var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}
