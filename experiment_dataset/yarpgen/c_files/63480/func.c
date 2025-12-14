/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63480
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) var_6)) > (-8493671482164841487LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) var_15);
                var_20 = (~(((/* implicit */int) ((((/* implicit */unsigned int) (~(arr_3 [i_0] [i_0])))) < ((-(arr_1 [i_1 + 2])))))));
                var_21 = ((/* implicit */signed char) ((long long int) ((arr_4 [i_0]) ? (8493671482164841487LL) : (-8493671482164841479LL))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((unsigned int) var_7));
    var_23 = ((/* implicit */short) (~(3323851739U)));
}
