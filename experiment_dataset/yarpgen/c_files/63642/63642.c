/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((18446744073709551615 ? var_3 : (((854 > var_9) ? (((1977910061 ? var_3 : 17744))) : ((40 ? var_6 : -34))))));
        var_10 = ((-((((((var_8 ? var_8 : 1600514539))) && 1)))));

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_2] [i_2] [i_2] = ((((((((var_8 ? var_3 : var_2))) ? ((64681 ? 17767 : var_4)) : (~-4248)))) ? (!var_7) : 20461));
                        arr_12 [i_0] [i_0] [i_0 - 2] [i_0] = (((((~((47811 ? var_2 : -11930))))) && (((65535 + (~var_1))))));
                    }
                }
            }
            var_11 = ((1 == (-6762658905529587388 + 6762658905529587388)));
            var_12 = (min(var_12, 3544794372));
        }
    }
    var_13 = 1;
    var_14 = 6762658905529587388;
    var_15 = (min(var_15, ((((((~((var_5 ? var_9 : var_4))))) ? (((-((6762658905529587388 ? var_4 : 1))))) : ((1 ? (32767 | 1) : (~4294967294))))))));
    var_16 = var_6;
    #pragma endscop
}
