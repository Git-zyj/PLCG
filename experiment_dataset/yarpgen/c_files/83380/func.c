/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83380
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
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))) ^ (var_12));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)119))));
                            var_15 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36258))) + (arr_7 [i_0 + 1] [i_1 + 1] [i_2 + 1] [i_0 + 1]))) ^ (((/* implicit */long long int) (-(arr_1 [i_0 - 1]))))));
                            var_16 = (~(((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2 - 1] [i_2] [11ULL] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) (~((~(arr_3 [i_0 - 2] [i_0 + 1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
}
