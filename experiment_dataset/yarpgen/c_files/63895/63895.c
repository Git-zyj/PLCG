/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(var_8, ((((min(var_13, var_9))) ? (~4272051479) : var_11)))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] = ((~(min(6124736002468058702, 4294967295))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((((((var_5 && (arr_3 [i_0] [i_0 + 2] [i_0]))))) <= (min(1, 12495122671461159706))));
                }
            }
        }
        arr_11 [i_0 + 2] [i_0] = (((min((((146 % (arr_3 [i_0] [i_0 - 2] [i_0])))), (min((arr_1 [i_0 + 2] [i_0]), var_8)))) != (arr_5 [i_0] [i_0 - 1])));
        var_16 = (max((arr_5 [i_0 - 2] [i_0 - 2]), (max(var_9, (arr_4 [i_0 + 2])))));
        var_17 = (min(var_17, ((min(9223372036854775807, -9223372036854775792)))));
        arr_12 [8] = min(((var_2 ? (arr_6 [i_0] [18] [i_0 - 1]) : 1099511627775)), -var_8);
    }
    #pragma endscop
}
