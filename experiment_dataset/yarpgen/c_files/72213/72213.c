/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-6678 ? ((262143 ? (!61) : var_8)) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = -412397424;
                var_11 = (max(3725399466505010131, 0));
                var_12 = (((((-(arr_0 [i_0] [i_1 - 1])))) ? -412397424 : (((arr_0 [13] [i_1 + 1]) ? 2814495302 : 2446541369))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = (max((arr_10 [i_3 - 1] [i_3 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), ((84 ? (arr_10 [i_3 - 3] [i_3 - 3] [i_1 - 1] [i_1 - 1] [i_1 + 1]) : (arr_10 [i_3 - 2] [i_3 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
                            var_14 = (max((min(0, 0)), 248));
                            var_15 = (max(((((max(-412397424, (arr_1 [i_1] [i_2])))) + (min((arr_8 [i_0] [i_1] [i_1]), 1848425926)))), ((((65535 * 528482304) ? -29489 : (arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_16 = (((((max(-6023925925798755157, 158))) ? (min(2446541369, 49933)) : 0)));
                var_17 = max(28150, (min(((5 ? 0 : 0)), (~4095))));
            }
        }
    }
    var_18 = ((((min(48150, var_7))) ? ((min(var_2, 7249844806850427361))) : var_3));
    #pragma endscop
}
