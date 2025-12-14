/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (~-11533620311342648774);
        arr_2 [i_0] [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_4 [i_1]);
        arr_6 [i_1] = ((((((arr_4 [i_1]) ? 23946 : 4323659783736946922))) ? (((arr_3 [i_1] [i_1]) ? 255 : (arr_3 [i_1] [i_1]))) : -2040));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((51833 >= (arr_3 [i_2] [i_2])));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_14 [0] &= -5085210868692244115;
            var_19 = ((~(max(255, (arr_12 [i_2])))));
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = var_14;
        var_20 = ((max(-19557, var_12)));
    }
    var_21 = ((var_6 ? ((var_8 ? var_5 : 49386)) : var_6));
    var_22 = (min(((6913123762366902824 ? ((1925116977 ? var_9 : var_2)) : 13694)), var_9));
    #pragma endscop
}
