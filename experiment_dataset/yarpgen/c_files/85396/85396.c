/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_10 <= 9570577322857635426);
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] |= (!-13430251396307544687);

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] = arr_9 [i_1] [i_1];
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (17815569097296842231 ? (max((arr_9 [i_1 + 3] [i_1 - 2]), (arr_9 [i_1 + 1] [i_1 + 4]))) : (min((~631174976412709384), -0)));
                    var_17 = (((min((!5681191299122969706), (((arr_3 [i_2] [i_2 + 2]) & 15616181051355033765)))) > 10852428228392373048));
                }
                for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    arr_16 [i_3] [i_3] [i_3 + 1] [i_3] = (-(max(17815569097296842231, (max(631174976412709393, (arr_14 [i_3] [i_3] [i_1 + 2]))))));
                    var_18 = 11;
                }
                for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_4] [i_0] [i_4 + 1] [i_5] = (min((((!(arr_14 [i_4] [i_1 - 2] [i_1 + 3])))), (arr_14 [i_4] [i_1 + 4] [i_4])));
                        arr_22 [i_0] [i_4 - 2] [i_4] = min((~10751438662332679594), 22);
                        var_19 = (((((!((min(16, 10852428228392373048))))))) | (arr_14 [i_4] [i_1 + 4] [i_4]));
                    }
                    var_20 = (min(var_20, ((~((-(arr_15 [i_1 - 2] [i_1 - 2])))))));
                    var_21 += (-(arr_1 [i_0]));
                }
                var_22 = ((~(!2)));
            }
        }
    }
    #pragma endscop
}
