/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (((-101 ? ((var_10 ? var_0 : (arr_2 [i_0])) : (arr_5 [i_1] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((((!((!(arr_11 [i_0] [i_1] [i_2] [i_3]))))) ? (((((var_7 ? var_9 : 3274836029665396853))) ? (((arr_11 [i_0] [i_1] [i_2] [i_3]) ? (arr_6 [i_1] [i_0]) : var_11)) : (((min(-1320, 111)))))) : (((((arr_3 [i_3] [i_0]) / var_5))))));
                            arr_13 [i_3] [i_2] [i_1] [i_0] = (max(1, (-8 <= 18446744073709551615)));
                            arr_14 [i_0] [i_0] = ((114 & (((!((((arr_11 [i_0] [i_1] [i_2] [i_3]) ? var_7 : (arr_7 [i_0] [i_0] [i_0] [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_13 = (max(var_13, var_0));
                            arr_21 [i_0] [i_1] = (max(((((!7) ? (((4226481640453211080 ? 1314 : (arr_19 [i_0] [i_0] [i_0] [i_0])))) : 1256331454))), (arr_18 [i_1] [i_1] [i_5 + 1] [i_5])));
                        }
                    }
                }
                var_14 = ((!((min((!4095), ((22131 ? -82 : 504427719)))))));
                arr_22 [i_1] = ((((((-4226481640453211081 + 9223372036854775807) << (4226481640453211080 - 4226481640453211080)))) ? var_0 : (((((arr_1 [i_0] [i_0]) <= (95 - 0)))))));
            }
        }
    }
    var_15 = ((((((!var_0) ? (((32 ? var_2 : var_8))) : (min(var_8, var_0))))) ? 99 : (((1 == (68 & 4194304))))));
    #pragma endscop
}
