/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = -806;
                var_16 = (max(1118670507, -791));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [15] = ((+((0 ? (15100 / 530) : (~1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] [i_4] = (!0);
                                var_17 = (max(var_17, (((min((3766836112 <= var_1), var_7))))));
                                var_18 = (min(var_18, ((max(((((min(-1974908392, 806))) ? 3971471587 : (max(var_7, -8945858888909643142)))), (((!((((arr_7 [i_4] [i_4] [i_4] [i_1] [i_4]) ^ -1678250560)))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 += ((((min(var_12, 66))) ? (min((min(15100, -3457700229011902061)), 83)) : (333612482 || 1930412111)));
    #pragma endscop
}
