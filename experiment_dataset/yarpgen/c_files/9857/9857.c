/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((-(max(61, 164077466246953587)))))));
    var_15 = ((var_3 ? ((((min(45, var_11))) ? 1 : -3398697207303958962)) : var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [0] |= 127;
        var_16 = (max(var_16, -7473));
        var_17 -= var_9;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = ((!((!(arr_5 [i_1])))));

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_18 = (max(var_18, var_13));
            var_19 = (~990077874);
            arr_10 [i_1] = -1;
            var_20 = (1698070262 == (arr_7 [i_2] [i_2 - 1] [i_1 - 1]));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_13 [2] [i_3] = (arr_12 [i_1] [i_1] [i_1 + 1]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 = (max(var_21, (-14932 / -164077466246953588)));
                            arr_20 [i_1] [i_1] [i_4] [i_4] [i_6] [i_4] = (arr_17 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1]);
                            var_22 = var_6;
                            var_23 = (max(var_23, (!-70)));
                        }
                    }
                }
            }
        }
        var_24 ^= ((65535 ? 12099 : 0));
    }
    var_25 = (!-14432146168333011475);
    #pragma endscop
}
