/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71830
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) max((1981664871U), (((/* implicit */unsigned int) -107008801))));
                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1981664879U) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_4)))))))), ((~(var_14)))));
                arr_5 [i_0] = ((/* implicit */short) max((17324591192172338313ULL), (13775047835395141348ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((unsigned long long int) (unsigned short)28251));
}
