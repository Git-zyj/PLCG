/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91415
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */long long int) max(((_Bool)1), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_3 [i_0 + 1] [i_0 + 1])))));
                var_18 -= ((/* implicit */int) ((((((/* implicit */int) var_4)) % (var_12))) == (((((/* implicit */int) ((unsigned short) 9061058476190447485LL))) >> (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (((min((var_13), (((/* implicit */unsigned int) var_10)))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((/* implicit */int) (signed char)0))))))))))));
}
