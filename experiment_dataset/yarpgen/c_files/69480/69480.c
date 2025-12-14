/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 |= (max((max((arr_10 [i_0] [i_3 - 1] [i_3 - 1] [i_3]), var_2)), (((~(((arr_6 [2]) ? 17564 : 2147483647)))))));
                            var_21 = ((((arr_11 [i_0] [i_3]) ? (((1 ? (arr_11 [i_2] [i_2]) : (arr_5 [i_0] [i_1])))) : 2681728913341820609)));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] = ((~(max(var_2, 0))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max(0, ((3796483752718881639 ? 15083722211665806629 : 11))))) ? 2636344136665337147 : ((2793942354233042925 ? ((min(var_12, var_10))) : ((-8484 ? (arr_0 [i_0]) : (arr_3 [i_1] [i_2] [3])))))));
                        }
                    }
                }
                arr_16 [i_1] = ((-((~(!-477294502)))));
                var_22 = ((((max((min((arr_11 [i_0] [i_1]), (arr_0 [1]))), (arr_12 [i_0])))) ? ((-8972126818868666959 ? (!-68) : (arr_1 [i_0] [i_0]))) : ((var_1 ? -1422265261 : (arr_10 [i_0] [i_1] [i_0] [i_1])))));
                arr_17 [i_1] = var_1;
            }
        }
    }
    var_23 = (var_1 ? (!15202) : ((((max(-8501, var_15))) ? 3885886682 : 2636344136665337147)));
    #pragma endscop
}
