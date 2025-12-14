/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = var_4;
    var_22 = (~var_10);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((~((0 ? 1358655384 : 0)))))));
        arr_3 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_23 = ((~(min(((4294967276 ? 4294967295 : -31130)), ((max((arr_8 [i_1] [i_1]), var_1)))))));
                        arr_15 [i_4] = ((!((max(0, var_18)))));
                    }
                }
            }
        }
        arr_16 [6] = ((((max(13629162414710959874, -31978))) ? ((max(var_13, (-32767 - 1)))) : (619215504 * 846152326)));
        var_24 = ((-((max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1]))))));
    }
    var_25 = var_16;
    #pragma endscop
}
