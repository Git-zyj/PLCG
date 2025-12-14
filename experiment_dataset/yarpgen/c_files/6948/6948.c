/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (~var_13);
                    arr_9 [i_0] [i_0] = ((((max((((arr_3 [i_1] [i_1] [i_0]) ? var_7 : var_0)), ((12628666739673610892 ? var_7 : var_10))))) ? ((((min(-908759298, 3))) ? ((((-2147483647 - 1) & 23604))) : (var_5 | var_8))) : (((5418230919584630178 ? var_11 : (arr_4 [i_2 - 1] [i_1 + 1]))))));
                }
            }
        }
    }
    var_14 = ((5418230919584630178 ^ (~var_13)));
    #pragma endscop
}
