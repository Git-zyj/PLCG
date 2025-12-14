/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_5 ^ var_2);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (max(var_16, (((-(arr_1 [0] [i_0]))))));
        var_17 = (max((((!(arr_2 [i_0])))), (max((arr_2 [i_0]), (arr_2 [i_0])))));
    }
    var_18 = var_10;

    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_19 |= -3328;
            var_20 = (max(var_20, (arr_2 [24])));
            var_21 = (((((arr_2 [i_2]) ? ((-(arr_0 [i_1]))) : (((var_13 / (arr_2 [i_2])))))) <= (arr_3 [i_1] [i_1])));
            var_22 = (arr_4 [i_1] [i_1]);
        }
        arr_7 [i_1] |= (-8826496963485500864 < 12721151478277746145);
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_17 [i_5] [i_5] [i_3 + 1] [i_3 + 1] [i_1] = var_9;
                        arr_18 [i_1] [i_1] [i_3 - 2] [5] [0] = (13039 ? (arr_9 [i_1] [15]) : (~49));
                        arr_19 [i_1] [i_3 + 1] [i_3 + 1] [i_4] [i_4] [i_5] = (((!var_9) ? (!var_9) : (max(((max(var_0, var_14))), (12721151478277746154 + var_13)))));
                    }
                }
            }
        }
        var_23 = 12721151478277746154;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_24 = (min(((((max(var_10, (arr_0 [i_6])))) ? (arr_1 [24] [i_6]) : ((-(arr_3 [i_6] [i_6]))))), 5725592595431805454));
        arr_22 [i_6] = ((((arr_16 [13] [i_6] [i_6] [i_6]) ? (arr_20 [i_6] [i_6]) : (((arr_2 [8]) | (arr_5 [i_6] [i_6] [i_6]))))));
        arr_23 [i_6] [i_6] |= 5725592595431805471;
    }
    var_25 |= ((-((min(var_9, var_12)))));
    #pragma endscop
}
