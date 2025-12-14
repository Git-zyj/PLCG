/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85048
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((int) (~(((((/* implicit */_Bool) 3386596267U)) ? (908371047U) : (908371028U)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) (+(18446742974197923840ULL)))) ? ((+(3386596263U))) : (((/* implicit */unsigned int) ((int) 18446742974197923840ULL)))))));
                arr_7 [i_0] |= ((/* implicit */signed char) 908371036U);
                var_14 = ((/* implicit */int) (-(max((908371028U), (arr_5 [i_0] [i_0 - 2] [i_1])))));
            }
        } 
    } 
}
