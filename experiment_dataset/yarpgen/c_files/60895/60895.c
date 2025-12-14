/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 |= (!(((max((arr_4 [i_0] [i_0 + 1] [i_0]), (arr_3 [1]))))));
                var_20 = (((((0 | (59119834 | 1)))) | (((min((arr_2 [i_0]), 1821697178)) | ((max(1, (arr_4 [i_0 + 1] [i_0] [i_0 + 1]))))))));
            }
        }
    }
    var_21 |= ((3261722998909923363 ? -1 : 1));

    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_22 ^= (((-59119835 / 1) ? ((1 ? 1 : 125)) : (max((arr_4 [i_2] [i_3 + 1] [i_2]), (arr_13 [i_2] [i_3 - 2] [i_3 - 2])))));
                                arr_19 [i_4] [i_3] [i_4] [i_5 + 3] [i_5 + 3] = ((-(arr_6 [i_2])));
                            }
                        }
                    }
                    var_23 ^= (min((((arr_9 [i_4]) - (arr_9 [i_3 - 1]))), var_3));
                }
            }
        }
        var_24 ^= ((-123 && ((((((arr_12 [i_2] [i_2] [i_2] [i_2]) ? 49994622 : (arr_4 [i_2] [i_2] [i_2]))) - 3683480088)))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] = ((((((~(~-32759))) + 2147483647)) >> (((((arr_4 [i_7] [i_7] [i_7]) ? 59119861 : (1 | -4177749393335272237))) - 59119845))));
        var_25 |= arr_0 [i_7];
    }
    var_26 = (((var_11 ? (var_15 + var_6) : (~var_4))));
    var_27 = (min(var_27, var_1));
    #pragma endscop
}
