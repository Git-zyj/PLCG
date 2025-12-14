/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (558422637 + var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 ^= var_1;
                    arr_9 [i_0] [3] [i_2] = (((~(!-1))));
                    arr_10 [i_0] [i_2] [i_2] = (((((min(52, 4492975438630539308)))) && (((~(39521 + var_1))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_15 -= ((((-8 ? 30904 : (arr_11 [i_0] [i_0] [2] [i_0]))) << (((4 ^ var_9) - 806366124))));
                        var_16 = ((-11 ? 10 : (!var_7)));
                        var_17 = 0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
