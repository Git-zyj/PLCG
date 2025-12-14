/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-96 ? ((40 ? var_6 : 42)) : (max(354947139, 63)))) | (max((-40 - 6), var_4))));
    var_20 = 3781621799;
    var_21 = ((((var_8 | var_1) ? var_15 : (~var_16))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((!((!((((arr_0 [i_0]) ? 15118 : (arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_22 = ((!((((arr_9 [i_0] [i_1] [i_1] [i_0]) % (arr_8 [i_0] [i_1] [i_2] [i_2]))))));
                    var_23 = ((!(((-29 ? (arr_5 [i_1 + 1] [i_1 - 1]) : 5091923666251137397)))));
                }
            }
        }
        arr_10 [i_0] = max((!-40), ((((min((arr_0 [i_0]), -5855188750674041104))) ? 69 : 5091923666251137406)));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_24 = arr_12 [i_3] [i_3];
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_19 [i_3] = (arr_13 [23]);
                    var_25 = (arr_11 [i_3]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_26 = ((3741927800078965037 < (((+(((arr_11 [i_6]) ? (arr_13 [i_6]) : -41)))))));
        arr_23 [i_6] [i_6] = (max(((-(min(4294967295, 99)))), 157));
    }
    #pragma endscop
}
