/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (max((max(508, (max(86, 64512)))), ((min(180, (min(53, 65535)))))));
    var_12 = (min((max((max(var_0, 11074317044346680529)), ((max(var_9, var_9))))), (min(((min(var_4, var_5))), (max(11794604773401503199, var_10))))));
    var_13 = (min(((max(((max(var_9, var_9))), (max(569891134, (-127 - 1)))))), (max((max(127, 444880002442424917)), ((max((-127 - 1), var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (min(((min((min(0, var_7)), ((max((arr_4 [i_2] [1] [1] [1]), -83)))))), (max((max(var_8, var_2)), ((max(var_6, (arr_4 [i_0] [i_1] [i_2] [i_2]))))))));
                    var_15 = (max(var_15, ((max((max((max((arr_2 [i_2] [14] [i_0]), var_8)), ((max(4294967295, var_5))))), ((max(((min(0, (arr_6 [i_0] [1] [1] [1])))), (min((arr_0 [i_0]), 4294967285))))))))));
                }
            }
        }
    }
    #pragma endscop
}
