/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = ((((((var_9 > ((var_2 ? var_3 : var_16)))))) | (min(var_8, var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [8] [1] [i_2] = (44616 * 3108);
                    var_19 = max((min(394477547, 0)), (((((1073741823 ? 156 : (arr_4 [i_2] [i_1])))) ? (-2147483647 - 1) : ((-1870204268 ? 299610445 : 71)))));
                    arr_10 [i_0] [3] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
