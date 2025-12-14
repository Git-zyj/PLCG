/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!var_3) >= ((45559 ? var_6 : var_16)))) ? ((((-3857 - var_14) != var_9))) : var_19);
    var_21 = 1747778529;
    var_22 = ((575447479 ? 16 : 131));
    var_23 = var_16;

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (((arr_0 [i_0 - 4]) / 1230960705));
            arr_6 [i_0] = ((11 == (((arr_1 [i_0]) / var_15))));
            arr_7 [i_1] [i_0 - 4] [i_1] = (((arr_2 [i_0 - 4] [i_0 + 1]) ? var_9 : (var_5 >= var_11)));
        }
        arr_8 [i_0] [i_0] = (max((((arr_2 [i_0] [i_0 - 4]) | 23455)), ((((-4641001958206023940 | 32767) < (arr_2 [i_0] [i_0]))))));
        arr_9 [i_0 - 1] = ((~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = (((arr_11 [i_2 - 2]) >= ((2147483647 ? var_7 : (arr_11 [i_2 - 2])))));
        arr_13 [i_2] = (arr_10 [i_2 + 2]);
        arr_14 [i_2 - 2] [i_2] = var_1;
        arr_15 [i_2 + 1] = (((((var_6 ? var_7 : var_4))) ? var_7 : (((arr_10 [i_2]) ? var_17 : 104))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_19 [i_3] [i_3] = -3853;
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_27 [i_3] [i_3 - 2] [i_4] [i_5 + 1] [i_6] [i_4] = 23454;
                        arr_28 [i_3] [i_4] [i_4] [i_6] = (arr_24 [i_6]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
