/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64952
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
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3614854496644884994ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)2308))))) && (((/* implicit */_Bool) -1282553265)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)31656))))))) : (((/* implicit */int) (!(((_Bool) var_19)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_15)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))));
                var_22 = ((/* implicit */_Bool) (+(var_5)));
            }
        } 
    } 
}
