/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54970
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
    var_14 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) / (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), (var_2)))))), (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_4 [i_0] [3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) < (1947941461)));
    }
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((signed char) (~(((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))))));
}
