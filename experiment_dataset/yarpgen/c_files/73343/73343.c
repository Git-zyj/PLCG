/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_11, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_21 = (min(var_21, -125));
                    var_22 = (((var_11 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_1] [i_2]))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_11 [14] [14] [i_1] [i_1] = ((!((min((arr_2 [i_0]), (arr_9 [i_1] [i_1] [i_1]))))));
                    var_23 = ((((((arr_5 [i_1] [i_1] [i_3]) & 19723))) ? (((arr_8 [4] [i_0] [i_1] [i_3]) & (arr_2 [i_0]))) : (((arr_8 [i_0] [i_1] [i_1] [i_3]) & var_18))));
                }
                var_24 = (min((var_5 & 6893967861875628642), -1));
                var_25 = 11552776211833922974;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_15 [2] [i_1] [5] = 2147483647;
                    var_26 = (arr_8 [i_0] [i_0] [i_0] [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
