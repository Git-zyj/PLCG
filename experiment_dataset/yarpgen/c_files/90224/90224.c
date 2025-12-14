/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((~((((!var_10) >= (((arr_0 [i_0] [i_1]) ? 2488615643 : 1806351652)))))));
                arr_7 [i_1] &= 2488615643;
            }
        }
    }

    for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_18 = ((((max((arr_4 [1] [i_2] [i_2 + 1]), (arr_4 [9] [9] [i_2 - 1])))) & ((((!1806351636) >= 18446744073709551615)))));
        var_19 = (min(var_19, ((!(((-(arr_2 [i_2] [i_2]))))))));
        var_20 = ((!((!((min(8061699310621977437, (arr_1 [11]))))))));
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
    {
        var_21 = (~1);
        var_22 = -26;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [1] [i_3] [1] [i_3] [4] = var_17;
                        var_23 = (max((((-56 + 2147483647) << (var_17 - 13))), ((((~1) == -1806351652)))));
                        var_24 = (max(var_24, -var_3));
                    }
                }
            }
        }
    }
    var_25 = var_7;
    #pragma endscop
}
