/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((((((-117 ? var_9 : -117)) * (var_1 + 178)))) - (116 / -3828681043172446783)));
                var_14 = (((min((arr_2 [i_1 - 2]), -3828681043172446783)) * (arr_2 [i_1 - 3])));
                var_15 -= (max(((((((var_5 ? (arr_5 [i_0] [6]) : (arr_1 [i_0] [i_0])))) ? -1841 : (arr_5 [i_0] [1])))), (-3828681043172446783 + 30)));
            }
        }
    }
    var_16 = (min(var_16, ((max(var_5, (max((max(var_2, var_10)), 1)))))));
    var_17 = ((((((((var_9 >> (var_3 + 1849502201)))) & (3165228388869960817 - var_9)))) % (max((((var_3 ? -536870912 : var_11))), var_2))));
    var_18 = 148;
    #pragma endscop
}
