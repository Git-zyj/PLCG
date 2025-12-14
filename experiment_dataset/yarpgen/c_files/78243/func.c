/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78243
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
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) min(((~(((/* implicit */int) var_9)))), (max((((/* implicit */int) (short)32744)), (((((/* implicit */_Bool) -72057594037927936LL)) ? (arr_1 [i_0]) : (((/* implicit */int) (short)21972))))))));
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)0))) ? (-1629802932371629811LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-5385)) > (652871411)))))))) ? (((/* implicit */int) (_Bool)0)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (-78138401)))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) 1044480)), (var_8))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2647309996403239707LL)))))))));
    var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */unsigned int) (+(58633488)))) : (var_5)));
}
