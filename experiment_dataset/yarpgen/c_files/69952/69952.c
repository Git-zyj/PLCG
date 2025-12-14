/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        var_15 -= (min((min(7, -127)), var_0));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] [9] = (arr_2 [i_0]);
            arr_8 [2] |= ((-1637008281 ? 126 : ((0 ? 59163 : ((-2888863559895537053 ? -1752696898 : 3611043384254269470))))));
            var_16 = (min(var_16, (((-var_12 ? ((max((arr_3 [i_0]), var_2))) : (min(((((arr_0 [i_0]) ? var_5 : var_4))), var_11)))))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_17 = (max((min((~var_11), (((!(arr_0 [i_0])))))), (arr_5 [i_0] [i_0] [i_2])));
            var_18 = (max((arr_2 [i_2]), (arr_9 [i_0] [i_0] [i_2])));
        }
        arr_11 [1] [i_0] = (((arr_4 [i_0] [i_0] [i_0]) ? ((-(~var_10))) : (arr_3 [i_0])));
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        var_19 = ((((max(3611043384254269470, 14))) ? var_5 : (arr_12 [i_3])));
        var_20 = max(var_12, (((~(!var_12)))));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_21 = -2888863559895537053;
                    arr_25 [i_4] [1] [i_4] = (arr_13 [13]);
                }
            }
        }
        arr_26 [i_4] [i_4] = (arr_16 [i_4] [i_4]);
        var_22 = (min(var_22, var_11));
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_23 *= arr_18 [16];
        var_24 = (arr_14 [i_7]);
        var_25 = (23 ? var_4 : 1);
        var_26 = (min(var_26, ((max(var_3, (((var_6 ? (max(var_2, var_2)) : (arr_27 [i_7] [i_7])))))))));
        arr_29 [i_7] = (arr_17 [i_7] [i_7]);
    }
    var_27 = (max(var_2, (min(var_9, var_4))));
    var_28 += (max((((min(var_2, var_13)))), var_1));
    var_29 |= var_12;
    var_30 = ((+(max((~var_3), var_0))));
    #pragma endscop
}
