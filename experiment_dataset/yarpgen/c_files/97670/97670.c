/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((max(-4851571183790198694, 3316)) | (var_10 ^ 0)))) ? (1 > 0) : ((max(-31, var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0 - 1] = ((((max((((var_5 ? (arr_0 [i_0 + 2]) : 225))), (min(5900269739663680231, 37758))))) ? (max((arr_2 [i_0 + 1]), ((63 ? 14 : 65522)))) : (arr_2 [5])));
                var_12 ^= 90;
                var_13 = (min(var_13, (((49 ? -104 : 192)))));
            }
        }
    }
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_15 = (max((~var_3), ((max(((-1 & (arr_8 [i_2]))), (-32767 - 1))))));

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_16 |= ((~((max((arr_6 [i_2 + 1] [i_2 + 4]), (arr_6 [i_2 + 4] [i_2 - 1]))))));
                    arr_12 [i_2] [i_3] [i_4] [i_3] = ((((~103) > ((var_10 ? var_6 : (arr_10 [i_3]))))) ? (arr_5 [i_2] [i_3]) : (arr_11 [i_2] [i_2] [i_2 + 1]));
                    var_17 = (arr_5 [i_3] [i_4]);
                }
                arr_13 [i_2] [i_3] = ((+(min((((arr_5 [i_3] [i_2]) ? (arr_10 [i_3]) : var_7)), (arr_8 [i_3])))));
                var_18 += arr_8 [i_2 - 2];
            }
        }
    }
    var_19 = ((((max(var_5, var_0))) ? var_7 : (max(var_4, ((-26245 ? var_0 : 4064))))));
    #pragma endscop
}
