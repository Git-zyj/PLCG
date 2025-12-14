/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((!(var_9 && var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_16 = (min(((var_5 ? (arr_8 [i_0] [i_1] [i_1]) : 26)), ((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 + 1]))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_13 [6] [i_1] [i_1] = (min(var_14, ((~(((255 < (arr_1 [i_0]))))))));
                        var_17 = var_6;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [i_4] = (min((min(((min((arr_11 [i_4] [i_2] [i_1] [i_0]), (arr_11 [i_0 - 2] [i_1] [i_2] [i_4])))), (((arr_2 [i_0 - 1] [i_1]) >> (var_13 - 24237))))), ((87328456 ? 10320 : 254))));
                        arr_17 [i_1] [i_1] = ((-935648222 ? (((!(((var_1 ? var_1 : var_1)))))) : (((((min(935648222, var_0))) || ((min(var_13, (arr_5 [i_0])))))))));
                    }
                    arr_18 [i_1] [i_1] = ((~((935648209 ? (arr_12 [17] [i_1] [i_1] [3]) : 54417))));
                    arr_19 [i_1] = ((((((((arr_4 [9]) - (arr_15 [17] [i_1] [i_1] [i_1])))) ? var_0 : (13509311376085533042 + 11103))) < ((((((!(arr_8 [i_0] [i_0] [i_2])))) >> var_8)))));
                }
                var_18 = var_6;
                var_19 = var_3;
            }
        }
    }
    var_20 = (min((243 > 54432), var_11));
    #pragma endscop
}
