/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max((min(42, var_6)), (1 - 10548037466156735657))), var_17));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 ^= (6315997220370065494 * 7898706607552815959);
                                arr_14 [i_0] [i_3] = (-23303 != 7898706607552815959);
                                arr_15 [i_3] [i_3] [i_0] = (((0 ^ 1) & (((arr_0 [i_0]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1])))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_2] [i_2] = (((var_5 <= 7) ? var_15 : 2441258165627437443));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    var_22 = (min(var_22, (arr_5 [i_5 - 1] [8])));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_23 -= (arr_19 [i_7] [i_6] [i_5 + 1] [i_0]);
                                var_24 *= (((arr_24 [i_6 + 1] [1] [i_6 - 1] [i_6 - 1] [i_6 - 2]) > (arr_24 [i_6 - 2] [i_6] [i_6] [i_6 - 2] [i_6 - 2])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 8;i_10 += 1)
                        {
                            {
                                var_25 = ((var_12 ^ (arr_20 [i_0] [i_1] [i_1 + 3] [8] [6] [i_1])));
                                arr_32 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = (((212 || -23281) + ((var_10 ? (arr_20 [i_0] [i_1] [i_8] [i_10] [i_10 - 1] [i_10]) : (arr_23 [i_1] [i_1 - 2] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (!var_7);
    var_27 = (max(var_27, 721166813));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 21;i_12 += 1)
        {
            {
                var_28 *= (min(12, (arr_34 [21] [i_12 - 1])));
                var_29 -= (((((~(arr_34 [i_12 - 2] [i_12 - 1])))) != 10548037466156735657));
                arr_37 [i_11] [i_11] = (((((10548037466156735651 < 2013766487) ? (var_19 || var_6) : (((arr_36 [i_11] [i_12 + 3]) ? 22049 : (arr_36 [i_11] [3])))))) ? (max((-46721457 >= 1294209447), var_17)) : (((arr_36 [i_11] [i_12 - 1]) ? 0 : (arr_36 [i_11] [i_12 - 2]))));
            }
        }
    }
    #pragma endscop
}
