/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77962
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_11 = (+(((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_1]))) ? (max((var_10), (var_9))) : (-5198736975969434406LL))));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0])))))))), (var_1))))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_1]))) ? ((~(var_9))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (var_1))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_1);
    var_15 |= ((/* implicit */_Bool) (signed char)-109);
    var_16 = ((/* implicit */long long int) ((signed char) var_9));
}
