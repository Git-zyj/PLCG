/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (-(((max(var_1, (arr_1 [i_0 + 2] [i_0]))) >> (65524 - 65520))));
        arr_4 [i_0] = ((!(((-(arr_1 [i_0 + 1] [i_0 + 2]))))));
    }
    var_20 = var_10;

    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 |= 21;
        var_22 = ((-(min((arr_6 [i_1 - 1]), (arr_6 [i_1 - 1])))));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_23 = (arr_8 [i_2 + 1] [i_2]);
        var_24 *= (arr_6 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_25 = 4294967269;
                    arr_16 [i_2] [i_3 + 1] [i_2] = ((+(((arr_7 [i_2 - 3]) ? 32159 : 44814))));
                    arr_17 [i_2] [i_2] [i_3] [i_4] = (((((((arr_11 [i_2 - 1] [i_2 - 1] [i_4]) <= (arr_10 [i_2] [i_2 + 1]))))) != ((((!(arr_5 [i_2 - 3] [i_3]))) ? (((min(-22018, var_18)))) : (arr_9 [i_2 + 2])))));
                    arr_18 [0] [0] [0] |= ((~(-127 - 1)));
                }
            }
        }
    }
    #pragma endscop
}
