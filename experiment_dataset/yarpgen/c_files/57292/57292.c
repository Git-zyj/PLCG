/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = ((var_1 ? (arr_0 [i_0]) : (arr_0 [i_0])));
                    var_15 = (min(var_15, 695385663336389345));
                    var_16 = (arr_0 [12]);
                    var_17 = (arr_2 [i_1] [i_1] [i_1]);
                }
            }
        }
        var_18 = (min(var_18, (((14094764781413497702 ? var_0 : (arr_3 [i_0] [i_0] [i_0]))))));
    }
    for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_19 = (((min(14855544386918299615, 21))) ? (var_8 != var_4) : ((-2305702271725338624 ? 3591199686791252000 : (-127 - 1))));
        var_20 = (((arr_7 [i_3] [0]) ? var_11 : (max((arr_8 [14]), (max(var_8, -695385663336389334))))));
        var_21 = (((max((~var_10), 3657124881102635076)) | 0));
    }
    for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_22 = (6504840030585881795 != -8814911349284507392);
        var_23 *= var_1;
        var_24 += 1423445272986373274;
    }
    var_25 = 106;
    #pragma endscop
}
