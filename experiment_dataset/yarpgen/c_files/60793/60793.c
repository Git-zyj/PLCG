/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((-((~((32765 ? var_6 : 2121260443))))));
    var_13 = -32765;
    var_14 -= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((-((0 << (var_4 - 31358))))) * var_4));
                var_15 += (((arr_3 [i_0] [i_1] [i_1]) ? ((-32752 ? ((-(arr_4 [i_0]))) : (arr_3 [14] [i_1 - 1] [i_1]))) : ((((~1) ? (-32746 ^ -1937091609) : ((1506158721 ? (arr_0 [i_0]) : 1)))))));
                var_16 = (min((min(1759488973, (min(var_6, 2350732743)))), ((((arr_3 [i_0] [i_0] [1]) << (25 - 13))))));
                arr_6 [i_1] = ((+((~((((arr_3 [i_1] [i_1] [i_0]) != (arr_2 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
