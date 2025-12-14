/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = ((9223372036854775798 ? (3058060022 / 9223372036854775803) : (((75 ? 3355444708 : 939522588)))));
                    var_12 &= (((((!(arr_4 [i_1] [i_0])))) - (((-1660720919052710176 == (max((arr_5 [i_0] [i_1] [i_1] [i_2]), 939522575)))))));
                }
            }
        }
        arr_8 [i_0] = ((((var_10 <= (arr_4 [i_0] [i_0])))));
        var_13 = -6733888541059304486;
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            arr_15 [i_4] [i_4] [i_4] = ((((min(var_4, var_6)) + 9223372036854775807)) << (((arr_3 [i_3] [i_3] [i_3]) - 3001789283)));
            var_14 = 143;
            var_15 = (((!var_10) - (arr_2 [i_4 + 3] [i_4])));
            arr_16 [i_3] [i_3] = var_4;
            arr_17 [i_3] = ((((255 ? var_3 : (arr_7 [i_4 - 1]))) > var_1));
        }
        arr_18 [i_3] = var_0;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((+((0 ? (arr_3 [i_5] [i_5] [i_5]) : 0))));
        var_16 = var_5;
        var_17 ^= (0 > -494689988075625951);
        arr_23 [i_5] = var_9;
        arr_24 [i_5] |= var_4;
    }
    var_18 = (max(var_18, var_0));
    #pragma endscop
}
