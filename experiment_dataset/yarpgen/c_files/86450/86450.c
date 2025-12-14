/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (((~29072) ? ((~((min(1, 1))))) : (min((~var_0), 1))));
    var_16 = (min(var_11, ((-839 ? (0 + 674675760) : -1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-((((((arr_1 [i_0]) ? 1 : var_11))) + (arr_2 [i_0])))));
                var_17 -= ((1 ^ (((-2147483647 - 1) ? (2143661002277927247 ^ 1) : (((~(arr_1 [i_1]))))))));
                var_18 = (((arr_3 [i_0]) ? (arr_0 [i_0 - 1]) : (min(((-923509485 ? 1005676049 : (arr_3 [i_0]))), (((-9223372036854775806 ? 197 : var_8)))))));
                var_19 = (min((max((arr_4 [i_0] [i_1] [i_0 + 1]), (arr_4 [i_0] [i_1] [i_0 - 1]))), (((arr_4 [i_0] [i_0] [i_0 + 1]) / (arr_4 [i_0] [i_0] [i_0 + 1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_20 &= 19;
                arr_13 [i_3] [i_3] [i_2] = ((((min(((6184178897738590612 ? 27 : 9223372036854775806)), (arr_9 [i_3] [i_2])))) | (arr_12 [i_2] [i_2])));
                var_21 = ((((((16686014380288313946 ? -123 : 1308490563314452701)))) ? (arr_9 [i_2] [6]) : (((((min((arr_11 [8] [i_3] [i_3]), (arr_8 [i_2])))) || ((!(arr_11 [0] [i_3] [i_3]))))))));
                arr_14 [i_3] [i_3] = (arr_7 [i_2]);
            }
        }
    }
    #pragma endscop
}
