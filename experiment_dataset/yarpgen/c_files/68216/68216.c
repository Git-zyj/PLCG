/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((var_9 ? 0 : var_3)) - (var_5 / 217))), ((255 ? -var_3 : var_6))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_11 = (((((((max(3742044014, (arr_1 [i_0] [i_0])))) ? ((((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - 34099))))) : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_5))))) ? ((((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])))) : (min((((var_8 ? 245 : var_3))), (((arr_0 [i_0] [i_0]) >> (552923281 - 552923267)))))));
        var_12 = (((arr_0 [i_0] [i_0]) <= (4055801167931898036 <= 279791948)));
        arr_2 [i_0] [i_0] = (((max(var_2, 552923281))) ? (((~var_2) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] = -7739319650266773209;
            var_13 = ((((max((arr_4 [i_0]), (arr_4 [i_0])))) ? (((arr_4 [i_1]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1]))) : ((((arr_4 [i_0]) * (arr_4 [i_0]))))));
        }
        /* vectorizable */
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = ((-(arr_0 [i_2 - 4] [i_2])));
            arr_9 [i_2] = ((42682 >> (245 - 242)));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((((10 & var_9) >> (((((arr_6 [i_3]) - (arr_4 [i_3]))) - 3878724841867087899)))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4 - 1] [i_5] [i_5] = (arr_18 [i_3] [i_5 + 2] [i_4 - 1]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_4] [i_5 + 1] [i_6] [i_7] [i_3] = (((arr_1 [i_5 - 3] [i_5 - 3]) >= (arr_1 [i_5 - 3] [i_5 - 2])));
                                var_15 = ((~(arr_16 [i_5 + 1] [i_5] [i_5 + 1])));
                            }
                        }
                    }
                }
            }
        }
        var_16 ^= (((arr_14 [i_3]) ? (arr_15 [i_3] [i_3]) : ((5351614376886222490 ? var_8 : 7739319650266773209))));
        arr_27 [i_3] = ((arr_15 [i_3] [i_3]) && (arr_17 [i_3] [i_3] [i_3]));
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {
                var_17 = (max(var_17, (arr_31 [i_8])));
                var_18 = (max(var_18, (~var_3)));
                var_19 *= ((var_0 + (((arr_32 [i_9] [i_9]) ? (arr_32 [i_9] [i_9]) : 7739319650266773209))));
            }
        }
    }
    var_20 = (((((var_9 ? var_1 : ((552923303 ? var_5 : -5425433662555302851))))) ? ((~(~70))) : ((min(var_1, var_7)))));
    #pragma endscop
}
