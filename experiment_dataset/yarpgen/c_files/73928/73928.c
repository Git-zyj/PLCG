/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 4195075516;
        var_16 = (((((3287540086 ? 1073741824 : 1007427215))) && ((max(3287540068, (arr_0 [i_0]))))));
        arr_5 [9] = ((1007427215 + 3287540086) - var_2);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_17 += arr_7 [i_1];
            arr_13 [i_1] = (4294967295 * (~3821138389));
        }
        var_18 = 2452857259;

        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            arr_16 [0] [i_1] = arr_12 [i_1] [i_1] [i_3];
            var_19 = (max(var_19, (arr_11 [i_1] [i_1] [i_1])));
            var_20 = ((((var_12 ? 562959143 : 4269520201))) ? (((((var_15 ? var_0 : 3706863136))) ? (arr_11 [i_3] [i_3 + 1] [i_3]) : (((arr_6 [i_1]) + (arr_7 [i_1]))))) : 0);
        }
    }
    var_21 = ((((var_1 == 4294967295) < ((0 ? 1996255661 : var_4)))) ? (((var_8 & 25447084) ? var_10 : ((1007427224 ? 311697840 : 3755878781)))) : var_13);
    var_22 = (1409001759 != 1967190613);
    var_23 = (var_4 ? var_10 : var_5);
    #pragma endscop
}
