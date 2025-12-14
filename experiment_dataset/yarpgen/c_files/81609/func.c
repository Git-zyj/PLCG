/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81609
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), ((((+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 1560003658U))))))) >> ((((+(((/* implicit */int) (signed char)-113)))) + (124)))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49309)) / (((/* implicit */int) (unsigned char)128))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (unsigned short)49309))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)19387))))));
    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4242))));
}
