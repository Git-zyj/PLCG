/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = ((!(~var_0)));
        var_18 = (!var_15);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 *= (~var_4);

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            arr_13 [i_2] [i_2 - 1] [i_0] [i_0] [i_0] [i_1] = (arr_10 [3]);
                            var_20 += (~var_7);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_21 = var_15;
                            var_22 -= var_0;
                            arr_17 [i_2] [i_2] [i_5] = 9;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_23 = (min(var_23, (arr_1 [8])));
                            arr_20 [i_2] [i_1 + 1] [i_2] [i_2 - 1] [i_2] [i_3] [i_6] = (!0);
                            arr_21 [i_0] [i_0] [i_2] [i_2] [1] = ((!(!18446744073709551592)));
                            var_24 = 18446744073709551592;
                        }
                    }
                    arr_22 [3] [i_1 + 1] [i_2] = var_11;
                }
            }
        }
    }
    var_25 = (+-29360128);
    #pragma endscop
}
