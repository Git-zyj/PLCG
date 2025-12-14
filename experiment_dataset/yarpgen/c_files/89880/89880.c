/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 35184372088831;
    var_20 = var_0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = 31;
        var_22 = (max(var_22, ((max(((max((max(35184372088815, 35184372088831)), (!-1)))), var_4)))));
        arr_3 [i_0] = ((!(((210 ? (!3137160688) : (53570 && 37))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_23 = 0;
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_24 = (max(var_24, (min(var_16, 253))));
                        var_25 = (min(var_25, (!var_9)));
                        arr_11 [i_3] = ((!(!var_4)));
                    }
                }
            }
            var_26 = (min(((4123852881557967766 ? 8327623719757108812 : 3733)), ((min(-919433791, 3137160688)))));
        }
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_27 = (min((1157806607 - 15404882970184033821), (max(7, 4958865180993405569))));
        var_28 = (max(var_28, -1));
        var_29 = ((!(!0)));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_30 = (max(var_30, -2849));
                    var_31 = (min(var_31, 46427));
                    var_32 -= (~39101);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                {
                    var_33 = -31;
                    arr_28 [i_9] = (~(-24 % var_8));
                    var_34 = (min(var_34, -94));

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            var_35 = 2346573953;
                            arr_33 [i_7] [i_9] [i_9] [i_10] [i_11] = ((1 ? var_6 : 5309634793106999209));
                            arr_34 [i_9] = (((36 + 7116) << (1 || -7243691046457148041)));
                            var_36 = ((4 ? -5309634793106999210 : -114));
                        }
                        var_37 = ((-(min(0, 0))));
                    }
                }
            }
        }
    }
    var_38 = var_15;
    #pragma endscop
}
