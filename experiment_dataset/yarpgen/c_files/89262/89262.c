/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= 255;
    var_14 = (min(var_14, 0));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 = (min(var_15, -106));
        var_16 = 4058005736;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 255;
                        var_17 = 122;
                        var_18 += 1;
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        var_19 += 47814;
        var_20 = 1816561595;
    }
    var_21 &= 285376167;
    #pragma endscop
}
