/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (((arr_0 [i_0 + 1]) ? (((arr_4 [i_0] [i_1]) ? (18446744073709551615 >= 11220) : (arr_3 [i_1]))) : ((((0 || (arr_5 [i_0] [i_0] [4]))) ? (-2526 - 8758331699539150527) : (((-8758331699539150528 ? (arr_5 [9] [i_0] [2]) : (arr_1 [i_0]))))))));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    arr_11 [4] [i_1] [i_1] [i_2 - 1] = 8745;
                    arr_12 [i_0] = 1;
                    arr_13 [10] [i_1] = (((((-8758331699539150522 ? -223605106486885245 : (((arr_8 [i_0] [i_0] [i_1] [i_2]) ? (arr_3 [i_0]) : (arr_2 [i_0])))))) - (((((18446744073709551615 ? -8758331699539150524 : (arr_9 [i_1] [i_1])))) ? (12773085144698973469 >= 8758331699539150527) : (arr_9 [i_0] [i_2 - 1])))));
                    arr_14 [i_0] [i_0] [i_1] [i_2 - 1] |= ((-8758331699539150527 | (arr_2 [12])));
                }
                arr_15 [i_1] [i_0] [i_0] = (arr_0 [i_0]);
                arr_16 [i_0] [i_0 + 1] [i_1] = (((((((((arr_5 [i_0 + 1] [i_0] [i_1]) ? 18446744073709551604 : (arr_5 [i_0] [i_1] [i_0])))) ? (((arr_8 [i_0] [i_1] [i_1] [i_1]) * (arr_10 [10] [i_1] [6] [i_0]))) : ((((arr_2 [i_0]) ? (arr_7 [i_1]) : -1092471876)))))) ? ((9112219020607348301 ? (((arr_9 [i_0] [i_1]) ? (arr_7 [1]) : 8758331699539150537)) : (-1455444348711920131 && -1))) : (arr_4 [i_1] [i_1])));
            }
        }
    }
    var_19 = ((9055300164347192063 >> ((((var_4 ? var_2 : (var_3 + var_12))) - 1950697533))));
    var_20 = var_17;
    #pragma endscop
}
