/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56527
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
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
    var_12 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((383320628U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))))) ? (-7357472077272957647LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 7357472077272957648LL))))));
                    var_14 = arr_1 [i_0] [i_2];
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_8);
    var_16 &= ((/* implicit */short) (-(((((((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-20609)))) + (2147483647))) >> (((((((/* implicit */int) (short)32748)) << (((var_4) - (1351800698U))))) - (8383457)))))));
}
