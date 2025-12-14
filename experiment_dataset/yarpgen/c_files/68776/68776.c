/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [13] = (max(-1100080167, ((min(-1100080167, var_1)))));
        arr_3 [i_0] = 22862;

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_12 = ((-((9860104790050189822 ? 2400346504863490613 : 288230376151711743))));
            var_13 += 58;
            arr_6 [i_1] [i_0] [i_0] = ((((((42 - -1100080159) - ((min(45, 20)))))) ? ((((((-2147483647 - 1) - -1100080164))) ? ((min(var_1, var_6))) : var_6)) : 32));
        }
    }
    var_14 = ((((~((var_2 ? 0 : var_2)))) << (!var_2)));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] = (((~var_7) ? ((-((1100080157 ? 31 : var_9)))) : 7));
        var_15 = (max(var_15, (((((min(153, (min(var_5, (-127 - 1)))))) ? ((((((arr_5 [i_2] [i_2]) / 960))) ? (((7397078106516530876 ? -4633 : var_9))) : (~var_2))) : (255 && 24))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_4] = var_3;
                    arr_20 [5] [i_3] [i_4] = (((((43 ? -1 : 110)) ? (arr_12 [i_4] [i_4]) : ((-1100080170 ? (arr_12 [i_3] [12]) : var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
