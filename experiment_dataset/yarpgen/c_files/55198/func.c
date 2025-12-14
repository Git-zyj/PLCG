/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55198
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
    var_19 = var_11;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [20ULL] [i_1] |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)6)), (arr_3 [i_0])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)93)))) : (min((((/* implicit */int) arr_5 [i_0] [(unsigned char)8] [i_1])), (var_6)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) % (((arr_0 [i_0 + 2]) & (arr_1 [i_0 + 3] [i_1])))));
                var_20 = ((/* implicit */int) (unsigned short)49683);
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((_Bool) (!(((/* implicit */_Bool) var_0))))))))));
}
