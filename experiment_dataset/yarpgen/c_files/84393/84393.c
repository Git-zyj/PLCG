/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_5, (max(var_3, var_1))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (max(var_14, (((((((arr_1 [i_0]) ? var_0 : (arr_1 [i_0])))) == ((var_4 | (arr_2 [i_0]))))))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        var_15 = (856269499 || 902273565);
        var_16 *= ((-(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = ((-4435063008983518587 ? (((arr_5 [i_1]) ^ 154608147)) : 42));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_17 += (((((960937277 ? 32767 : (((6251438335073462897 != (-2147483647 - 1))))))) ? (((((32768 >= (arr_17 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4]))) ? (arr_12 [i_1] [i_2] [10] [i_1]) : (((arr_4 [i_3]) ? (arr_13 [14] [i_4]) : 6568))))) : (max(1, (((7 && (arr_9 [i_1] [0]))))))));
                        arr_18 [i_1] [i_1] [i_2] [i_1] = ((var_10 ? (max((min((arr_4 [i_3 + 1]), var_8)), (((~(arr_7 [i_1])))))) : ((min((min((arr_0 [i_2]), (arr_1 [i_1]))), (arr_12 [i_3 + 1] [i_3 - 1] [i_2] [i_3 - 1]))))));
                    }
                }
            }
        }
        arr_19 [i_1] [i_1] = (~4294967276);
    }
    #pragma endscop
}
