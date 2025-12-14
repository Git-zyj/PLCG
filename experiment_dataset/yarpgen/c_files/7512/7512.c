/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_8 / var_10);
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = -0;
        var_20 = ((((var_5 >= ((255 ? (arr_0 [2] [1]) : var_7)))) ? var_3 : ((((arr_1 [i_0]) > ((12 ? var_5 : (arr_1 [i_0]))))))));
        var_21 = (((((255 ? 1792 : 255))) + -var_11));
        var_22 &= (min(((((!(arr_1 [i_0]))) ? var_8 : (((1786 * (arr_1 [i_0])))))), (!64001)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_23 = (((((arr_8 [i_1] [i_1] [i_3]) ? (arr_8 [i_2] [i_1] [i_2]) : 13)) < ((((((255 ? -1792 : 255))) >= (arr_8 [i_1] [i_1] [i_1]))))));
                    arr_9 [i_1] [i_1] [i_1] [i_3] = (((min(((var_4 >> (1512560464 - 1512560437))), 242)) < (((var_4 <= (arr_6 [i_1] [i_1]))))));
                    var_24 = 4478963497539030662;
                }
            }
        }
        arr_10 [i_1] = ((((arr_3 [i_1]) ? (arr_4 [i_1]) : -1785)));
        var_25 = ((min(-164, 1)));
    }
    var_26 = ((min(3952, ((0 ? 255 : 907766034507628851)))));
    var_27 = ((var_10 * (((max(var_10, var_4))))));
    #pragma endscop
}
