/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 41816;
    var_16 = (min(((min(var_0, 65528))), (min(7, ((var_4 ? var_13 : var_3))))));
    var_17 = (min(var_17, var_1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (max(10106, ((min(9051, (var_12 != 55708))))));
                var_19 = (((((((var_2 % (arr_0 [i_0] [i_1 - 1]))) >> (-var_3 + 16980)))) ? -var_2 : ((max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        var_20 = (((((18792 ? ((min(7519, 14147))) : ((((arr_1 [i_4]) < var_14)))))) ? ((((46744 != 7) > (((!(arr_18 [i_2]))))))) : 58016));
                        arr_19 [i_2] [i_4] [i_4] [i_3 + 2] [i_2] [i_2] = ((-((min(var_7, (arr_4 [i_2 - 1] [i_5 + 3] [i_5 + 3]))))));
                    }
                }
            }
        }
        arr_20 [i_2] = 22806;
    }
    #pragma endscop
}
