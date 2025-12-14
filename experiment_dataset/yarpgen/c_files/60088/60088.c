/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 7094;
    var_11 &= (min(var_4, ((var_1 ? -21212 : (min(var_3, var_0))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 -= (((var_8 == var_0) ? (-30734 && var_8) : var_7));
        var_13 -= (((var_7 && var_9) || (((var_8 ? -30734 : 30733)))));
        var_14 = ((218 == ((var_6 ? var_1 : var_7))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, 4728));
                    var_16 += var_1;
                    var_17 = var_4;
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        arr_9 [i_3] = var_8;
        var_18 = (min(-30734, (min((max(4503599627370495, var_9)), ((min(var_2, var_4)))))));
        arr_10 [i_3] [i_3] = var_8;
        var_19 ^= min(((min(((var_6 ? var_4 : var_3)), ((min(65521, 4722)))))), (min((max(-8970790507609811094, var_6)), ((min(1912906210, -504715500))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_20 -= 45194;
        arr_15 [i_4] = (max(var_3, ((((1 ? 41 : 6586631888211434361)) << (var_4 + 118)))));
    }
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_21 = 2917097085;
                        var_22 = (min(((((max(1, var_9))) ? (max(var_7, 0)) : var_9)), ((-4728 ? (max(var_5, 18446744073709551613)) : (((var_1 ? 1050933297 : 463095817)))))));
                        var_23 = (max(var_23, ((min(((var_9 ? ((var_4 ? var_6 : var_1)) : ((min(-504715500, var_2))))), ((((var_3 + var_8) <= (min(var_2, var_6))))))))));
                    }
                }
            }
        }
        var_24 = (min(var_24, (((((((min(var_8, var_9)) * var_4))) <= (max(((0 ? var_6 : var_6)), (max(var_8, var_0)))))))));
    }
    var_25 *= var_6;
    var_26 = (min(var_26, (((((((((max(var_4, var_0))) ? ((min(var_4, -2025))) : ((max(10692, var_4))))) + 2147483647)) << (((max(147, 5195484388930504461)) - 5195484388930504461)))))));
    #pragma endscop
}
