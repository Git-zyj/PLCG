/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, ((min((!-29102), ((29102 && (arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))))));
                            arr_10 [i_0] = (-(((11610 ? 1375817556 : 3692263290))));
                            arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (~0);
                        }
                    }
                }
                var_12 += (arr_3 [i_0] [i_1]);
                arr_12 [i_0] = ((+((((arr_8 [i_0] [i_0] [i_0] [i_0]) == -24467)))));
                var_13 ^= (((((-(arr_3 [i_0] [i_1])))) ? 1721313459 : ((~(var_7 - 0)))));
                var_14 -= (((((!(arr_2 [i_0])))) * (((!((((((arr_7 [i_0] [i_0] [i_1]) + 2147483647)) << (((-3 + 23) - 20))))))))));
            }
        }
    }
    #pragma endscop
}
