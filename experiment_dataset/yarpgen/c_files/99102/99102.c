/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((var_7 >= (min(((max(var_2, var_8))), var_7))));
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((((arr_2 [i_0] [i_1]) + 2)) * 15));
                arr_4 [i_0] [7] [i_1] = ((-(min((arr_1 [19] [i_0]), (min(3237958890272582795, 3237958890272582795))))));
                var_14 *= ((-((3237958890272582795 ? (arr_2 [i_0] [i_1]) : ((max((arr_2 [0] [16]), -73)))))));
            }
        }
    }
    var_15 = (var_10 < 72);
    #pragma endscop
}
