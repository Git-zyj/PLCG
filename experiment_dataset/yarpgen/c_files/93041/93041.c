/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-3421667740793965757 + 6);
    var_19 = -var_4;
    var_20 = (~-3421667740793965757);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = 9;
        var_22 = ((var_6 ? 11278251004500016141 : var_9));
        var_23 = var_8;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_8 [i_0] [i_1] = var_4;
            arr_9 [i_0] [7] [i_0] = ((var_10 ? (!-8078369787778697861) : ((var_1 << (var_16 + 8599952883610508417)))));
        }

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_24 = (!8250198497205577154);
            var_25 = -651272994889573862;

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_16 [i_0] [i_2] [i_3] = var_12;
                arr_17 [i_0] = var_0;
                var_26 += 18446744073709551607;
                arr_18 [i_0] = ((((((var_14 ? var_9 : 242)))) || -6786534239492593184));
            }
            var_27 = 40;
        }
    }
    #pragma endscop
}
