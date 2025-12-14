/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55199
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10940)) ? (((/* implicit */int) (short)26688)) : (((/* implicit */int) (short)-26689))));
                var_17 *= ((short) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) & (((/* implicit */int) var_8))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((/* implicit */int) var_3)))))));
}
