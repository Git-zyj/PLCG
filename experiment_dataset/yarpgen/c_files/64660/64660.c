/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (7498 != -3242006029308880180);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] &= ((-(arr_3 [i_0] [i_1])));
                    var_17 = (5952907196199622267 == 884198337754066075);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (arr_6 [i_0]);
                    arr_9 [i_0] [i_0] [i_2] = (((arr_0 [i_0]) || (arr_4 [i_0] [i_0])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_18 = (arr_15 [i_0] [i_3]);
                        var_19 = (min(var_19, (arr_15 [i_0] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_19 [i_0] [i_3] [i_4] [i_6] = (arr_10 [i_0] [i_4]);
                        var_20 = (min(var_20, 3507892887));
                    }
                    var_21 &= (arr_1 [i_0]);
                    arr_20 [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_3]);

                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_22 = (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_23 [i_0] [i_3] [i_4] [i_7] = ((!(((~(arr_3 [i_3] [i_0]))))));
                        arr_24 [i_7] [i_0] [i_0] [i_0] = 787074438;
                        arr_25 [i_0] [i_4] [i_4] = ((~(~144115185928372224)));
                        arr_26 [i_4] [i_0] [i_4] [i_4] = (arr_1 [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_4] [i_4] [i_4] [i_0] = (arr_10 [i_0] [i_3]);
                        var_23 ^= (arr_15 [i_4] [i_8]);
                        var_24 = (max(var_24, -575416865));
                        var_25 = arr_14 [i_0] [i_0];
                        arr_30 [i_0] [i_0] [i_4] [i_8] = (arr_14 [i_0] [i_3]);
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_26 = (((((((arr_12 [i_0] [i_3] [i_0]) <= (arr_10 [i_0] [i_3]))))) / (arr_28 [i_9])));
                        var_27 = (min(var_27, (((((!(arr_32 [i_4] [i_0] [i_4] [i_3] [i_3]))) && (arr_4 [i_0] [i_4]))))));
                        var_28 = (arr_5 [i_9] [i_9] [i_9]);
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_14 [i_0] [i_0])));
                        var_29 ^= (arr_22 [i_3] [i_3] [i_9] [i_9]);
                    }
                    var_30 = ((((((arr_31 [i_0] [i_0] [i_4]) >> (((arr_17 [i_4] [i_4] [i_3] [i_3] [i_0] [i_0]) - 8854))))) && (arr_18 [i_4] [i_4] [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
        arr_34 [i_0] = (arr_5 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_31 -= ((825192948 - 7212) / (arr_3 [8] [8]));
        var_32 = (arr_3 [i_10] [i_10]);
    }
    var_33 = (var_3 ^ var_15);
    #pragma endscop
}
