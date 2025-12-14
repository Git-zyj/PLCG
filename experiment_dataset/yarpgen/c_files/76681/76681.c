/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (((var_0 <= var_13) - -6925));
    var_16 = ((((min(var_3, 17749984056787197867))) ? (var_8 ^ 17749984056787197867) : 1926201976));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 ^= (((min(696760016922353748, ((min(94, (arr_0 [i_1] [i_1])))))) - (arr_0 [i_0] [i_1])));
                    var_18 = ((-((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : 12)))));
                    var_19 = ((!((((arr_4 [i_2 - 2]) - (arr_6 [i_2 + 2] [i_0] [i_1] [i_2 + 2]))))));
                    var_20 = (16432359768466602419 == -104);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                arr_11 [i_4] [i_4] [i_3 - 1] = (arr_7 [i_4] [i_3]);
                var_21 = (min(var_21, ((((-4 % 17965391601812240898) != ((((arr_7 [i_3 + 2] [i_3 + 1]) ? (arr_8 [i_3 - 1]) : (arr_8 [i_3 - 1])))))))));
            }
        }
    }
    #pragma endscop
}
