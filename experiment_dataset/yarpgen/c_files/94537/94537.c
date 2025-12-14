/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (-2147483647 - 1);
        var_16 = (max(((-var_6 ? (2147483647 && -122) : ((-2 ? 104 : -51)))), (min((arr_1 [i_0]), var_4))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_11 [8] [8] [i_0] [i_2] = var_7;
                arr_12 [i_0] [i_1] [3] [i_0] = (((((var_8 >= (arr_5 [i_0] [i_0])))) ? ((-((max(-124, 201))))) : (21907 < var_7)));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    arr_19 [i_0] [i_0] [i_0] [i_1] [2] [i_0] = ((var_8 ? (arr_18 [i_0 + 3] [1] [i_4 + 1] [i_4]) : (arr_5 [i_0] [i_1])));
                    var_17 = (-2147483647 - 1);
                }
                var_18 = (((((-(arr_3 [i_0])))) || 1));
            }
            var_19 = (((min(0, ((var_5 * (arr_2 [i_0]))))) > (((-(arr_2 [i_0]))))));
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_20 = (((((max(var_14, (arr_1 [i_0]))))) * ((-((-(arr_23 [i_0] [i_0])))))));
            arr_24 [i_0] [11] [i_0] = (((!var_12) ? (min((arr_7 [i_0]), ((-(arr_2 [i_0]))))) : (arr_18 [i_0] [i_5 + 1] [i_5 + 1] [i_5])));
        }
    }
    var_21 = var_3;
    #pragma endscop
}
