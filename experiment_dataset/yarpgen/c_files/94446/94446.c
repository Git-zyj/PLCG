/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-(-1288920844 % 1)));
                arr_5 [i_0] [i_0] = (((var_13 > -2081024818) <= (~1486251039)));

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_16 = var_6;
                    arr_8 [i_2] = var_5;
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((~(~var_0)));
                    var_17 = ((-(-32767 - 1)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_18 |= ((((-32764 ? -32741 : 7)) <= (1 >= 110)));

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] = 32764;
                        var_19 = (min(var_19, 1074));
                        arr_15 [i_0] [i_0] [i_0] = (~195);
                        var_20 += (1068 + -1);
                        var_21 = 160;
                    }
                    var_22 = (max(var_22, ((((var_3 % -1) ? (!-1846410610) : 1)))));
                    arr_16 [i_0] [i_0] = (!13);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_23 = (805306368 | 55503);
                                var_24 += (-14 % -32756);
                                var_25 = (!-1047);
                                var_26 = var_0;
                                var_27 = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_6;
    #pragma endscop
}
