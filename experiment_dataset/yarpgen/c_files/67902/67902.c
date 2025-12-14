/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 -= ((((((267911168 * 4027056114) || (((var_5 ? var_1 : var_1)))))) * (((var_5 == var_6) / (var_2 * var_5)))));
                arr_4 [i_0] [i_0] [i_0] = (((((3920414656225284782 ? 4027056126 : 4027056114))) ? (((var_4 % var_3) / var_2)) : ((((((var_3 ? var_9 : var_6))) ? ((var_2 ? var_5 : var_3)) : (var_7 != var_3))))));
            }
        }
    }
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_11 [i_3] = ((((((((var_10 ? var_0 : var_10))) || (var_8 ^ var_9)))) & ((var_9 << ((((var_0 ? var_8 : var_7)) - 3853470168))))));
                var_13 = ((var_1 ? ((((var_9 ^ var_5) ^ var_3))) : var_1));
                var_14 ^= (((((var_2 * ((var_9 ? var_5 : var_10))))) ? (((var_2 * var_9) << (((((var_3 + 2147483647) << (var_10 - 5005455434662349133))) - 2147470831)))) : ((((((var_5 ? var_3 : var_3)) + 2147483647)) << (((1 + 1) - 2))))));
                var_15 = (min(var_15, (((((((var_8 & 21657) ? var_3 : (-9684 || 0)))) ? (((267911169 / var_10) ? (var_2 | var_5) : (var_2 | var_6))) : ((((var_7 ? var_5 : var_6)) * ((var_5 ? var_1 : var_6)))))))));
            }
        }
    }
    var_16 = (((var_4 >> ((((var_2 ? var_3 : var_2)) + 12859)))) & ((((1 >> 11) | ((var_7 ? var_1 : var_10))))));
    var_17 = (((((((var_1 ? var_1 : var_6))) ? (var_4 / var_6) : (((var_5 >> (var_4 - 17606427953292375045)))))) >= ((((var_9 && (((var_8 ? var_2 : var_1)))))))));
    #pragma endscop
}
