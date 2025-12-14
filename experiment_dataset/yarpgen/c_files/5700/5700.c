/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (~-var_6);
        var_18 *= ((-(max(var_14, var_0))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 ^= (!18446744073709551615);
            var_20 -= (~-var_1);
            arr_7 [i_1] = var_7;
            var_21 += (min(((max(var_6, var_15))), (~-var_2)));
            arr_8 [i_1] [i_2] [i_1] = ((!(((~(max(var_0, var_6)))))));
        }
        var_22 += -var_7;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_17 [i_3] [i_3] [15] [i_3] = ((!(((-(~var_4))))));
                    var_23 = var_12;
                    var_24 ^= (min((~var_13), (!var_7)));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_25 = (!(((-(max(var_8, var_7))))));
                                arr_26 [i_3] = (min(var_16, var_13));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_26 += (((!var_16) ? (!536346624) : (((!(!var_0))))));
                        var_27 -= ((-(~var_7)));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_28 += (-(min(-3758620658, (~56059))));

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_34 [i_3] = ((2147483644 ? 1 : 18352848974908265548));
                            arr_35 [i_3] [i_3] [i_6] [8] [i_11] = (min(((min(var_11, var_15))), (max(var_10, (~var_1)))));
                            var_29 ^= (((~var_15) ? (((!var_9) ? var_5 : (((min(var_9, var_3)))))) : 14377));
                            var_30 = ((!((max((max(var_16, var_12)), (!56044))))));
                        }
                        var_31 ^= ((~(~8256689845191364447)));
                        var_32 = (max((max(var_0, var_8)), (!65528)));
                    }
                    arr_36 [i_3] [i_3] [i_6] = ((~(!var_5)));
                    arr_37 [i_3] [1] [i_4] [i_3] = ((~(!var_14)));
                    arr_38 [i_3] [i_4] [i_3] [i_3] = var_16;
                }
                var_33 ^= (~var_1);
                arr_39 [i_3] [i_3] [i_3] = (max((!var_14), (!var_16)));
                arr_40 [i_3] = ((-((-(~var_12)))));
                var_34 = (min((~var_12), (((~(min(var_15, var_16)))))));
            }
        }
    }
    #pragma endscop
}
