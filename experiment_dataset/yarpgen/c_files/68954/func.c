/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68954
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((short) 3048878979U)))) ? (((/* implicit */long long int) (~(1246088309U)))) : (var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                    var_13 |= ((/* implicit */int) (unsigned char)255);
                }
            } 
        } 
    } 
}
