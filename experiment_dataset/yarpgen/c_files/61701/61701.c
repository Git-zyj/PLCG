/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_4] [i_4] = ((min(((6438318300623746634 ? 1241010200 : -102)), ((255 ? 4294967040 : 4294967040)))));
                                var_14 = (((((((min(255, 255)) >= 16693)))) * (max(-100, 4294967040))));
                                var_15 = max((((min(4294967057, 255)) / (arr_13 [i_0] [i_2] [i_4 + 1] [i_2] [1]))), ((((arr_4 [i_4 - 3]) > ((276 ? -2184 : 2047))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [0] [i_1] [i_2] [i_5 - 1] [12] = 1203041485;
                                arr_24 [10] [i_5] [i_2] [i_0] [i_0] = -125;
                            }
                        }
                    }
                    var_16 = (min(var_16, 4294967040));
                }
            }
        }
    }
    var_17 = ((-(((var_11 ? 4294967028 : var_11)))));
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            {
                var_18 = ((60614 | ((((max(1, 7023821890142115280)) != (~255))))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_38 [i_7] [i_7] [10] [i_7] [i_7 + 2] = (arr_33 [i_7 + 2] [i_8 + 3] [i_8 + 3] [i_10] [i_11]);
                                arr_39 [i_7] [i_7] [i_7 - 2] [i_8] [i_9] [i_7] [i_11 + 1] = (5437 << 1);
                            }
                        }
                    }
                }
                var_19 -= (((!(-27576 || 18446744073709551615))));
            }
        }
    }
    var_20 = ((((max(1, 4294967019))) > 6442450944));
    #pragma endscop
}
