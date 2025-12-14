/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(17496658258268606947, 1202389464));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_2] [i_1] [i_0] = (0 ? (((arr_6 [4] [i_1 - 3] [i_1]) ? (arr_6 [i_1] [i_1 - 3] [i_0]) : (arr_6 [i_2 + 1] [i_1 - 3] [i_0]))) : (max(47937, ((681 ? -6 : 127)))));
                            var_20 = 1;
                            arr_14 [i_0] [i_1] [i_2] [13] = (((var_16 ? -929243046 : var_14)));
                        }
                    }
                }
                var_21 ^= 21310;
                var_22 = ((!(((-(((arr_7 [12] [i_0] [12] [i_0]) ? 127 : 30896)))))));
            }
        }
    }
    var_23 = (max(0, (~var_10)));
    var_24 = (((~var_18) + var_1));
    #pragma endscop
}
