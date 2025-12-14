/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = ((((min(6917529027641081856, ((max(5943, 5943)))))) ? 10888488571185315563 : (((max(20305, -20292))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_0] [i_0] [19] = (arr_11 [i_0]);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [7] = 1;
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [4] [i_1] = -26639;
                    arr_17 [i_0] [i_0] [i_0] = (max((((min(24, 0)) >> (-5944 + 5956))), 32));
                }
            }
        }
    }
    var_12 = (min((min(((-20269 ? 65535 : -90)), 112)), var_5));
    var_13 = 11;
    #pragma endscop
}
