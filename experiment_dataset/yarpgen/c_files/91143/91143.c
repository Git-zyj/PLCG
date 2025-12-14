/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((var_0 || 33) && (var_2 || var_14)))));
    var_20 ^= (max(((((var_15 && var_14) && ((min(var_6, var_5)))))), (max((min(var_16, var_12)), (var_0 || var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_21 *= (min((((271301708258269400 & 57195) ? ((-32027 ? -1 : 18000)) : (((-4303375930734984304 < (arr_3 [i_1] [i_1] [i_1])))))), -11130));
                            arr_9 [i_3] [11] [i_1] [11] [i_1] [11] = ((min((85 ^ 0), ((~(arr_4 [2] [2] [i_2] [i_2]))))));
                            var_22 = ((((+((((arr_7 [9] [i_1] [8] [i_2] [9] [9]) && -4480048214899561022))))) >= (min((arr_2 [i_3] [i_1] [i_0]), (arr_2 [i_0] [i_1] [i_2])))));
                        }
                    }
                }
                var_23 = ((+((((arr_6 [i_0]) < (arr_8 [0] [21] [i_0] [21] [21]))))));
                arr_10 [i_0] [i_1] [8] = (((1324419330 <= 4667636883647956276) || (arr_8 [i_0] [i_0] [i_1] [6] [1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_19 [i_4] [i_5] [i_6] = arr_18 [i_4];
                    var_24 = ((+((((((arr_7 [i_4] [i_4] [i_5] [i_5] [7] [i_6]) || 7148624815647145199))) % (arr_12 [i_4])))));
                    var_25 *= (((min((max((arr_6 [i_4]), -3761993266819895531)), ((((arr_3 [i_4] [8] [i_4]) ^ 4294967295))))) << (arr_14 [i_4] [i_4] [i_4])));
                    arr_20 [2] [i_5] [i_6] [2] = ((((((arr_15 [3] [i_5] [3]) ? (((arr_7 [i_4] [i_4] [i_5] [i_6] [2] [23]) - 32767)) : (((-(arr_11 [i_4]))))))) >= (arr_1 [i_5])));
                }
            }
        }
    }
    #pragma endscop
}
