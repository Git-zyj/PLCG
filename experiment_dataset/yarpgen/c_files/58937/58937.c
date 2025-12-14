/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = ((-(arr_2 [i_0 + 1] [i_0 - 2])));
                    var_13 -= (((arr_1 [1]) ^ (arr_3 [i_0 + 1] [i_0 + 2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_14 = (~var_10);
                arr_12 [i_3] = var_10;
                arr_13 [i_3 - 2] [i_3] = 1823936784;
                arr_14 [i_3] [6] &= (max(5168, (arr_4 [3] [i_4 - 1] [i_4])));
            }
        }
    }
    #pragma endscop
}
