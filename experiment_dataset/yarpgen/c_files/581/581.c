/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(-31872, var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        arr_10 [8] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((-(arr_5 [i_1 - 1] [i_1] [i_3 - 3] [i_3])))) ? (((arr_4 [i_1] [i_2 - 1]) ? 84 : 31886)) : -13059));
                        arr_11 [0] [i_1] = ((((((-(arr_1 [i_2])))) ? (arr_2 [i_1]) : (var_10 | 13071))));
                    }
                    arr_12 [i_0] [i_0] [i_2] = (max((min((((arr_8 [i_0] [2] [i_0] [i_2 - 3]) ? 92 : 0)), (!7520904516964747656))), (((~4294967295) ? (!65535) : (arr_8 [i_1] [i_1] [i_0] [i_1])))));
                    arr_13 [i_0] [i_0] [i_2] = (max((((min((arr_1 [i_0]), (arr_7 [i_0] [i_1] [i_1]))) ^ (arr_1 [i_1 - 1]))), ((((arr_0 [i_1 - 2] [i_1 + 2]) != -13059)))));
                    arr_14 [i_0] [i_1] = ((var_1 ? 13075 : ((var_3 ? var_3 : (arr_1 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
