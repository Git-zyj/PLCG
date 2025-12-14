/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [1] = (min(((((var_3 ? 146508042 : 800493186)) ^ (var_7 || var_7))), (((arr_1 [i_0] [i_0]) ? (!0) : 127))));
        var_16 = ((((arr_0 [i_0]) ? (arr_0 [i_0]) : 1)) ^ ((((arr_1 [i_0] [i_0]) ? 0 : 35))));
        var_17 = (((((127 ^ (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [1]) : (!-36)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 += ((((3838928354 == (!var_6))) ? var_6 : (((var_1 >= var_3) ? -var_7 : (var_13 || var_11)))));
        var_19 = (((((var_14 ? (arr_4 [i_1]) : (arr_4 [i_1])))) ? ((((((18818 ? 784943576 : 0))) >= ((0 ? (arr_5 [i_1]) : var_2))))) : -36));
        var_20 &= (((((arr_0 [i_1]) / (arr_0 [i_1]))) % -var_6));
    }
    var_21 = ((var_13 == (((((var_1 ? -36 : var_6)) >= var_13)))));
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            {
                var_22 = (min(var_22, ((((((arr_11 [i_2] [i_2]) ? (((65535 >= (arr_9 [i_3])))) : (5295 / 1))) % (((!((((arr_7 [i_2]) ? 1 : (arr_7 [i_2]))))))))))));
                arr_12 [i_2] [i_2] = (((((((-650390155 ? var_1 : var_13))) ? ((-(arr_10 [i_2] [i_3]))) : (-79 ^ var_4)))) ? 21916 : (((!(((1326 ? (arr_11 [i_2 - 3] [i_2 - 3]) : 58083)))))));
            }
        }
    }
    #pragma endscop
}
