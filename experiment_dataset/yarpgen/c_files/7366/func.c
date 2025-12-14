/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7366
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
    var_12 = ((/* implicit */int) 3778567880U);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) ((6726005278089259812ULL) <= (((/* implicit */unsigned long long int) 2086156799)))))) * (((unsigned int) arr_3 [i_0] [i_0] [i_0])));
                arr_4 [(unsigned short)4] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)38016))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max((var_2), (((/* implicit */unsigned short) var_10))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_10);
}
