/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 = (max((~59), (arr_1 [i_0])));
        arr_2 [i_0] = var_14;
        arr_3 [i_0] [i_0] = (52053 > 4181865144934184785);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [16] |= var_5;
        var_21 = -1;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_22 = (227 * 2650917860542652819);
        var_23 = 12;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_18 [i_4] = var_6;
                    arr_19 [i_2] [i_2] [i_2] &= ((!(~var_6)));
                    arr_20 [19] [19] [19] &= (arr_15 [5] [i_3] [i_3] [i_3]);
                    var_24 = var_13;
                }
            }
        }
        var_25 = arr_14 [i_2] [i_2] [i_2] [5];
    }
    var_26 = (var_12 && var_0);
    #pragma endscop
}
