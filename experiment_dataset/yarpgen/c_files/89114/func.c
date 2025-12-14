/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89114
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) var_1);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_0 [i_1 - 2]))))));
                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_0 [i_1 - 3]), (var_9))))));
                arr_7 [i_0] [i_1 - 3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [19])) ? (min((arr_4 [i_1] [i_1] [i_1 + 1]), (arr_4 [i_0] [i_1 + 1] [5LL]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [(unsigned short)3]))) : (((/* implicit */int) var_9)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (unsigned char)46);
    var_15 = (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_6))))))));
}
