/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [i_0 - 1]) << (((arr_0 [20]) - 55))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_7 [4] [i_1] [i_0] = (((min((min(-2062044862, 32713)), 32705)) & 1126465692));
            arr_8 [i_1] &= (((((((min((arr_6 [i_0 - 1] [i_0 - 1] [i_1]), (arr_0 [i_0])))) ? ((min((arr_4 [i_0]), var_12))) : ((((arr_0 [i_0 - 1]) == (arr_4 [i_1]))))))) || (arr_3 [1] [1])));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                arr_14 [i_3] [i_2] [i_0 + 1] = ((((-802941335 + 2147483647) << (arr_4 [i_2 - 2]))));
                arr_15 [1] [0] [i_3] [1] = (min(var_6, (max((min((arr_3 [0] [i_2]), (arr_3 [18] [i_0]))), (((var_5 + (arr_9 [17] [17] [17]))))))));
            }
            arr_16 [i_0 - 1] [5] = var_14;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_19 [6] [i_4] = (arr_18 [12] [12]);
            arr_20 [8] [16] = arr_3 [1] [i_4];
        }
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5 - 1] [i_5] &= (((max((arr_6 [16] [16] [i_5]), (((arr_17 [10] [14]) * (arr_22 [i_5] [i_5])))))) && (arr_4 [i_5]));
        arr_24 [i_5] = (((arr_4 [i_5]) ? var_11 : (arr_17 [4] [4])));
        arr_25 [i_5] = (min((((arr_1 [3]) / (arr_17 [4] [4]))), ((((arr_6 [7] [i_5] [i_5]) < (arr_5 [i_5 + 1]))))));
        arr_26 [16] [i_5] = (min(var_10, (arr_21 [i_5])));
    }
    #pragma endscop
}
