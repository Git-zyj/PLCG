/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59190
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (signed char)-15))) / (((/* implicit */int) var_7))));
                var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)122))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)54226)))))));
    var_19 += ((/* implicit */short) (-(((/* implicit */int) var_15))));
}
