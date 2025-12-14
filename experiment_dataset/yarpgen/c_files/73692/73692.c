/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((-(((var_5 > var_6) ? -var_10 : var_1)))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_12 = (arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_13 = ((((((9848400905708349239 < var_10) ? -1 : (arr_0 [i_0] [i_0 + 1])))) || (arr_4 [i_1] [i_2] [i_3])));
                        var_14 = (max(var_14, ((((arr_1 [i_0 - 1] [i_0 - 1]) > ((min(0, 4106004468))))))));
                        var_15 = (min((min(3427310422, (((0 == (arr_0 [5] [i_2])))))), ((((arr_9 [i_3]) ? 188962827 : (arr_4 [i_0 + 3] [12] [i_2]))))));
                    }
                    var_16 = (max(var_16, (((((!(arr_4 [i_0] [i_0] [8]))) ? (((1 ? 4106004468 : 1))) : (min((arr_13 [i_0 + 3] [i_0 - 1] [i_0] [i_0 + 2]), ((((arr_1 [i_1] [i_0]) ^ -3736236400827411762))))))))));
                }
            }
        }
        arr_14 [i_0] [i_0 + 2] = 175;
    }
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        var_17 = (max(var_17, (!11164492597115829044)));
        var_18 ^= ((--7282251476593722572) ? ((var_3 ? (arr_16 [i_4 - 2]) : ((min((arr_15 [i_4 - 2]), var_5))))) : (arr_15 [i_4]));
    }
    var_19 = (var_2 != (((min(var_6, 1)))));
    var_20 = (~var_10);
    #pragma endscop
}
