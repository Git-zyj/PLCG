/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = ((((!(((var_5 ? (arr_5 [i_0] [i_1] [i_0]) : 0))))) ? (((((max(var_8, (arr_2 [i_2] [i_0])))) ? ((-(arr_1 [i_0] [i_0]))) : ((max(67, (arr_1 [i_0] [i_0]))))))) : ((3129680676 ? (((var_5 ? var_0 : var_7))) : (((arr_2 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : var_3))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = ((+(((((-41392259 ? (arr_6 [i_1] [i_1] [i_1] [i_3]) : (arr_5 [i_4] [i_2] [i_0])))) ? ((129 ? var_4 : 4294967276)) : (((var_2 ? 237 : (arr_5 [i_0] [i_1] [i_0]))))))));
                                var_15 = (min(var_15, ((max((((!var_4) ? -var_9 : ((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_0]) ? 65535 : var_3))))), ((min(((var_6 ? 12019 : -1970151983)), 43776))))))));
                                var_16 = (min(var_16, ((min((max((((arr_6 [i_3] [i_3] [i_2] [i_2]) ? 0 : var_1)), ((var_4 ? (arr_0 [i_0] [i_2]) : var_10)))), ((~(((arr_9 [i_3] [i_3] [i_0] [i_0] [i_0]) ? 77 : var_10)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 += (((((((max(-295503739935424929, 15942))) ? ((var_12 ? var_11 : var_5)) : ((var_3 ? var_12 : var_1))))) ? ((max((((1 ? 36 : var_10))), ((var_7 ? var_0 : 3))))) : (((((1 ? 102 : -15943))) ? ((var_1 ? var_10 : 5610973296151252739)) : (((var_0 ? 3 : var_2)))))));
    #pragma endscop
}
