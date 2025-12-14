/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((9180059218993042836 ? (arr_0 [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1])))) ? (arr_1 [14] [i_0]) : (((!var_2) ? 7154386800473280933 : (((((arr_0 [i_0] [i_0]) && 0))))))));
        var_11 = (min(var_11, (arr_0 [i_0 - 2] [i_0 - 1])));
        var_12 = (max(var_12, 764346420));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 1] = (((arr_5 [i_1 - 2]) ? ((max(32, var_3))) : (((((((arr_1 [i_1] [i_1]) ? var_3 : (arr_1 [i_1 - 1] [1]))) != ((((arr_0 [15] [i_1]) ? -2036467937 : 1)))))))));
        var_13 = ((((((arr_4 [i_1 + 1]) % var_4))) ? ((var_5 ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 + 1]))) : ((11675830955653919831 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 2])))));
    }
    var_14 = ((87 ? 77 : -1476478696));
    var_15 = var_10;

    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_16 = (max((((-30295 ? 20012 : 2036467921))), (arr_8 [i_2] [i_2 + 1])));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_16 [i_2] = (29655 % 1554702635);
                    var_17 = (-(((-1416858241 + 2147483647) >> (var_0 - 8580))));
                    var_18 = (min(((((((arr_7 [i_2]) ? var_9 : (arr_1 [i_2] [i_2])))) ? (arr_4 [i_2]) : ((var_7 ? var_2 : (arr_3 [i_2] [i_2]))))), ((-(arr_1 [i_2 - 2] [i_3 + 1])))));
                    var_19 += (max(20, (arr_1 [i_2 + 1] [i_3 + 1])));
                }
            }
        }
    }
    var_20 = (max(var_2, -1083505557));
    #pragma endscop
}
