/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((~(((!(var_6 || var_8)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 |= ((76 ? 5478820451949699824 : (arr_4 [i_2])));
                    var_14 &= -1364817444;
                }
            }
        }
        var_15 = (max(var_15, (arr_3 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_16 &= ((((((-(arr_10 [i_3])))) ? ((~(arr_2 [i_3]))) : (((!(arr_2 [i_3])))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    {
                        var_17 = (max(var_17, (arr_16 [i_3] [i_4])));
                        arr_21 [i_3] [i_4] [i_5] [i_6] = (arr_2 [i_6 + 1]);
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_27 [13] [13] = ((+(((arr_20 [i_7] [i_8] [i_8] [i_8] [i_8]) ? (arr_13 [i_8] [i_7]) : (arr_20 [i_8] [i_8] [i_8] [i_7] [i_7])))));
            var_18 -= arr_3 [i_8] [i_7];
            arr_28 [i_8] [i_7] [i_7] = ((((-(arr_18 [i_7] [8] [i_7] [i_7]))) - (((-(arr_15 [i_7] [i_8]))))));
        }
        arr_29 [i_7] [i_7] = ((((((arr_13 [i_7] [i_7]) / (arr_14 [i_7])))) ? (arr_8 [i_7] [i_7] [6]) : (((!(arr_13 [i_7] [i_7]))))));
    }
    var_19 = ((var_8 ? ((-118 ? 3374573418022456120 : -var_1)) : -var_9));
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {
                    var_21 = (max(var_21, ((((((-(arr_3 [i_11] [i_9]))) == ((~(arr_24 [7])))))))));
                    arr_36 [i_9] [i_10] [i_11] = (!763529195);
                }
            }
        }
    }
    #pragma endscop
}
