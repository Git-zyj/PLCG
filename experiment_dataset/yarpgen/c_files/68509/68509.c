/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = ((var_11 ? (arr_1 [8]) : (arr_1 [i_0])));
        arr_2 [i_0] = (((((var_0 ? (arr_1 [0]) : -32))) && (((arr_0 [i_0]) || (arr_1 [i_0])))));
        var_13 = (((((var_0 * (arr_0 [i_0])))) ? ((5067035778977382423 ? -24 : 850)) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [8] [i_2] [i_3] = (min(((min(0, (arr_3 [17])))), ((((((458 << (-459 + 481)))) || 1)))));
                    var_14 = (((((min((arr_5 [i_1] [i_1]), var_0)))) || ((min((!12), (arr_3 [5]))))));
                }
            }
        }
        arr_11 [18] = ((28 ? (arr_6 [i_1] [i_1] [i_1]) : (arr_4 [i_1] [i_1])));
    }
    var_15 = max((((var_1 == (((var_4 ? 31 : -32)))))), (max(((var_8 ? var_9 : var_1)), (min(-46, 3588695464344874676)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_5] [i_6] [i_6] = (((1 > (32 > 13503))) ? (max(var_9, (((arr_18 [18]) & -1816871816)))) : ((max(13512, (arr_12 [11])))));
                    var_16 += ((-4 > -1) | ((min(56361, -459))));
                }
            }
        }
    }
    #pragma endscop
}
