/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56738
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
    var_14 |= ((/* implicit */unsigned int) var_3);
    var_15 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = -1063746348;
        var_16 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */int) max(((short)-32753), (arr_0 [i_0])))), ((-(((/* implicit */int) arr_0 [i_0])))))));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */short) 436352013U);
    }
}
