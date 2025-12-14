/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72609
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
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (!(((2147483638) < (2147483638))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0]);
                var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [(signed char)4])) && (((/* implicit */_Bool) -2147483644)))), (((((/* implicit */int) (short)5052)) < (((/* implicit */int) arr_3 [(short)0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_14 = ((((/* implicit */_Bool) -2147483643)) ? (max((((/* implicit */unsigned long long int) max((913561127U), (((/* implicit */unsigned int) (_Bool)1))))), (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_6), (((/* implicit */short) (unsigned char)6))))) * ((((_Bool)1) ? (((/* implicit */int) var_0)) : (2147483646)))))));
}
