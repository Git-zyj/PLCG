/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_13;
    var_17 = -2477820813;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = arr_2 [i_0];
        var_18 = ((~3037647807) << (((3121534426 % 2820007259) - 301527144)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_19 = max((((!0) & var_11)), ((var_8 ? 3612947056 : 2782006948)));
            var_20 = 3766551764;
            var_21 = (max(var_21, 3745224191));
        }
        arr_10 [i_1] [i_1] = 0;
        var_22 = 4294967295;
        arr_11 [i_1] = var_6;
        arr_12 [i_1] = 4294967289;
    }
    var_23 = (((var_0 ? 1474960036 : 1298369882)));
    var_24 = var_3;
    #pragma endscop
}
