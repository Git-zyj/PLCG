/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55255
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((-2851908797370090317LL) ^ (((/* implicit */long long int) -1219675978)))) : (52776558133248LL)))) ? ((~((~(2308448375770020006LL))))) : (((/* implicit */long long int) ((var_1) >> (((-929217911357542930LL) + (929217911357542945LL))))))));
    var_12 = ((long long int) ((int) 330648829170951727LL));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) -2072681464);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */int) max((var_13), (((((int) -2308448375770020007LL)) ^ ((~((~(31)))))))));
                            arr_11 [i_2] = ((/* implicit */int) (~((~(max((-2308448375770020007LL), (var_6)))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */long long int) ((int) 929217911357542929LL));
                arr_12 [i_0] = ((/* implicit */long long int) var_5);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        arr_15 [i_4] [i_4] = ((int) ((var_0) - (2308448375770020009LL)));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_13 [i_4] [i_4]))) ? (((/* implicit */long long int) ((arr_13 [i_4] [i_4 + 1]) ^ (arr_13 [i_4] [i_4 + 1])))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_4 + 1])) ? (((/* implicit */long long int) arr_13 [i_4] [i_4])) : (-2308448375770020016LL)))));
    }
}
