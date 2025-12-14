/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77089
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
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [19ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_0 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3]))))))));
                    arr_11 [i_0 - 2] [i_2] [i_0 - 2] = ((/* implicit */short) arr_5 [(_Bool)1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (-((+(((/* implicit */int) arr_2 [i_3 - 3])))))))));
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 - 3] [i_0] [i_0])) * (((/* implicit */int) arr_5 [i_0] [i_0 - 4] [i_0]))))) ? (((arr_5 [i_0] [i_2 - 1] [i_4]) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) : (((((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 - 1])) - (((/* implicit */int) arr_5 [i_4] [i_2] [i_2])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (~((~(var_7)))));
}
