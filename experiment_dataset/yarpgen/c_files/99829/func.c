/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99829
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
    var_12 = ((/* implicit */int) (~(max((var_6), (((/* implicit */unsigned long long int) var_3))))));
    var_13 = ((/* implicit */unsigned char) var_4);
    var_14 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_0 [i_1])), (((unsigned long long int) (short)18297))))))));
                var_16 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_2 [i_0] [i_0 - 1])) - (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))));
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((1033665851544940829ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0]))))), (min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)1))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_2);
}
