/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((var_4 ? var_10 : var_12));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                    var_19 = (arr_6 [i_2]);
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((((((arr_4 [i_2 + 1]) ? (arr_4 [i_0]) : var_13))) ? (var_5 >= var_10) : (arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] |= 0;
                                var_20 = 13062216913457793206;
                                arr_15 [i_0] [i_1] [i_2 - 2] [i_3] [12] [i_4] = (((var_8 == -0) ? (-9773 ^ -0) : ((((min(-9774, -8116058345546320126))) ? 9337 : (arr_3 [i_2 - 1])))));
                                var_21 = (min(var_21, var_11));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    arr_20 [i_0] [i_5] [i_5] [i_5] |= (arr_7 [i_0]);
                    var_22 = (max(var_22, (((~(arr_1 [i_6 + 1]))))));
                    var_23 = (arr_12 [i_6] [i_6 - 1] [i_5] [i_5] [i_0]);

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {

                        for (int i_8 = 4; i_8 < 18;i_8 += 1)
                        {
                            arr_25 [2] [i_5] [i_6] [i_7] = (((arr_10 [i_5] [i_5] [i_7] [i_7 + 2]) != (arr_10 [i_0] [i_5] [i_7 + 4] [i_8])));
                            arr_26 [i_8 - 3] [i_7 + 3] [i_5] = (((arr_24 [i_6] [i_6 - 1] [i_6]) ? (arr_24 [i_5] [i_5] [i_5]) : (arr_12 [i_5] [i_6] [i_6 + 1] [i_6 - 1] [i_7 - 3])));
                            var_24 = (arr_23 [i_0] [i_5] [12] [i_7 + 1] [i_8]);
                            arr_27 [i_0] [i_5] [i_6] [i_7] [i_8] = (arr_24 [i_6 + 1] [i_5] [i_0]);
                        }
                        arr_28 [i_0] [i_6] [i_6] [12] = (((arr_17 [i_6 - 1]) & (arr_17 [i_6 - 1])));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        var_25 ^= ((((((arr_12 [i_0] [i_5] [i_6 + 1] [i_9] [0]) ? (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]) : 9787))) ? (!0) : 9784));
                        var_26 = 7612523522913816133;
                    }
                }
            }
        }
    }
    var_27 &= var_14;
    var_28 -= var_17;
    #pragma endscop
}
