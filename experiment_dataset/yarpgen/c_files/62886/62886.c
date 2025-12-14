/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = arr_2 [i_2] [i_2];
                    var_15 = (min(var_15, (((((arr_3 [i_0]) ? -18254 : 17907863597624997020))))));
                    arr_9 [4] [0] [i_2] [i_2] &= ((~((((min(var_6, (arr_6 [i_1] [1] [i_1])))) ? var_1 : 17907863597624997020))));
                    var_16 *= (min((arr_7 [i_0] [i_0] [i_0]), (((arr_2 [i_2 - 2] [i_1 + 1]) ? -18270 : 32404))));
                    var_17 = (min(((((((18254 ? 44510 : var_11))) && -5781))), (max((min(-975167014898505024, 65535)), 1007460264))));
                }
            }
        }
        var_18 = ((((min(15065602678349132020, 17)) != (arr_1 [i_0]))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] |= (arr_2 [i_3] [i_3]);
        var_19 = (min(var_19, ((((min(1, var_14)))))));

        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            arr_17 [i_4] [i_4] = (min(((15065602678349132020 ^ (arr_10 [i_3]))), (((-(((!(arr_13 [i_3] [i_3] [4])))))))));
            var_20 = (min(((min(-18254, 15065602678349132029))), ((-(max(193, 1007460259))))));
        }
        var_21 |= 33084;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_22 -= ((((((arr_18 [i_5] [i_5]) ? (arr_18 [i_5] [i_5]) : (arr_18 [i_5] [i_5])))) ? (((((-(arr_19 [i_5])))) ? (arr_19 [13]) : ((var_14 ? var_5 : (arr_18 [i_5] [i_5]))))) : (max((((!(arr_19 [1])))), var_3))));
        arr_20 [i_5] [i_5] = (((~14) ? 2347143361 : ((((((arr_18 [6] [i_5]) ? -926034129450712508 : (arr_19 [i_5])))) ? ((var_5 ? 193 : 2581591218)) : (min(4294967295, 15252))))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_23 = (max(var_23, (((975167014898505024 ? -15262 : 11210)))));
        arr_24 [1] = (arr_19 [i_6]);
        var_24 = (min(var_24, (((((((arr_23 [i_6]) ? (((arr_22 [i_6] [i_6]) | 226)) : (arr_18 [i_6] [i_6])))) ? ((-((max(65529, var_9))))) : (((!-18254) / (((arr_21 [5]) ? var_6 : (arr_18 [9] [i_6]))))))))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 18;i_8 += 1)
        {
            {
                var_25 = (((max(18254, 3199591698)) % ((((!15065602678349132029) ? ((32744 ? (arr_18 [10] [i_8]) : (arr_25 [i_7]))) : 65509)))));
                arr_30 [i_7] [i_8 - 3] = (min(18446744073709551615, 374818315901387483));
            }
        }
    }
    #pragma endscop
}
