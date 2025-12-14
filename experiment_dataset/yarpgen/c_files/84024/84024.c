/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((((((arr_3 [i_1] [i_1]) <= (arr_0 [7])))) >> ((((((arr_2 [i_0] [i_1]) / -4928999032779286944)) <= var_13)))));
                arr_7 [i_0] = (var_17 & var_0);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [i_3] [1] [i_2] = (((arr_8 [i_3]) <= 115));
                arr_14 [i_3] = ((var_19 >= (max((arr_2 [i_2] [i_3]), (max(-6712877960349730899, (arr_10 [1])))))));
                arr_15 [i_2] = (((~(arr_5 [i_2] [i_3 + 1] [i_3 + 1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                arr_22 [i_4] [i_4] [i_5] = (~(arr_21 [i_4] [i_4] [i_4]));
                arr_23 [i_4] [14] [i_5] = (max(((var_15 >= (4611686018427387888 - var_9))), (!var_5)));
            }
        }
    }
    var_20 = (min((~var_10), ((var_17 + (min(9223372036854775807, 1532419588097244114))))));
    var_21 = var_13;
    #pragma endscop
}
