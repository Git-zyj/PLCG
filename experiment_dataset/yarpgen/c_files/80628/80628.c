/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [1] = ((((((-2147483647 - 1) ? 2251795518717952 : 4294934528))) ? ((max(36028796985409536, (((var_6 ? (arr_3 [i_2] [i_1] [i_0]) : var_11)))))) : ((((max(0, var_5))) ? (((var_9 ? var_1 : var_2))) : (arr_0 [i_0 + 1])))));
                    var_13 *= ((!(arr_4 [i_0] [i_1])));
                }
            }
        }
    }
    var_14 = var_7;
    var_15 = var_5;
    var_16 = (max(var_16, 18446744069414617077));

    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        var_17 = (max(((9007198986305536 ? 4294934526 : -1)), (((~(arr_5 [i_3] [i_3 - 2] [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {
                    var_18 = ((267911168 ? 65535 : ((18446744073709551615 ? ((min(2048, 2048))) : ((min(4, 96)))))));
                    arr_15 [i_4] [i_4] [i_5] [i_5] = ((((arr_12 [i_3] [i_3] [i_3]) ? (((-32740 ? var_9 : (arr_2 [i_5])))) : (arr_13 [i_3] [i_4 - 1] [i_4] [i_5]))));
                }
            }
        }
    }
    #pragma endscop
}
