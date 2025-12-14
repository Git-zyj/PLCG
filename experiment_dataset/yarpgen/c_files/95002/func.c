/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95002
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
    var_12 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(546691553U)))) ? (((/* implicit */int) min((var_6), (((/* implicit */short) var_2))))) : (((/* implicit */int) max((var_1), ((short)-15572))))))));
    var_13 = var_7;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) (-(((((/* implicit */int) arr_3 [i_0] [i_1])) - (((/* implicit */int) arr_1 [i_0 - 2] [i_1]))))));
                var_15 = ((/* implicit */unsigned char) 546691552U);
            }
        } 
    } 
}
