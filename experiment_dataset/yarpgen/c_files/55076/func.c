/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55076
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
    for (int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */int) max(((short)25745), ((short)-12934)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1696244726)) ? (((/* implicit */int) (short)12941)) : (8064)))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_10)))))))));
                var_20 = ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (-8047)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_5))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (var_6))))))))));
}
