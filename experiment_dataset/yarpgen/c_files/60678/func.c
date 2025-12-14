/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60678
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((unsigned short) var_5)))));
    var_14 = ((((/* implicit */unsigned int) min((325875626), (((/* implicit */int) ((((/* implicit */_Bool) (short)14610)) || (((/* implicit */_Bool) var_0)))))))) >= (2394309041U));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((long long int) ((unsigned short) max((var_3), (-1968988371))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) var_7);
            }
        } 
    } 
}
