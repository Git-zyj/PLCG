/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(3084865010, (min(2882696752, var_17))))) ? ((min(((1412270536 >> (652710620 - 652710611))), 3424168875))) : var_5));
    var_19 = ((var_11 ? var_17 : (min(((655833536 ? var_1 : 1)), var_4))));
    var_20 = (min(((2882696776 ? var_0 : (45 && 32767))), 65535));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (1 == 1210102285);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [1] [i_1] [3] [i_1] = (((var_16 / (arr_3 [i_1] [i_2]))));
                    var_21 = 1;
                    var_22 = ((min(1073741824, (arr_5 [0] [i_2]))) < ((min(var_0, -3424168886))));
                    var_23 = (min(var_15, ((1 ? (35925 + 29610) : (min((arr_6 [i_0] [i_1]), 428570372))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_24 = (29399 ? 1 : 2882696752);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_25 = (min(var_4, ((209835953 ? 8 : (arr_20 [i_3] [i_3] [14] [14])))));
                        var_26 = ((((652710620 ? (max(var_5, 65524)) : (arr_11 [i_3] [i_3]))) > 45));
                    }
                }
            }
        }
        arr_21 [i_3] = (min((arr_19 [i_3] [i_3] [i_3]), ((min(1, (min(var_10, 31)))))));
        var_27 = (min((-32767 - 1), ((1 ? 4095948617 : 2))));
    }
    #pragma endscop
}
