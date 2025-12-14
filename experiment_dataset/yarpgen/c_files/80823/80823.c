/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (((((17262 ? 1 : 17262))) ? ((var_3 ? 69269232549888 : var_7)) : (((arr_2 [i_0]) % var_4))));
                var_12 ^= ((((((arr_4 [i_0] [i_0] [i_0]) ? var_8 : var_1))) ? ((((((arr_3 [i_1]) ? 69269232549888 : 18446744073709551615))) ? ((128 ? 48283 : 69269232549888)) : ((((arr_0 [i_0]) & (arr_6 [i_0] [i_0])))))) : (((var_7 ? 17259 : ((((arr_2 [i_1]) && var_10))))))));
                arr_7 [i_0] [i_1] [17] = (((124 || 49120) ? ((((((arr_2 [i_0]) ? var_4 : 128))) ? (arr_2 [i_0]) : (((arr_3 [i_1]) ? var_8 : var_10)))) : (((var_3 ? (arr_5 [i_0] [i_1]) : (arr_5 [i_1] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_12 [i_2] = (((((var_1 ? (((arr_2 [i_2]) ? 17262 : var_7)) : var_9))) ? (((arr_8 [i_2] [i_3]) ? var_8 : var_5)) : (((69269232549888 ? (arr_10 [i_2] [i_2] [i_2]) : 32512)))));
                arr_13 [i_2] [i_3] [i_3] = (((((((arr_6 [i_2] [i_3]) ? (arr_2 [i_2]) : (arr_1 [i_3]))) / (arr_8 [i_2] [i_3]))) ^ (((var_1 ? var_5 : (arr_5 [i_3] [i_2]))))));
            }
        }
    }
    #pragma endscop
}
