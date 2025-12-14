/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [1] [i_2] = (arr_3 [1]);
                    arr_7 [i_0] [i_1] [i_2] = (arr_3 [i_0]);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 += (((((~(((arr_8 [0]) * var_16))))) ? ((min((arr_1 [i_0] [i_0]), (((arr_3 [i_3]) <= -127))))) : (((((-7 + 2147483647) >> (var_10 - 756023765))) << 1))));
                        arr_10 [i_3] [i_2] [i_3] = (arr_2 [i_3] [i_3] [i_2]);
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (((arr_4 [i_1 - 1]) >= (((arr_3 [i_0]) ? (min(var_3, (arr_2 [i_3] [i_1] [i_3]))) : (4294967295 >= 24050)))));
                        arr_12 [4] [i_3] = (max(((var_5 << (((((arr_2 [i_0] [i_0] [i_0]) ^ (arr_9 [i_2] [i_1]))) - 7792307663670528625)))), (((((var_3 ? var_12 : (arr_1 [i_0] [i_1])))) ? (((!(arr_1 [i_3] [i_3])))) : var_5))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_15 [i_2] [i_2] &= ((825924937 ? 825924937 : var_14));
                            arr_16 [i_3] [i_3] [i_2] [i_1] [i_3] = (!var_4);
                            var_20 = (((((1 ? 34983 : 60030))) ? (arr_13 [i_3] [i_1] [i_4] [i_3]) : 3003));
                            arr_17 [i_3] = (((arr_0 [i_1 - 1] [i_1]) ? (arr_0 [i_1 - 1] [i_0]) : -124));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
