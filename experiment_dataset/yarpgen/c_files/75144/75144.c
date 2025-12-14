/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_2 ? (~var_1) : (((((6949034222163612400 ? -100 : 18446744073709551615)) < var_6)))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 *= (((min(2305843009205305344, (arr_1 [i_0])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        var_18 = var_14;
                        arr_10 [i_0] [i_1] [i_2] [i_3] = (max((min(((((arr_4 [i_0] [i_0] [i_0]) + var_11))), (var_8 / 2305843009205305341))), ((((arr_1 [i_0 + 1]) ? (max((arr_3 [i_1] [i_2]), var_10)) : (arr_1 [i_0 + 2]))))));
                        arr_11 [i_0] [i_1] [i_1] [i_3] = (((!2305843009205305327) < (var_15 < 2685771122)));
                    }
                }
            }
            var_19 = ((((var_11 + (arr_8 [i_0]))) + 27415));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_15 [i_0] [i_0] [i_0] = ((4412907823441506089 ? (var_11 < 26530) : 1609196172));
            arr_16 [i_0] [i_4] = (1598207121 / 244);
            var_20 ^= ((2685771111 ? var_11 : (arr_0 [i_0 + 1])));
        }
        arr_17 [i_0] = (((((~(arr_12 [i_0 + 2] [i_0 + 2])))) ? (((var_4 ? (max(3941747653, var_1)) : (var_13 / 3941747653)))) : ((1 ? -36921270593962923 : 6074376902003036830))));
        arr_18 [i_0] = var_1;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_21 = (((((-((2305772640469516288 ? var_0 : 134086656))))) ? ((-2305843009205305345 ? (arr_20 [i_0 - 1] [i_0 + 1]) : var_2)) : -var_12));
                    arr_24 [i_0] [i_0] = (var_15 + -2305843009205305342);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_22 = 1196755025;
        arr_27 [i_7] = ((!(arr_21 [i_7] [i_7] [i_7] [i_7])));
    }
    #pragma endscop
}
