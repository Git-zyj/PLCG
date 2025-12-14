/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [16] [4] [4] = -90;
                    var_13 = ((!((max(-1387509405, ((1 ? (arr_6 [i_1] [i_2] [i_1] [16]) : (arr_5 [i_2] [5] [i_0]))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_14 = (min(12735, 255));
            var_15 = (max((12735 * -8), (max((var_6 / 10), (203 >= 1387509388)))));
            var_16 = 12727;
            var_17 &= (1387509369 || 12739);
        }
        arr_17 [i_3] = (21 ? 96 : 1387509405);
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    var_18 = (min(var_18, ((max(52801, 2147483647)))));
                    var_19 = (arr_15 [i_3]);
                }
            }
        }
    }
    var_20 = ((3163318816 ? 0 : 224));
    var_21 = (var_2 && 12722);
    #pragma endscop
}
