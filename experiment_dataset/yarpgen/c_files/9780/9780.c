/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (((!18) & (!var_9)));
                                var_14 = ((~(((-82 ^ 5059668109284105294) ? ((-8 | (arr_1 [i_0]))) : 0))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [4] = -25684;
                                arr_12 [i_3] = ((((min(9046268644768623628, 17080627465899067739))) ? (((-1337172810706919432 ? 82 : 81))) : (arr_4 [i_1 - 2] [i_1])));
                                var_15 = (min(var_15, (((((-(var_6 - 2147483647))) + (0 + 1))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] = (-18 | 12514600725981232566);
                    var_16 = ((((((((var_9 && (arr_7 [i_0] [i_1] [i_2] [3])))) / ((-(arr_6 [11])))))) ? (((((var_4 ? 1 : var_0))) + ((1 ? 56 : 1366116607810483876)))) : (((17080627465899067738 ? 50866 : 713792185)))));
                    var_17 = (min((max((max(9046268644768623631, 508314594)), ((((arr_4 [i_1] [1]) ? var_6 : (arr_2 [i_1] [i_1])))))), ((max(var_8, 65535)))));
                }
            }
        }
    }
    var_18 = var_11;
    var_19 = var_1;
    var_20 ^= ((var_5 ? ((((58724 | var_5) + 45))) : -2669306606033662970));
    #pragma endscop
}
