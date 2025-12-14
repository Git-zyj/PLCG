/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8734
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
    var_14 &= ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 += ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 + 3])))));
                arr_4 [(short)6] &= ((/* implicit */short) (+(max((((/* implicit */unsigned int) min((-1949986644), (arr_3 [(signed char)5])))), ((-(arr_1 [i_0])))))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_3 [i_0 + 2]))));
            }
        } 
    } 
    var_17 = var_7;
}
