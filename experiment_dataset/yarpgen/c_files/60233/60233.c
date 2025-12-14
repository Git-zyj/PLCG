/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 ^= ((((((((var_2 ? var_12 : var_10))) ? (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_2 [1]))) : ((1 ? -104 : 65525))))) ? ((-(!-6600))) : ((~(arr_1 [6])))));
        var_21 = (min(var_21, ((((((var_3 ? 19 : var_18)) | (arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (min(var_10, (min((arr_2 [i_1 - 3]), (min((arr_3 [i_0] [i_1 - 3] [i_2]), (arr_6 [i_0])))))));
                    var_23 = (min(var_23, ((min((((min(var_8, var_4)))), (max(2401290729245296144, 50)))))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3 - 2] &= ((!(((var_9 ? 68 : (var_19 - 620158687))))));
        var_24 = ((((((((arr_9 [i_3] [i_3]) << (var_4 - 35528))) & (arr_7 [i_3])))) | 4270531392528504998));
    }
    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_25 = 2401290729245296144;
        var_26 = (0 ^ 1);
    }
    var_27 = ((min((65513 * 68), 65052)));
    var_28 = ((((1 ? 21267 : 360)) % var_11));
    #pragma endscop
}
