/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_5 [14] [i_0] [i_1] = (((55 ? (arr_4 [i_1]) : var_3)) < (255 % 6992476414171046873));
            arr_6 [i_0] [i_0] = (((arr_1 [i_1 + 2] [i_1]) ? (arr_1 [i_1 + 2] [i_1 + 2]) : (arr_1 [i_1 + 1] [i_1])));
        }
        arr_7 [i_0] [i_0] = ((~(~24779)));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_20 = (min((((var_6 >= (arr_10 [i_2] [i_2])))), ((~((var_16 ? var_15 : var_11))))));
        var_21 = (arr_4 [i_2]);
    }
    var_22 = (((((max(var_11, 32767)))) * ((15 ? 18166805231765729993 : 208))));
    var_23 |= var_19;
    var_24 = 279938841943821639;
    #pragma endscop
}
