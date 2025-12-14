/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (((var_5 & 2154952972) > ((~((-7967056570962090251 / (arr_0 [i_0] [i_1])))))));

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_13 = min(((((-(-32767 - 1))))), ((((max(-11408, 27939))) - (arr_4 [i_0] [i_1] [i_3 - 1]))));
                        var_14 = (-5387464538460019707 > 6);
                    }
                    for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_15 = 68715282432;
                        var_16 = ((max(var_11, (var_3 / var_7))));
                    }
                    for (int i_5 = 4; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_17 = ((((((max(var_11, var_4)) >> ((min((arr_1 [i_0]), 250)))))) ? (arr_6 [i_1] [i_1] [i_2] [i_5]) : (((((~(arr_4 [i_5 - 1] [i_1] [i_0])))) ^ ((254 ? 9223372036854775807 : 250))))));
                        var_18 = (max((255 > 0), ((var_7 ? var_3 : (((-285937362 + 2147483647) >> (((arr_13 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0]) - 2914272993))))))));
                        var_19 = (((min(var_0, 14308986053344646043)) > (((max(2966, 1865190121435023577)) >> (-11397 + 11414)))));
                    }
                    var_20 = ((-32767 - 1) ? -1113111390 : -3941364456886888514);
                }
            }
        }
    }
    var_21 = var_7;
    var_22 = var_6;
    #pragma endscop
}
