/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67446
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
    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) ((_Bool) (_Bool)1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                arr_4 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                arr_5 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_2), ((_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) arr_0 [i_1]))))) : (((unsigned int) -6349799742267154210LL)));
            }
        } 
    } 
}
