/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5708
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-69))) ? (arr_0 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)95)))));
                    var_12 *= ((/* implicit */short) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
    var_14 = ((/* implicit */_Bool) var_7);
    var_15 = ((/* implicit */_Bool) var_7);
}
