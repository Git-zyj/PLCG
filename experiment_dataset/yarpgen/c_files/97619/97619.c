/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_10);
    var_20 &= var_14;
    var_21 = 24576;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_22 = (min(323351631371911325, (((((((arr_4 [i_1] [i_1] [i_0]) < 8004453643207425140))) ^ (arr_4 [i_0] [i_0] [i_0]))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_23 |= (min(((-61 ? ((-1279403994 ? -79 : 8004453643207425154)) : -8004453643207425155)), (arr_10 [i_2])));
                                arr_14 [i_0] [1] = 1;
                                var_24 = ((((((arr_0 [i_1] [i_0]) + (arr_3 [i_4 - 2])))) ? ((8004453643207425115 ? 8004453643207425140 : 1)) : ((92 ? -1 : 152))));
                                var_25 = ((-(((arr_7 [i_0] [i_4 - 1] [i_1] [i_4 - 2]) ? (arr_7 [0] [i_2] [i_1] [i_0]) : (arr_4 [1] [1] [i_3])))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_26 = (((arr_8 [7] [i_2] [i_2] [i_5]) ? (arr_11 [10] [i_2] [i_2] [i_1] [i_1] [i_0]) : -1073741824));
                        var_27 -= max(1, 255);
                    }
                }
            }
        }
    }
    #pragma endscop
}
