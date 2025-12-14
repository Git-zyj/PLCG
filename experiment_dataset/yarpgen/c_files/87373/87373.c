/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = 1;
                                var_12 = ((~(((min(-47, 1518038250723061052)) + 8411840790742182835))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_13 ^= ((1 ? 1975419838 : (~237)));
                        var_14 *= (arr_0 [i_0] [i_1]);
                    }
                    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_15 = (min(11, 41));
                        var_16 = (max(var_16, (--3)));
                        var_17 = (max(var_17, -0));
                        var_18 = 0;
                    }
                    var_19 = (min(var_19, 0));
                }
            }
        }
    }
    var_20 = ((((((~12148) ? var_1 : (~var_7)))) ? -var_3 : var_5));
    #pragma endscop
}
