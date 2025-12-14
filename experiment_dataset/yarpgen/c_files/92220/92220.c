/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(((3051185786 ? var_10 : 56)), (max(var_10, var_13))))) ? ((((var_12 * 3719610587) ? var_10 : ((4995879235251710875 ? 3165747247 : 15370))))) : (min(((var_13 ? var_4 : var_4)), (((var_12 ? var_14 : var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (((((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_2 + 1]) : (arr_1 [i_0 - 1] [i_2 + 1])))) || ((max((((~(arr_8 [i_1] [i_2] [i_1])))), (max(var_15, 7791920463842955524))))));
                    var_18 = (((((-((1243781510 ? (arr_6 [i_2] [20] [1]) : 16857794576229945140))))) ? 1399238460 : (arr_5 [i_0] [i_1] [6])));
                    var_19 += 11273400753741072526;
                    var_20 = (min(var_20, (((((((arr_5 [i_0] [i_0] [i_0 - 1]) ? (((!(arr_0 [12])))) : ((-80 ? (arr_6 [i_0] [i_1] [i_0]) : (arr_5 [i_0 - 1] [17] [i_2])))))) ? (arr_5 [i_0 - 1] [i_2 - 1] [i_2]) : (min((arr_1 [i_0 - 1] [i_1]), 3719610587)))))));
                    var_21 = var_13;
                }
            }
        }
    }
    #pragma endscop
}
