/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((min(4294967295, (arr_5 [i_0] [i_1]))))));
                var_12 = (34 + 34);
                var_13 = var_2;
                var_14 *= ((+((((arr_2 [i_0]) > ((max(2186168477500870595, 5188))))))));
            }
        }
    }
    var_15 = (min((max(var_3, var_8)), var_4));

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = (min((max(-2186168477500870601, 127)), (max(((var_2 / (arr_5 [i_2] [i_2]))), 12))));
        var_17 = (min(var_17, ((min((0 != var_6), ((3592829878 ? -7388018217870004423 : -572803696)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_18 -= (((!(!198))) && (((var_3 && var_7) || var_0)));
                    var_19 += min(16692498997056839396, (arr_6 [11]));
                }
            }
        }
    }
    #pragma endscop
}
