/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_14 = ((7654339923656800346 ? (((!-9223372036854775798) ? (max(-9223372036854775795, (arr_6 [i_0] [i_1]))) : 108)) : (((10879 ? 155 : 503316480)))));
                                var_15 = (((((~(min(148, -43663081))))) ? 9223372036854775797 : 984852597541589356));
                            }
                            var_16 = (arr_3 [i_0] [i_1]);
                            var_17 = (max(var_17, ((((((841127241 ? 248 : -28550)) & (arr_14 [i_3])))))));

                            for (int i_5 = 1; i_5 < 24;i_5 += 1)
                            {
                                var_18 += (max(-32723, -5387753632254125415));
                                var_19 = (arr_11 [i_0] [i_1] [i_2] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_12;
    var_21 = var_6;
    #pragma endscop
}
