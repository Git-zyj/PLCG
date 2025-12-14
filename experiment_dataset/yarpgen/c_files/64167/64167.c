/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_7;
    var_21 -= ((var_19 ? ((1842657256 ? ((60446 ? 0 : var_5)) : (var_14 - var_1))) : ((((max(1, var_5))) / (var_16 * var_7)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((!(min((arr_1 [i_0] [i_0]), (!0)))));
        arr_5 [i_0] [i_0] = (max((arr_1 [i_0] [i_0]), (max(-1835825848, (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [0] &= (max((arr_0 [i_1]), (!var_0)));
                    arr_11 [i_0] [i_1] [i_0] [i_2] = (min((max(var_18, (arr_3 [i_1]))), ((max(var_19, (arr_3 [i_1]))))));
                    var_22 = (arr_9 [i_2]);
                    arr_12 [i_0] [i_0] = (((((1 ? 242 : 1)))) == 1);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_17 [i_4] = (((((min(var_13, var_4))) != ((min(var_9, 1))))) ? ((((arr_9 [i_4]) && 1))) : ((1156680678 ? 2145386496 : 1)));
            var_23 = ((((max((min(1, (-2147483647 - 1))), ((12931385663423715113 ? (arr_6 [i_3] [i_4]) : var_10))))) ? ((~((0 ? 50 : (arr_0 [i_4]))))) : (!1)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_21 [i_3] [i_5] = ((-(arr_13 [i_5])));
            var_24 = (((((1 ? 61566 : 38392))) ? ((((arr_9 [i_5]) >= 0))) : (arr_16 [i_3] [i_5])));
            var_25 = ((+((var_3 ? (arr_1 [i_3] [i_3]) : 0))));
            var_26 = (max(var_26, (~65535)));
            arr_22 [i_5] = ((arr_3 [i_3]) ? (arr_3 [i_3]) : (arr_3 [i_3]));
        }
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            arr_25 [i_3] &= (arr_20 [i_6]);
            var_27 = (1 != 61);
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_28 -= ((-((-0 * ((-104 ? 1 : 5515358410285836490))))));
            var_29 ^= ((-(max(5515358410285836510, 65531))));
        }
        var_30 = (((1 ? 1 : 0)));
        var_31 = (15360 == 5515358410285836490);
        var_32 = ((-((max((arr_15 [i_3]), 4032)))));
    }
    #pragma endscop
}
