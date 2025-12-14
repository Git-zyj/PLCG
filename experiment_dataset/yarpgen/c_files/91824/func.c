/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91824
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
    var_13 = ((/* implicit */unsigned short) var_6);
    var_14 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-3910753329819730870LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_1]))));
            }
        } 
    } 
}
