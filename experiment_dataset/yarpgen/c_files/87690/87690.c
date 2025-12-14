/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((((var_3 ? 1 : 3274926446))) ? (((var_14 ? var_6 : 1020040849))) : ((1940131691017986504 ? var_4 : var_14)))), ((max((((var_12 ? var_2 : -15182))), ((18685 ? var_15 : var_9)))))));
    var_20 = ((((((((var_5 ? var_1 : var_8))) ? ((var_8 ? 4650943891594840807 : var_3)) : ((0 ? var_16 : var_9))))) ? (min((((3274926450 ? var_2 : var_7))), ((var_7 ? var_9 : var_2)))) : ((((((100663296 ? 3274926446 : 1020040831))) ? ((1020040844 ? 0 : var_16)) : ((var_18 ? 18685 : var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = ((((max((((var_5 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_1])))), (((arr_3 [i_1] [i_0]) ? (arr_2 [i_0] [i_1]) : 100663296))))) ? (((((max(32, 65535))) ? ((max(47068, var_7))) : ((15855 ? -1823489282 : var_14))))) : (max(((18446744073709551615 ? 18442011265402085155 : -369517017)), ((((arr_4 [i_0] [i_1]) ? var_13 : -209532488)))))));
                var_22 |= ((((((((var_13 ? -1300 : (arr_0 [i_1])))) ? ((var_8 ? 1020040849 : 3090567798)) : ((((arr_3 [i_0] [i_0]) ? -311023021 : var_5)))))) ? (max(((((arr_3 [i_0] [i_1]) ? 4032 : 57344))), (((arr_2 [16] [i_0]) ? var_16 : var_4)))) : (min((((arr_4 [i_0] [i_1 - 1]) ? (arr_3 [i_0] [i_1]) : var_4)), ((var_13 ? 4855701741150587536 : 0))))));
                arr_5 [i_0] = (((((((((arr_2 [i_0] [i_0]) ? var_2 : (arr_4 [i_0] [i_0])))) ? (((arr_0 [i_1]) ? var_12 : var_2)) : (((arr_3 [i_0] [i_1]) ? var_10 : -6579))))) ? ((((max(var_5, 3090567798))) ? ((5688352007119684861 ? 15559893068172063291 : var_8)) : (((0 ? (arr_2 [i_1] [i_0]) : var_1))))) : (((((max(14066, 10729340739474943109))) ? ((var_10 ? 4161536 : var_2)) : ((var_12 ? (arr_0 [i_0]) : var_3)))))));
            }
        }
    }
    #pragma endscop
}
