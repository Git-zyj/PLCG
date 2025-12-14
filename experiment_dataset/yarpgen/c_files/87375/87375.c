/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 += (max(((max((var_1 || 1), (arr_3 [i_0] [i_2])))), ((-32765 ? 52 : 1))));
                    var_13 = 1;
                    var_14 = (min(var_14, 7280836257782329534));
                }
            }
        }
        var_15 = (max(var_7, (((((min(3072, (arr_1 [i_0])))) && 128)))));
        var_16 = (min(var_16, 5));
        var_17 = (max(var_17, (((var_1 * (((!(((1 ? var_1 : -19994)))))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_18 |= (!(arr_2 [i_3]));
        var_19 = (24 > 1);
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_20 = (((arr_11 [i_4]) ? (max(var_9, (arr_10 [i_4 + 1]))) : ((((arr_11 [i_4 + 2]) ^ (3504097809 == -64))))));
        arr_12 [i_4] [1] &= max((!var_8), ((-(arr_10 [i_4 - 1]))));
        var_21 = ((((min(123, 1172057971))) ? (((((((arr_10 [i_4 + 2]) >> (var_8 - 1408928288113301049)))) ? ((101 >> (((arr_11 [i_4]) - 1903121739)))) : ((max(1, var_9)))))) : (((arr_10 [i_4 + 2]) + (arr_10 [i_4 - 1])))));
    }
    var_22 = var_6;
    var_23 = (((((var_2 / 80) << (((max(3122909324, 144)) - 3122909296)))) != (((((max(var_3, 0))) ? (!-82) : ((max(var_9, 154))))))));
    #pragma endscop
}
