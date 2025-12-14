/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_10 *= 982776823;
        var_11 = (~2564624497070044626);
    }
    var_12 = (!16);

    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        var_13 = (~29213464);
        arr_4 [i_1] = (~146);
        var_14 += 3091130671;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_15 += 84;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_10 [i_3] = (!255);
            arr_11 [i_2] [i_3] [i_3] = (!255);
        }
        arr_12 [i_2] = -975474893;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_15 [i_4] = 55;
        arr_16 [i_4] [i_4] = ((~(!-89)));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_16 = (min(var_16, -558303659));
        arr_19 [i_5] = 10732007797144419628;
    }
    #pragma endscop
}
