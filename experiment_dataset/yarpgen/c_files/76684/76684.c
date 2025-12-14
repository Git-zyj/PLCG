/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = (~50851);
                    arr_11 [i_2] [i_2] [i_1] = (((((var_12 ? var_3 : var_10))) ? ((var_18 ? var_15 : var_9)) : var_6));
                    arr_12 [i_1] [i_1] [i_1] = (!var_17);
                    arr_13 [i_0] [i_1] = -var_0;
                }
            }
        }
        arr_14 [i_0] = ((!(((var_18 ? var_9 : var_17)))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_18 [i_3] = (((65535 ? (((50865 ? 50862 : 50858)) : 18446744073709551615))));
        arr_19 [i_3] = (min(((13909154773365943087 ? 50844 : (max(3232740422114421290, 143)))), ((((((50851 ? 14663 : 65535))) ? var_6 : (~-1564201303))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_23 [i_4] = ((((var_9 ? var_0 : var_15))) ? var_2 : ((var_17 ? var_0 : var_0)));
        arr_24 [i_4] = (var_0 ? (!var_8) : (!var_7));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_29 [i_5] = (!var_17);
        arr_30 [6] = (((var_3 ? var_4 : var_19)));
        arr_31 [i_5] = ((-((var_12 ? var_7 : var_5))));
    }
    var_20 = var_8;
    #pragma endscop
}
