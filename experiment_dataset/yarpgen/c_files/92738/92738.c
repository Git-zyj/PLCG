/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_1] [i_0] = ((((((-26983 + 2147483647) << (19932 - 19932))) != 62394)));
                                var_20 = -16384;
                                var_21 = (max(var_8, 26));
                                var_22 = var_15;
                            }
                        }
                    }
                }
                var_23 = (max(((min(((12766 ? 3130 : 28613)), 62407))), (max(4294967295, 43))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] [i_6] [i_5] [i_6] [i_0] [i_1] = (13567207630424230304 ^ 1);
                            arr_22 [i_0] [i_1] [i_1] [i_5] [i_0] [i_6] = (((var_4 == ((9223372036854775798 ? (arr_0 [i_0] [i_6]) : (arr_8 [i_0] [i_1] [i_1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_24 *= (((min(((28804 ? 950357598 : 25720)), (~var_12))) == (var_17 == 4294967295)));
                            var_25 = (max(4294967268, (max(2837568143, ((1975650393 ? 4294967282 : var_10))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (((((((65510 ? var_13 : var_6))) ? -2007508870996759773 : var_14)) + var_8));
    #pragma endscop
}
