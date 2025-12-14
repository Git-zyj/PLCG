/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [1] [i_1] [i_0] [i_0] &= (((((((3198616300 >= (arr_5 [i_0] [i_1] [i_2] [i_2 - 1])))) | ((((arr_6 [i_0] [i_0] [i_0]) <= 1144920378)))))) ? (((arr_7 [i_0] [i_0] [i_1] [i_0]) ? (((((arr_4 [i_2 + 2] [i_2 + 2] [i_2]) && (arr_6 [i_0] [i_0] [i_0]))))) : 3611857957)) : (((((max(var_6, (arr_4 [i_2] [i_1] [i_0 + 1]))) <= (arr_2 [i_0] [i_0 + 1]))))));
                    arr_9 [i_0] [5] [i_1] [i_2] = (((max((var_6 % var_2), (max(80, 3611857957))))) < ((-97 ? ((var_4 ? 5045005830273924783 : 188518645)) : 1)));
                }
            }
        }
    }
    var_11 = (max(var_11, var_5));
    var_12 = 104;
    #pragma endscop
}
