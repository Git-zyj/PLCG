/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9895
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-7LL)));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */int) (unsigned char)171)), (((((/* implicit */int) (_Bool)1)) << (0))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) arr_2 [(short)5] [i_1]);
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-6LL)))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (arr_3 [i_0 - 2])));
                var_14 -= ((/* implicit */unsigned char) (((~((+(((/* implicit */int) (_Bool)1)))))) & (((((/* implicit */_Bool) ((1600681206) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_9))))));
                var_15 = ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_3))));
            }
        } 
    } 
}
