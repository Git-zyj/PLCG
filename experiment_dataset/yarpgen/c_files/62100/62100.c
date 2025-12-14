/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((((var_1 ? var_5 : var_11))) ? (~var_7) : (3582293539194120044 > 1))), var_9));
    var_15 |= -var_13;
    var_16 = (~var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = ((~(arr_2 [i_0])));
                    var_18 = ((((((((arr_7 [24] [1] [i_2]) ? var_6 : (arr_0 [i_0]))) / (1 << 15)))) ? ((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_12))) : (((((arr_3 [i_0]) <= (arr_7 [17] [17] [8]))) ? (arr_3 [i_0]) : (((arr_0 [i_0]) - (arr_1 [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] = ((-((var_13 ? 1342467688 : -9))));
                        var_19 = (max(var_19, (arr_0 [4])));
                        var_20 |= ((1 & (arr_9 [i_1] [i_1 - 1] [8])));
                        var_21 = (((((1 ? -3582293539194120042 : -18))) || (arr_8 [i_0] [i_2])));
                    }
                    arr_13 [i_0] [i_0] = ((((min((min((arr_9 [i_0] [i_1] [i_0]), var_6)), ((max(var_13, (arr_0 [i_0]))))))) ? var_6 : 1));
                    arr_14 [2] [i_0] [i_1] [15] = (arr_10 [i_0] [i_0] [i_1 + 1] [9] [4] [i_2]);
                }
            }
        }
    }

    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        arr_17 [i_4] |= arr_4 [18];
        var_22 |= (arr_1 [12]);
        arr_18 [i_4] [i_4] = ((!((max(var_13, (arr_8 [10] [10]))))));
    }
    #pragma endscop
}
