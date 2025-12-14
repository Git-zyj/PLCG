/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((2917044946 ? var_10 : -1537632795))));
    var_13 = ((+(((-22307 > 1636695976961447096) << (var_3 - 63646)))));
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = 22324;

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_16 = (max(var_16, var_8));
                            arr_11 [i_4] [i_3] [i_2 + 1] [i_1] [i_4] = (min(22306, 16));
                            var_17 = ((((max((arr_5 [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 1]), 503316480))) ? (((79 + (1 == 18)))) : (arr_5 [i_4] [i_3] [i_2] [i_1 - 1])));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_15 [i_0] [14] [i_0] [3] [14] = (((((((((arr_9 [14] [8] [i_2] [i_5] [i_5]) & (arr_14 [i_0] [i_1] [i_1] [i_1] [i_3 - 2] [i_5])))) >= (((arr_7 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [5] [3] [i_3] [i_5] [i_3]) : (arr_2 [i_0]))))))) & (arr_0 [i_0]));
                            arr_16 [i_3] [i_3] [i_2] [i_1] [i_0] = (arr_8 [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_3 - 2]);
                            var_18 = 3070281165;
                        }
                        arr_17 [i_0] [i_0] [i_0] [8] [i_0] [i_0] = (((((arr_4 [i_1 + 2] [i_0] [i_0]) > (arr_4 [i_1 - 1] [i_1 + 2] [i_1]))) ? 22302 : (arr_12 [15] [i_1 + 1] [i_1])));
                        var_19 = (arr_4 [i_3 + 1] [i_1 - 1] [i_2 - 1]);
                        var_20 |= 49;
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_2 + 1] = (max(65513, 127));
                    arr_19 [i_0] [1] [i_2] = ((-12826 ? 127 : (max(8257536, -85))));
                }
            }
        }
    }
    var_21 = (max(var_21, (((((48 ? -1 : 2147483644))) ? (268434944 > 7157498094722104292) : ((3070281164 ? (max(578259599, -64)) : var_1))))));
    #pragma endscop
}
