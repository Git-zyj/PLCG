/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = (((((!(arr_2 [i_0])))) / (((var_6 || (arr_0 [4]))))));
        var_14 = (arr_1 [i_0]);
        arr_3 [i_0] = ((-(arr_1 [6])));
        var_15 = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [0] = ((((((!(arr_4 [i_1]))))) / 15878694327497919317));
        var_16 &= (min((arr_1 [i_1]), ((+((max((arr_5 [i_1]), (arr_5 [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (arr_8 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = (((max((arr_13 [i_2] [i_3] [i_4] [i_4]), 2568049746211632299))) ? var_5 : (arr_2 [i_2]));
                    var_18 &= (arr_0 [i_2]);
                    var_19 = (max(var_19, ((((((var_4 * var_11) != (max(15878694327497919317, 1)))) ? ((((arr_5 [i_2]) / ((((arr_10 [i_4]) != 20378)))))) : (max((max(var_12, (arr_14 [i_2] [i_4] [11] [12]))), (arr_1 [i_4]))))))));
                }
            }
        }
    }
    var_20 -= ((-(~var_11)));
    #pragma endscop
}
