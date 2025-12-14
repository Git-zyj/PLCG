/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_12 += ((((+(((arr_2 [7]) ? (arr_4 [12] [i_0]) : (arr_2 [i_0]))))) == (arr_5 [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, (arr_1 [i_0])));
                        var_14 = ((+(((arr_9 [i_3]) << (((arr_9 [i_1]) - 953512088))))));
                        var_15 = ((arr_8 [i_0] [11] [3] [3]) ? (((((var_9 ? (arr_5 [8]) : (arr_7 [1])))) ? (arr_6 [8] [3] [3]) : var_11)) : (arr_4 [2] [2]));
                    }
                }
            }
        }
        var_16 = (((~var_5) ? var_10 : (max(var_1, ((max(0, (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [0] = (((min((((var_0 ? (arr_10 [i_4] [i_4] [10] [i_4] [i_4]) : var_3))), (((arr_13 [i_4]) ? (arr_8 [10] [5] [i_4] [i_4]) : (arr_13 [i_4]))))) << (((((arr_1 [i_4]) % (arr_6 [i_4] [i_4] [2]))) + 59))));
        var_17 = (((~1) ? -7885570977114432585 : (((arr_12 [i_4]) ? -5059065656154027442 : 0))));
        var_18 = max((((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]) >= (((arr_7 [3]) ? var_4 : (arr_13 [i_4]))))), (((arr_12 [i_4]) > (!var_11))));
        var_19 = (((min(7040325375344517139, -9172377634735804388)) >= ((((arr_6 [i_4] [i_4] [13]) + var_3)))));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        var_20 = ((((((max(var_8, var_4))) || ((((arr_22 [i_7] [i_8]) ? (arr_16 [4] [5]) : var_10))))) || ((max((arr_21 [i_6] [2]), (((arr_19 [i_5] [i_5] [i_7] [i_5]) ? (arr_18 [11]) : (arr_19 [i_5] [i_6] [i_7] [i_5]))))))));
                        arr_23 [i_5] [i_5] [i_5] [i_5] [2] [16] = arr_17 [17];
                    }
                }
            }
        }
        arr_24 [i_5] = var_10;
        var_21 -= (min(((((min((arr_17 [i_5]), (arr_15 [i_5] [i_5])))) ? 975 : ((((!(arr_18 [i_5]))))))), (!9352)));
    }
    var_22 = (min(var_22, var_10));
    #pragma endscop
}
