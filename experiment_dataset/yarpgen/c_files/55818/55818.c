/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((((((~var_6) ? 13 : (var_16 >= var_5)))) ? 1 : ((var_0 ? var_5 : ((min(var_13, 175)))))));
    var_20 = 16383;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((((var_0 ? var_2 : var_5))) ? var_5 : (!var_16))))));
                arr_5 [3] [i_1] [i_0] = (!1);
                arr_6 [i_1] [i_1 + 3] = 1;
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_11 [i_2] [i_2] = (((((-1 ? 81 : 1))) ? (((!(1 > var_12)))) : ((-(var_1 & var_16)))));
            arr_12 [i_2] [i_2] [i_3] = (~var_11);
        }
        arr_13 [i_2] = (!var_13);
        var_22 += (!349023823);
        var_23 = ((-93 ? (!var_6) : ((var_18 ? 0 : var_14))));
        arr_14 [i_2] = ((var_2 >= ((-(~var_1)))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_24 = (max(var_24, (((-(((max(-22197, var_1)))))))));
        var_25 = (((max((!var_7), var_12)) > (((var_14 ? var_2 : var_7)))));
        var_26 *= ((!(!var_1)));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_19 [4] &= ((~((-((min(-12130, var_11)))))));
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {
                        var_27 = (~var_12);
                        var_28 = -var_14;
                    }
                }
            }
        }
    }
    #pragma endscop
}
