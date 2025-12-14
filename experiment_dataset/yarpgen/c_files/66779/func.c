/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66779
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
    var_10 |= var_0;
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-33)))))))) ^ (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_12 -= (signed char)35;
            var_13 += ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) var_0))));
        }
        var_14 += (unsigned char)241;
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((signed char) max(((unsigned char)230), (((/* implicit */unsigned char) (signed char)-80))));
        var_15 -= ((signed char) ((signed char) arr_2 [i_2] [i_2]));
        arr_11 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
    }
}
