/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (((var_12 ? (arr_1 [i_0]) : (((arr_0 [i_0] [i_0]) ? var_12 : (arr_0 [i_0] [i_0]))))) % var_8);

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_20 = (((max((arr_0 [i_0] [i_0]), (var_7 / 65535)))) ? (((72680062 != 65526) ? 654455886512616407 : 4479777543887220909)) : 65535);
            var_21 = ((!(((var_16 ? var_3 : var_16)))));
        }
        arr_4 [i_0] [i_0] = ((1 ? 1 : 27));
        arr_5 [i_0] = (((((var_10 ? 65535 : var_17))) ? ((1 ? 8876028242733547623 : 24584)) : var_4));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_22 = -8876028242733547650;
                arr_13 [i_2] = (((((var_10 ? var_16 : 24))) ? ((min((arr_6 [i_2] [i_3]), (arr_6 [i_2] [i_2])))) : 65535));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_19 [i_2] [i_2] [i_4] [8] = min((((var_3 ? (arr_6 [i_2] [i_6]) : (arr_6 [i_2] [i_6])))), -9223372036854775797);
                            var_23 = ((var_5 ? (max((23547 > 1), ((30990 ? 13522 : 9115555101271568463)))) : (((((arr_9 [i_2]) || var_0))))));
                        }
                    }
                }
            }
            var_24 = (((((var_0 ? var_11 : (arr_10 [i_2] [i_3])))) ? (max((var_1 >= var_3), (((arr_14 [i_2] [i_2] [i_3]) ? 1 : 3716942474)))) : (((arr_6 [i_2] [i_3]) ? (arr_6 [i_2] [i_3]) : var_9))));
        }

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_25 = (((((arr_11 [i_2]) ? var_3 : var_1)) != 11));
            arr_23 [i_2] = var_9;
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_27 [i_2] [i_2] = (arr_24 [i_2]);
            arr_28 [i_2] [i_8] [i_2] = ((((((-9223372036854775791 ? 8876028242733547623 : var_5)) <= var_10)) ? ((max(0, (arr_14 [i_2] [i_2] [i_2])))) : (((((var_15 ? var_6 : 1))) * 1))));
        }
    }
    var_26 = var_12;
    var_27 = var_11;
    var_28 = 53508;
    #pragma endscop
}
