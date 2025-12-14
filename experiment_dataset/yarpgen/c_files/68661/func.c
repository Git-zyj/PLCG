/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68661
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
    var_10 = ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 10817913266920269910ULL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_11 = ((/* implicit */int) -4844653045790495511LL);
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])) & (5191841325344890941ULL)));
        }
        var_12 = ((var_9) ^ (arr_4 [5] [i_0] [i_0]));
        var_13 = ((/* implicit */unsigned long long int) 629515563);
    }
}
