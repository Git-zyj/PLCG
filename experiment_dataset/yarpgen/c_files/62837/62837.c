/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((min(1870126827, var_7))) || var_16))) % var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (var_7 / var_6);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 = (arr_4 [i_3] [11]);
                            var_23 = (((+-1870126816) == (max((arr_7 [i_3] [17] [i_1] [i_1] [i_0]), (((var_16 ? var_5 : var_5)))))));
                            arr_10 [i_2] [i_2] [i_2] [17] [17] [i_3 - 1] = ((((min((-7106217572745367912 < 9830121704347528697), (((var_15 + 2147483647) << (((((arr_1 [i_0]) + 1419606451)) - 6))))))) ? var_7 : var_11));
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_0] = (((max((arr_7 [12] [i_1] [i_1] [7] [i_0]), (arr_1 [i_0]))) / (((min((arr_6 [i_1] [i_0] [i_0]), (arr_6 [i_0] [i_1] [i_1])))))));
                var_24 = ((((min((arr_5 [i_0] [i_0] [i_1]), var_19))) > (arr_6 [i_0] [i_0] [0])));
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
