/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78580
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
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = ((((var_17 | -1006632960) + 9223372036854775807)) << ((((+(((arr_7 [i_0] [i_0]) ? (arr_3 [i_0] [i_2] [i_3]) : var_7)))) - 2973)));
                            arr_10 [i_0] [i_1] [i_0] [i_3] = (~var_10);
                            arr_11 [i_0] [i_2] [i_1] [i_0] = (((((min(220, 22322)))) & (arr_3 [i_0] [i_0] [i_0])));
                        }
                    }
                }
                var_19 = (arr_0 [i_0]);
            }
        }
    }
    var_20 -= (max(((~(var_12 || 22312))), ((((var_1 && var_15) >= (max(-1742664179, -4501238460641028300)))))));
    #pragma endscop
}
