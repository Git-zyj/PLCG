/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((-1766132086 | -1) + 2147483647)) << (var_11 + 561266203)))) ? (((var_5 + 2147483647) << (((((min(-386854565, var_2)) + 386854596)) - 31)))) : 1766132088);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] = arr_4 [i_0] [i_0];
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [6] |= max(1784245044, 1940747652);
                            arr_12 [i_0] = ((!((max(1766132086, var_8)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = ((((-(var_17 || 1766132086))) >= ((-1779217707 ? -1802945188 : 1766132086))));
                            arr_18 [i_0] [i_1] [i_0] [i_5 - 1] = (!-1570607765);
                            var_21 = (max(var_21, 2147483628));
                            var_22 = 1293817942;
                            arr_19 [i_5] [i_1] [i_1] [i_1] |= -38238219;
                        }
                    }
                }
                var_23 = (min(var_23, (min((min((var_8 % var_9), (((!(arr_2 [i_0])))))), ((~(max(1174604634, -383363801))))))));
                var_24 = (min(((((((-2147483647 - 1) != var_1))) <= var_10)), ((var_1 == (arr_14 [i_0 + 1])))));
                arr_20 [i_0] [i_1] [i_1] = (~((var_14 ? var_4 : var_8)));
            }
        }
    }
    var_25 = ((((min(var_17, -1779217697))) < var_3));
    #pragma endscop
}
