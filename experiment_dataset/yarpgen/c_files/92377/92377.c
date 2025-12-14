/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 += (-2147483647 - 1);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 += (+-114);
                                var_19 = 39;
                            }
                        }
                    }
                    var_20 += (max(((max(2147483647, 0))), (-34 - 131071)));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_21 = ((31 >> ((((max(1, 90))) - 49))));
                        var_22 = (max(var_22, ((!((max(131047, 131100)))))));
                        var_23 = (max(var_23, (((((min(131092, 1))) && -71863725)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_15 [i_6] = -31;
        var_24 = (~0);
        arr_16 [i_6 + 2] = 6851;
        var_25 += (!7);
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_26 = max((2010862205 - 1466447307), (min(4294836203, 4294836203)));
            arr_23 [i_7] [i_7] [i_8] = (max((~904604426205514180), 1281035296349762928));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        var_27 = (min(var_27, (max((3368952268 + 71863705), (2668315702 + 18446744073709551608)))));
                        arr_29 [7] [7] = (max(((max(0, 58680))), (min(-91, 131071))));
                    }
                }
            }
            var_28 = (((789491052 / 47861) / (2668315702 / 1)));
            var_29 = (((11115847511651986578 == 34600) >> ((max(1, 15)))));
        }
        var_30 &= ((((max(0, 47871))) - (~1)));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_31 = (max((max(17675, 4294836180)), ((max(1, -1)))));
                    var_32 = (max(2677949854, (max(-10, -1))));
                }
            }
        }
    }
    #pragma endscop
}
