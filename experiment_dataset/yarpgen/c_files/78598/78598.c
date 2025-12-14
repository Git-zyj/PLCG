/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(6656670359074012895, 103));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [4] [i_1] [i_2] [i_2] &= (min(((103 ? var_14 : (arr_6 [i_0] [10] [i_2] [i_0]))), (!-7054771534873276205)));
                    arr_8 [i_1] [i_1] [i_0] [i_1] = var_11;
                    var_16 = (min(18446744073709551615, 4));
                }
                var_17 = ((9 ? ((50569 << (4981 - 4981))) : (arr_6 [i_0] [i_1] [9] [i_1])));
            }
        }
    }
    #pragma endscop
}
