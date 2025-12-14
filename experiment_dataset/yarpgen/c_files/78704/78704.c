/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 *= (min((1 | 29826), ((0 ? 536870911 : 2147483647))));
        arr_3 [i_0] = (~3339663910);
    }
    var_19 -= (((((-((28 >> (61 - 42)))))) * -1658725157826871810));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_20 ^= (-120 == 0);
                        var_21 = (max(var_21, (-30 != -1)));
                        var_22 += ((-1658725157826871810 ? (-2147483647 - 1) : 29826));
                    }
                }
            }
        }
        arr_13 [i_1] [i_1] = (1 | 1658725157826871810);
    }
    #pragma endscop
}
