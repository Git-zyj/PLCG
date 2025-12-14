/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_11 = (max(var_11, (arr_4 [i_2] [i_1] [i_0])));
                    arr_9 [i_0] [i_1] = -215282511;
                    arr_10 [i_0] [i_1] [7] [i_1] = (~3905482070302948292);
                }
                var_12 = (min(-30904, -73));
                var_13 -= ((var_2 ^ (((arr_1 [1] [4]) ? ((26301 ? (arr_7 [i_1]) : var_8)) : (-79335070 + 215282510)))));
                var_14 -= 7382384737229594689;
                arr_11 [i_0] [i_1] = (((max((arr_4 [10] [i_1] [13]), (-76 / 3163640929057584405))) >= ((((arr_6 [i_1] [i_1]) ? (~215282497) : 19564)))));
            }
        }
    }
    var_15 += -2000955287;
    var_16 = ((min(var_3, ((18441 ? var_8 : 3905482070302948289)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_5] = (min((((1 > (arr_20 [i_3] [i_4 - 2] [i_5])))), (arr_6 [i_4 - 1] [i_4 + 2])));
                    arr_22 [i_5] = ((((((-1890735178 ? -41 : -20532)))) ? -215282511 : (76 - var_1)));
                }
            }
        }
    }
    #pragma endscop
}
