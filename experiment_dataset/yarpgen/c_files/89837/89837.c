/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (((!((min(2011928911, 38))))));
                    var_16 -= ((1 ? 3784381849 : 1));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = ((((((min(0, (arr_7 [i_3])))))) ? (arr_8 [1]) : ((min((arr_2 [i_3] [i_3] [i_3]), (arr_1 [i_3]))))));
        arr_11 [2] = (min(((min((arr_9 [i_3 + 1]), 1))), ((~(arr_9 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            var_17 &= arr_13 [i_4] [i_5 - 1];
            arr_17 [i_5] [i_5] = ((!((((max(2061437064, 1))) != 0))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_18 = ((var_14 ? -8690659962602746944 : var_8));
            arr_20 [i_6] [i_6] = (arr_16 [i_6]);
            var_19 = (arr_3 [i_6]);
            arr_21 [i_6] [i_6] = ((128 ? (arr_13 [i_4] [i_6]) : 21663));
            var_20 = (arr_18 [i_4] [i_6]);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_21 = (((arr_12 [i_7] [6]) ^ (((~128) & (min(var_14, var_15))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 23;i_9 += 1)
                {
                    {
                        var_22 = (min(1125898833100800, (max(-4611686018427387904, (arr_29 [i_8] [i_7])))));
                        arr_32 [i_4] [i_7] [i_8] [i_7] [i_7] = min((((arr_31 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 2] [i_9] [i_9 + 1]) ? (((arr_24 [i_7]) ? 21680 : 66)) : 1)), (((((min((arr_26 [i_4] [i_4] [i_8]), var_8))) == ((-2064198812 ? 6113478535755056871 : var_11))))));
                        var_23 = (((((var_12 ? var_0 : var_8))) & ((((16256 ? -8690659962602746941 : 0))))));
                        var_24 = (arr_13 [i_4] [17]);
                    }
                }
            }
            arr_33 [i_4] [i_4] [i_7] = (arr_2 [i_4] [i_4] [i_4]);
            var_25 *= -1125898833100788;
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            var_26 = ((arr_15 [i_10 + 1] [i_10 + 2]) % var_14);
            var_27 = 255;
        }

        /* vectorizable */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            var_28 = (((arr_37 [i_4] [i_11] [i_4]) ? (arr_34 [i_4]) : 84));
            var_29 = (arr_5 [i_4]);
            arr_41 [i_11] = -66;
        }
        var_30 = (arr_2 [i_4] [i_4] [i_4]);
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
    {
        arr_44 [i_12] = ((!((!((min((arr_3 [i_12]), (arr_25 [i_12] [i_12] [i_12]))))))));
        var_31 = (((1067547121 * 2097151) - 30667));
        var_32 = arr_22 [i_12] [i_12] [i_12];

        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_33 = (((((43177 ? ((595865990 << (3120997525 - 3120997522))) : (max(11, 1410945162))))) ? (arr_15 [16] [i_13]) : (((-67 ? 67108863 : 16256)))));
            var_34 = ((max((!1067547121), ((16256 ? 29 : 2980212374)))));
            var_35 = ((-(((arr_5 [i_12]) ^ (arr_5 [i_12])))));
        }
    }
    var_36 = (((((var_12 || 17679) != ((var_1 ? 4294967289 : -67108864)))) ? var_4 : (((!var_4) ? ((255 ? 7450708579747922117 : var_4)) : ((var_12 ? var_1 : 18446744073709551615))))));
    var_37 = (min(var_37, (((((((var_12 ? -1515697808837229579 : var_3)))) ? (((-(!var_10)))) : var_11)))));
    #pragma endscop
}
