/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [0] = (1216635015 ? (1216635024 / 24820) : 881615140);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = (arr_0 [i_0] [i_0]);
            arr_5 [i_0] [i_1] [i_1] = (var_1 != var_7);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_13 += ((((((arr_6 [i_0] [i_2] [i_2]) ? 595229001 : (arr_6 [i_0] [i_2] [i_2])))) ? var_10 : (((var_1 ? var_8 : (arr_8 [i_0] [i_2]))))));
            var_14 = ((((((arr_7 [i_2]) | ((max(0, var_0))))) + 2147483647)) << (((!0) - 1)));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                arr_16 [i_3] [i_3] [i_3] = var_1;
                var_15 = 0;
            }
            var_16 = (min(var_16, var_11));
            var_17 = (min(var_17, ((max((65522 + 4539), 0)))));
            var_18 = (max(((((arr_14 [i_0] [i_3] [i_3]) ? var_2 : 1))), -18654));
        }
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            var_19 = (min(var_19, (((173761841753063606 >= (!var_11))))));
            var_20 = var_11;
        }
        var_21 *= (((var_3 ? ((var_7 ? 8260 : var_5)) : (max(1974301455, -1974301456)))));
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {
        var_22 = (((((var_4 ? 26604 : -4659))) ? ((((arr_13 [i_6] [i_6] [i_6]) == (-1216635025 - 0)))) : ((max((2128436265 || var_11), (arr_18 [i_6 + 2]))))));

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_23 = (((var_10 ? 65519 : (((1 ? -1226996358 : var_8))))));
            var_24 = max(((296 ? var_2 : var_7)), (((arr_18 [i_6 + 3]) ? var_11 : var_7)));
            arr_25 [i_6] [8] [i_7] = var_5;
            var_25 = (min(var_25, (max(var_3, (max(var_4, (max((arr_6 [i_6 + 2] [i_6 - 1] [i_6]), (arr_8 [i_6 + 1] [i_7])))))))));
            arr_26 [i_6] = 895854124;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_26 = (((arr_19 [i_6] [i_6 - 1]) ? var_0 : ((var_4 ? 36717 : -1216635002))));
                            var_27 = (max(var_27, (((var_1 ? ((((arr_27 [i_11] [i_11] [i_10]) || (arr_9 [i_10])))) : ((var_0 ? -1226996358 : var_5)))))));
                        }
                    }
                }
            }
            var_28 = ((arr_1 [i_6 + 2]) << (((arr_3 [i_6 + 3]) - 30992)));
            arr_37 [4] [i_6] [i_6] = ((((-1729225252 ? 65535 : 415091012)) << (-1034605332 + 1034605357)));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_29 = (-((65535 ? var_11 : var_5)));
            var_30 *= var_4;
        }
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 16;i_13 += 1)
    {
        var_31 = ((27 ? -2063783867 : 903086236));
        var_32 = (max(var_32, var_3));
        arr_42 [i_13] = ((var_4 != 1974301444) != ((var_7 ? var_10 : -1974301424)));
    }
    var_33 = var_11;
    var_34 = var_4;
    #pragma endscop
}
