/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (~28012)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((37510 && (((((~(arr_4 [i_0]))) << ((((var_0 ? var_5 : 515568269425264813)) - 27958)))))));
                arr_6 [i_1] [8] [i_0] = (((!var_5) ? 37523 : ((~(arr_1 [i_1 - 2] [1])))));
            }
        }
    }
    var_11 = (max(var_11, (((((-var_3 > (~4395899027456))) ? var_1 : (var_1 / 6160506838250575495))))));

    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_12 |= (((27983 ? var_7 : var_4)));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                {
                    arr_15 [i_2 - 1] [i_2] [i_2] [i_4] = (37523 ? -5765335982185301511 : 65271);
                    arr_16 [i_3] [i_3] [i_3] [i_3] = 37552;
                    arr_17 [i_2] [i_2] [i_4 - 4] = (((28013 | 28001) ? ((27977 ? var_4 : 18446744073709551603)) : (((37534 ? 1143872845 : 27988)))));
                }
            }
        }
    }
    #pragma endscop
}
