/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((-(((0 >> (2147483647 - 2147483623))))));
    var_12 = var_0;
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 -= ((-(max((arr_0 [i_1]), var_10))));
                var_15 = (min(var_15, (264241152 != var_5)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 = (min((((var_6 ? ((((arr_8 [i_0] [i_0] [i_0] [i_2] [5] [i_3]) < 32766))) : (((-2147483647 - 1) % 121))))), ((-(min(23, 121))))));
                            arr_11 [i_0] [i_0] [1] = 134;
                            arr_12 [1] [1] [i_3] [i_3] [i_0] [i_3] = (((((arr_3 [i_1]) || 1))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_17 = (((16 ? (1 ^ -15560) : 0)));
                                var_18 = (((max(16384, 32766)) < 126));
                                var_19 = (1 ? ((32782 << ((((14 ? 4294967295 : 1)) - 4294967265)))) : (arr_0 [i_0]));
                                var_20 = max(((((((arr_15 [i_2]) < 12))) * 129)), (arr_2 [i_3] [i_1]));
                                arr_16 [i_0] [i_0] [i_0] = (((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (max(var_0, (arr_15 [i_0])))))) ? ((-421045789 ? var_4 : (!12))) : 1264128680);
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_21 = 143;
                                arr_20 [i_0] [i_3] = ((51 ? ((-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((222813598 ? (arr_15 [i_0]) : (-722744271 / 57)))));
                                arr_21 [i_0] = (var_4 > -var_7);
                                var_22 = var_6;
                            }
                            var_23 = (max(((((47910845 >> (-421045796 + 421045807))))), (arr_5 [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_24 |= var_8;
    #pragma endscop
}
