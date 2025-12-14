/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_7, (-1794017840 || var_1)))) >> (((var_3 | var_8) + 4098713242118744588))));
    var_13 -= (!var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [21] [11] [i_2] |= (((((((((1280585606 ? 0 : -3275))) && (((arr_5 [i_0] [i_1]) == var_5)))))) == (arr_2 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] = (((((max(16284, (arr_9 [i_3] [i_3]))))) ? ((((max(1124, 0))) ? (var_5 || var_10) : ((var_11 ? (arr_9 [i_3] [i_3]) : var_0)))) : -1794017840));
                                var_14 ^= var_8;
                                arr_14 [i_0] [i_0] [i_3 - 1] [i_3] = (-2147483647 - 1);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
