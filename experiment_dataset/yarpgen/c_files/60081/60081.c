/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((!(var_14 == 2585013470)))), (max(var_15, ((var_15 ? var_8 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                var_18 = -var_11;
                                var_19 = (max(var_19, (arr_5 [i_3] [8] [i_3])));
                                var_20 += (min((((arr_1 [i_3]) ? (arr_7 [12] [i_1] [i_1] [i_3] [i_3] [14]) : var_9)), 12));
                            }
                            var_21 = (84 ? 7168 : 2381684145);
                        }
                    }
                }
                var_22 = (min(var_22, (((((((arr_12 [i_1] [13] [i_0]) ? 933747177 : (arr_8 [i_1])))) ? (min((max(3371720498, (arr_4 [i_0] [12] [18]))), ((((var_3 + 2147483647) << (((arr_2 [i_1]) - 25))))))) : (((((((arr_7 [i_0] [i_0] [i_0] [i_0] [14] [i_1]) % (arr_0 [4] [i_1])))) ? (arr_11 [i_0] [i_0] [i_1]) : var_2))))))));
                arr_13 [i_0] [i_1] [i_1] = arr_10 [i_0];
                var_23 *= 2950178966;
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] [5] [i_5] [i_5] [i_6] = 2950178966;
                            arr_22 [i_1] [i_0] = (max(-35, 1344788330));
                            var_24 = (max(var_0, ((3105867887 + ((var_0 ? var_3 : (arr_16 [i_0] [i_1])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
