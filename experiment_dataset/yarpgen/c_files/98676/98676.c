/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = var_2;

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_15 = arr_1 [i_0 + 2];
        var_16 = ((((max(((max(-35, -31035))), (((arr_0 [i_0]) & 2140682133))))) ? ((((4114379888 - 1480182911) < (arr_0 [i_0])))) : (arr_0 [i_0 - 1])));
        arr_2 [i_0] = (((((((-66 | 427815426) + 2147483647)) << (((max(35, 2814784385)) - 2814784385))))) ? (((((arr_0 [5]) >> 0)) | (arr_0 [i_0]))) : 0);
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_17 = (arr_3 [8]);
        arr_5 [i_1] [15] = -103;
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 4; i_3 < 13;i_3 += 1)
        {
            var_18 += 221;
            var_19 = (arr_4 [i_2]);
        }
        var_20 = ((((max((((-9491 == (arr_9 [i_2])))), 98))) == ((~((max((arr_11 [i_2]), -19123)))))));
    }
    var_21 = ((max(((max(127, 26833)), (max(var_8, var_9))))));
    #pragma endscop
}
