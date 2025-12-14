/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 = var_7;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_8 [i_0 + 3] [7] [i_0] [i_3] = (min(var_4, ((((255 % -2147483617) >= ((min(var_12, 21252))))))));
                        var_21 = (14264955625576929624 * 4294967295);
                        var_22 = (i_0 % 2 == 0) ? ((max(var_14, ((((arr_3 [3] [i_1]) >> (((((arr_4 [i_0] [i_1] [i_1]) ^ var_13)) - 18217458409409440483)))))))) : ((max(var_14, ((((arr_3 [3] [i_1]) >> (((((((arr_4 [i_0] [i_1] [i_1]) ^ var_13)) - 18217458409409440483)) - 1727129869))))))));
                        arr_9 [i_0] [i_0] [13] [i_3] = (min(var_16, var_0));
                        arr_10 [i_0] [i_0] [i_0] [11] [i_0] [i_0] = (min((((!(((var_6 ? var_2 : var_17)))))), var_14));
                    }
                }
            }
        }
        var_23 = (min(var_23, 53546));
        arr_11 [i_0] = (max(3271115348, var_10));
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_24 |= (855269641 * 1080573268);
            var_25 = 3214394028;
            var_26 |= ((((max(((((arr_15 [i_4]) | (arr_12 [i_4])))), (max((arr_13 [i_4] [i_5]), var_19))))) ^ (min((((arr_14 [i_4]) & -1)), (3284932694 > 7171939038419482156)))));
        }
        var_27 = arr_12 [i_4];
    }
    var_28 = var_1;
    var_29 = (min(var_29, -32751));
    var_30 = ((((min(var_16, 0))) && ((min((!4), var_10)))));
    var_31 = var_18;
    #pragma endscop
}
