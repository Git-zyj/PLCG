/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96970
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_1]))) ? (((1599271053) + (((/* implicit */int) (short)26896)))) : (((/* implicit */int) (signed char)-98))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (signed char)98))));
                arr_6 [i_0] [15] [i_0] = ((/* implicit */unsigned long long int) ((-332817451) > (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((int) (signed char)99));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_9))));
}
