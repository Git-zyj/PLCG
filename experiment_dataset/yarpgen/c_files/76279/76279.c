/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2147483647;
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_0;
        arr_3 [i_0] [i_0] = ((((((max((arr_0 [i_0]), var_8))) & (arr_0 [i_0]))) ^ (((((~var_8) + 2147483647)) << (((arr_1 [i_0] [i_0]) - 259852299))))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] = -8733;
        var_14 ^= var_1;
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_15 -= min((((arr_8 [i_2 - 2] [9]) ? -32746 : 14494760113082257222)), ((((var_5 >> (((arr_10 [i_2 - 1]) - 19)))) % ((((arr_8 [i_2] [i_2]) >= (arr_9 [i_2])))))));

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_16 = 7011565339882596966;
            var_17 = 32729;
        }
        arr_14 [i_2] [i_2] |= (((((arr_8 [i_2] [i_2 - 2]) + var_9))) ? (arr_8 [1] [i_2 - 1]) : (((arr_8 [i_2] [i_2 - 2]) * (arr_8 [i_2] [i_2 - 1]))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_18 = (!var_8);
                    arr_19 [i_2] = ((11 ? 4121647164262920708 : -32746));
                }
            }
        }
    }
    #pragma endscop
}
