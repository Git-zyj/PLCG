/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58010
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
    var_14 |= var_11;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0])))))));
        arr_5 [i_0] [i_0] = arr_2 [i_0];
        arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)57597)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10926))) : (9569743292408541275ULL));
    }
}
