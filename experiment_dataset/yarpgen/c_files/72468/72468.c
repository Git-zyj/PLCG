/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_9 ? (!5928620841328264021) : 127));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (((((arr_10 [i_0] [i_0] [i_0] [i_0]) != (arr_8 [i_0] [i_0] [i_0]))) ? (((-55 && 40367) ? (~var_13) : (min(25166, var_13)))) : (!var_11)));
                                var_20 = ((-(((5822925199166529106 >= (var_15 - var_12))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = 1764851192;
                                var_21 = (((-32767 - 1) % var_1));
                                var_22 = 1127974800;
                            }
                        }
                    }
                    var_23 = 18446744073709551613;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                var_24 -= (((((~(arr_19 [i_5 + 1] [i_5 + 1])))) ? 53153 : -5481145606304785115));
                var_25 *= (-1127974800 && 1147198667);
            }
        }
    }
    #pragma endscop
}
