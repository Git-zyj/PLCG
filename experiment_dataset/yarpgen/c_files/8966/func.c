/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8966
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
    var_16 = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_7)))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) 71776119061217280LL)) ? (min((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_5))))), (var_14))) : (((/* implicit */int) ((short) (short)-14802))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)11083)) ? (((/* implicit */int) (short)14188)) : (((/* implicit */int) min(((short)14188), ((short)-11097)))))), (((/* implicit */int) var_11)))))));
                arr_6 [i_0] [i_0 + 1] [i_0 + 1] &= (!(((_Bool) arr_4 [i_0 - 1])));
                var_19 = ((/* implicit */int) arr_4 [i_1]);
                var_20 = ((/* implicit */short) (-((+(((/* implicit */int) arr_4 [i_0]))))));
                var_21 = max(((short)14169), ((short)32566));
            }
        } 
    } 
}
