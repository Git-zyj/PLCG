/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = (((min(9223372036846387200, 9165271813704557557))));
    var_19 = (min(var_19, ((max(((min(9281472260004994058, 9281472260004994058))), (((max(var_4, var_9)) - (max(12823534546915209969, var_14)))))))));
    var_20 = (9281472260004994058 * 0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = ((+(min((arr_5 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_22 = (13 - (((9281472260004994058 / 6826240529271560683) ? (arr_5 [i_0] [i_1] [i_0]) : (max(-1, -3)))));
                            var_23 = (min(var_23, (((((var_3 ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : 9165271813704557557)) * (arr_7 [i_3] [i_2] [i_0] [i_0]))))));
                            var_24 = (min(var_24, (((min((min(2470167474743606124, 9165271813704557557)), (min((arr_4 [7] [i_1] [i_1]), var_14))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
