/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(-1381744066, var_9))) || 3501071367)) ? var_10 : var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = 2342888880;
                var_13 = (min(var_13, (min(((((min(247, 2564048075))) ? -11895 : (((arr_3 [i_0] [i_0] [i_1]) | 1)))), (arr_1 [i_1 + 2] [i_1])))));
                var_14 |= ((((arr_0 [i_1 + 2] [i_1 + 1]) & (-2147483647 - 1))));
                arr_5 [i_0] [i_0] [i_0] = (max((((+(((arr_3 [i_0] [i_1] [i_0]) ? 2147483647 : (arr_0 [i_0] [i_1])))))), (max((min((arr_3 [i_0] [i_1 + 2] [i_1 + 2]), 2268972992)), 2268972988))));
                arr_6 [i_0] [i_0] = 113;
            }
        }
    }
    #pragma endscop
}
