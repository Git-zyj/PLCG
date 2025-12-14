/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_3));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (arr_2 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_12 += (min(((47825 ? (arr_7 [i_3 + 3] [i_3 + 3] [i_3 - 3]) : (arr_3 [4] [1] [i_0 - 2]))), ((((arr_6 [i_0 - 3] [i_3 + 3] [i_2]) != var_3)))));
                            var_13 = (((((~(arr_6 [i_0 - 2] [i_3] [i_3])))) ? var_4 : (max(47432285, (min(-2937101757635543920, 65535))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
