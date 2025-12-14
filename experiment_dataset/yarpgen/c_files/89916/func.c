/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89916
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (unsigned char)5);
        var_17 = max((((((/* implicit */int) ((unsigned short) arr_0 [(short)12]))) << (((((/* implicit */int) var_0)) - (1365))))), (((/* implicit */int) ((arr_1 [i_0 - 3]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))));
        var_18 -= (signed char)(-127 - 1);
    }
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) (signed char)121)))))));
}
