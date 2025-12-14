/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 &= 1890981982;
        var_18 = ((1516177235512375613 ? 31 : 255));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 8;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_19 += (1 ? 1076463479 : var_1);
                            var_20 = (arr_5 [i_0] [i_1 - 1] [i_3 - 4]);
                        }
                        arr_14 [i_2] [i_2] [i_2] &= (arr_7 [i_3] [i_1]);
                    }
                }
            }
        }
    }
    var_21 = var_10;
    var_22 = -11634;
    #pragma endscop
}
