/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64160
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
    var_19 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = (+(min((var_2), (arr_2 [i_0 - 2] [i_0 + 1] [i_0 - 1]))));
                var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_0]))));
            }
        } 
    } 
    var_21 += (~(((/* implicit */int) (!((_Bool)1)))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) var_0))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19254))) : (-1907944310299428366LL)))))) ? ((((_Bool)1) ? (max((((/* implicit */long long int) var_8)), (6798923128193159443LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-19254))))) : (((/* implicit */long long int) var_2))));
}
