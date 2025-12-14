/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = var_13;
        arr_5 [i_0] [i_0] = ((((((min(var_15, var_8))) + (max(var_7, 59))))));
        var_16 = ((((-77 == 13181221969269799650) ? (((-8192 ? var_5 : (arr_2 [i_0] [i_0])))) : (min(0, var_1)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_17 += (((((((arr_13 [i_1] [i_1] [i_1]) ? 13181221969269799650 : -5360152313852519703)))) ? (var_9 & -8180) : (max(((((arr_3 [8]) > 2102274156))), (min(3211467933, (arr_17 [i_1] [i_1] [i_3] [i_3] [i_4] [i_4])))))));
                        var_18 = (max((((min(-5360152313852519724, -8170)))), (arr_3 [i_1])));
                        arr_18 [i_1] [i_2] [i_4] |= (!(arr_11 [i_1] [i_2] [i_3] [i_4]));
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [10] &= ((+(((arr_14 [i_4] [i_4] [i_4 + 1] [i_4]) ? (30708 ^ -5360152313852519703) : var_9))));
                    }
                    var_19 = ((((((arr_10 [i_3] [i_2]) ? (~5265522104439751963) : (11382345246072378308 ^ 8164)))) ? 31185 : -12011217));
                }
            }
        }
        var_20 = var_5;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_21 = ((-(((230635347 + (arr_24 [i_5]))))));
                var_22 = 5360152313852519699;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_31 [i_5] [i_6] [i_8] [i_5] = ((-((((arr_27 [i_8] [i_7] [i_6] [i_5]) <= ((max(-28672, var_10))))))));
                            var_23 = (max(var_23, (((13181221969269799662 ? (min(12262679590348051918, 0)) : ((((!(arr_20 [i_5]))))))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (((8169 ? 111 : 5360152313852519702)));
    #pragma endscop
}
