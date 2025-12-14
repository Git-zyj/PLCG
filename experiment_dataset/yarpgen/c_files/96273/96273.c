/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [1] [i_3] = var_2;
                        var_14 = max(((((-9223372036854775807 - 1) < -8504386320339981404))), (max(((((-12959 + 2147483647) << (((arr_9 [i_0] [i_1] [i_1] [i_2] [i_3]) - 7200860408064122764))))), -8504386320339981404)));
                        var_15 = (min(var_15, ((min((max(24838, (arr_10 [i_3 - 1] [i_3 - 1] [i_0] [i_3] [i_3] [i_1]))), (-27495 - -5037572674938542483))))));
                        var_16 -= (((min((arr_11 [i_0] [i_3 + 1]), (arr_11 [i_0] [i_3 + 1]))) << (((((var_5 != var_5) ? (var_0 && 211) : (min((arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3]), var_9)))) - 13924))));
                    }
                }
            }
        }
        var_17 += max((min(40697, 8136459600083771882)), (((var_4 > (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_18 -= -14;
                    var_19 = (((min((arr_8 [i_0] [1]), -8504386320339981392)) | ((min(((0 ? var_0 : (arr_17 [i_0] [i_0] [i_4] [i_0]))), ((min((arr_2 [i_4]), 134))))))));
                }
            }
        }
        var_20 = ((var_2 <= ((((arr_14 [i_0]) ? 24838 : ((max((arr_1 [i_0]), 2))))))));
        var_21 = (min(var_21, (((12577 < (arr_6 [i_0] [i_0] [i_0]))))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_22 = ((((((arr_20 [i_6]) & (arr_8 [i_6] [i_6]))) ^ ((min((arr_18 [i_6] [i_6] [i_6] [i_6]), var_4))))) & (arr_0 [i_6] [i_6]));
        var_23 &= var_10;
    }
    var_24 = (var_5 - var_3);
    var_25 = var_5;
    #pragma endscop
}
