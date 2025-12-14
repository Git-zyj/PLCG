/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82718
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
    var_19 = ((/* implicit */_Bool) (signed char)-24);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((short) var_16)))))));
                arr_7 [i_0] = max(((unsigned short)27631), ((unsigned short)9772));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_7);
}
