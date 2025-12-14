/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = -10005;
                var_11 = (max(517227917, 704017371));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_12 = (max((arr_6 [i_2] [i_2]), (max(var_9, (arr_2 [i_2] [i_2])))));
        arr_7 [i_2] = var_0;
        var_13 = (arr_1 [i_2]);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_14 ^= ((((((arr_6 [i_3] [i_3]) ? 65535 : ((-(arr_6 [i_3] [i_3])))))) ? (28930 | -962430218) : (((!(arr_0 [i_3] [i_3]))))));
        var_15 = ((32767 ? 152 : -443585223));
        var_16 = (~(arr_5 [i_3]));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_17 = ((((max((max(13322810026286089419, 13884)), ((max(35, (arr_1 [i_4]))))))) ? (!var_2) : var_7));
        var_18 ^= (((arr_2 [i_4] [i_4]) ? (~-4904808732035703897) : (arr_1 [i_4])));
    }
    #pragma endscop
}
