/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((((min(20304, 131)))) / (min(var_7, var_3)))), ((min((((var_12 << (var_8 - 4360920668306659704)))), ((var_1 ? -20304 : var_11)))))));
    var_15 = (((((((((-32168 ? var_0 : var_2))) ? (var_5 / var_12) : (min(var_13, 4895202434684367750)))) + 9223372036854775807)) << (((min((17016898300106250979 - -20322), (((var_5 ? var_1 : var_13))))) - 340145664))));
    var_16 = (((((var_7 + var_12) ? ((var_10 ? var_5 : var_1)) : (((var_13 ? var_1 : var_9))))) - (min((max(var_13, var_4)), ((var_8 ? -4895202434684367762 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((((-4895202434684367772 ? var_13 : var_11))) ? (((arr_4 [4]) / var_4)) : (((0 ? 4895202434684367761 : 20298))))) / ((((224 << 0) % (((arr_0 [4]) << (5451 - 5437)))))))))));
                var_18 = ((((((((arr_5 [i_1]) ? 2 : var_3))) && (var_13 && 2553022833))) ? ((((max((arr_4 [3]), (arr_4 [i_0 - 2])))) ? (min(-7825693003520305188, (arr_1 [i_0 - 2] [i_0]))) : ((min(var_13, -4895202434684367772))))) : (((((-20304 ? var_3 : 20322))) * (var_8 / var_5)))));
                var_19 -= ((((((20322 ? var_6 : -751))) / ((var_5 ? (arr_4 [5]) : var_3)))) << ((((((max(20331, var_8))) ? ((max(var_13, 68719476735))) : (min((arr_0 [6]), (arr_4 [i_1]))))) - 68719476700)));
                arr_6 [i_0] [i_0] = (min((min((max(-307415357, -4895202434684367758)), ((((arr_2 [i_0]) ? -765 : 3816884148))))), (max(((min((arr_5 [i_0]), (arr_3 [i_0] [i_1] [8])))), (max(-2274301954252682550, 11000))))));
            }
        }
    }
    #pragma endscop
}
