/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~32761);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = ((((((var_7 << var_10) ? ((var_12 << (((arr_3 [i_0] [1] [6]) - 1744340563)))) : var_5))) ? (((!(arr_1 [i_1] [i_0])))) : 224474181));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_2] &= (max((((((var_12 ? (arr_2 [i_0]) : 1))) ? (arr_1 [i_0] [i_1]) : (((arr_1 [i_0] [i_0]) * var_13)))), ((max((32753 / 224474181), (arr_7 [i_0] [i_0] [i_0]))))));
                    var_16 = (max(var_16, var_12));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_13 [i_3] [i_3] = (((var_1 + 2147483647) << (var_8 - 38285)));
                    var_17 = (min(((1972052810 ? (arr_5 [i_3]) : var_6)), ((((!var_7) < var_12)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            {
                var_18 = (((max(var_5, (arr_18 [i_5 - 2] [i_5 - 1] [i_5]))) | (arr_18 [i_5 - 1] [i_5 + 1] [i_5 - 1])));
                arr_19 [i_4] [i_5] = (arr_18 [1] [1] [i_5]);
                var_19 = -var_1;
                var_20 = var_13;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                var_21 = (max(((((!-32761) > (arr_15 [i_7])))), (min(-11990, (~var_9)))));
                var_22 = (max(var_22, ((min((min(1, 18446744073709551615)), ((min(var_6, (arr_0 [i_6])))))))));
            }
        }
    }
    #pragma endscop
}
