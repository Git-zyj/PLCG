/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (max(((var_4 ? var_12 : var_10)), ((((max(var_14, var_17))) ? var_14 : var_16))));
            var_18 = (min(var_18, ((((((var_8 ? var_15 : var_1))) ? (((((max(var_0, var_10))) ? ((var_5 ? var_3 : var_3)) : var_11))) : (max(-7613317351228208717, 1231230350)))))));
            arr_6 [i_0] = (((((var_0 ? var_12 : var_11))) ? (min(((var_15 ? var_12 : var_8)), ((var_0 ? var_10 : var_17)))) : (((((min(-9223372036854775795, -7613317351228208717))) ? ((max(var_8, var_3))) : ((var_4 ? var_1 : var_13)))))));
            var_19 = (max(((min((max(var_3, var_10)), var_12))), ((((min(var_17, var_12))) ? (min(var_16, var_7)) : (((var_15 ? var_13 : var_5)))))));
            var_20 = ((((((((var_14 ? var_7 : var_6))) ? var_9 : var_4))) ? (min(var_6, var_13)) : var_8));
        }
        var_21 = (((((var_12 ? var_9 : var_9))) ? var_10 : (min(var_4, ((var_14 ? var_4 : var_10))))));
        var_22 = (((((var_2 ? var_2 : var_14))) ? (((((var_10 ? var_5 : var_2))) ? (((var_8 ? var_11 : var_11))) : ((var_11 ? var_7 : var_17)))) : (((((var_12 ? var_13 : var_5))) ? ((var_11 ? var_3 : var_7)) : var_14))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_23 ^= var_14;
        var_24 -= ((((min(var_10, var_5))) ? ((1048448 ? 9223372036854775802 : 3072)) : ((var_7 ? var_6 : var_10))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {
                        var_25 |= (max(((var_13 ? (((max(var_9, var_16)))) : ((var_10 ? var_5 : var_5)))), ((var_13 ? var_14 : var_10))));
                        arr_18 [i_2] [i_3] [i_5 + 1] [i_5] [1] = (((((-32767 - 1) ? 2908974650663857669 : 9223372036854775804))) ? (min(var_8, (max(var_0, var_1)))) : var_1);
                        var_26 *= ((var_6 ? (((((var_2 ? var_1 : var_8))) ? ((var_11 ? var_6 : var_10)) : var_12)) : (((var_0 ? (((var_5 ? var_1 : var_8))) : (max(var_9, var_12)))))));
                        var_27 |= (((((var_13 ? var_7 : var_15))) ? ((4286578688 ? -1313619712150018312 : 4)) : var_16));
                    }
                }
            }
        }
    }
    var_28 |= var_7;
    var_29 = var_6;
    var_30 = (max(var_30, ((((((((min(var_15, var_16))) ? var_8 : (max(var_0, var_15))))) ? (((((var_12 ? var_13 : var_3))) ? var_0 : (((var_2 ? var_8 : var_1))))) : ((((((var_2 ? var_8 : var_14))) ? var_8 : var_9))))))));
    var_31 = (min(var_12, var_7));
    #pragma endscop
}
