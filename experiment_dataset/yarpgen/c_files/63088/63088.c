/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((0 << (var_6 - 1692587845))) & (var_3 > var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((~(min(197536710, 67108832))))) == (((arr_0 [i_1 + 1] [i_1 + 1]) ? (arr_0 [i_1 + 1] [i_1 + 1]) : 3489079673))));
                arr_7 [i_1 - 1] [i_1] = ((-(((!1073739776) ? (max((arr_5 [i_1 - 1] [i_0]), (arr_0 [i_1] [i_1 - 2]))) : (min(10488523034938979161, (arr_1 [4] [5])))))));
            }
        }
    }
    #pragma endscop
}
