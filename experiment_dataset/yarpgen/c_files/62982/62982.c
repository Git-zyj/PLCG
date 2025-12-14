/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((min(((min(509454394, -50))), -846294924443227354))) ? (max(16984, -8326873849859378160)) : 3400776960));
                var_10 = (max((((((894190342 ? 16970 : (arr_4 [i_0])))) ? ((48584 ? -1642324508 : var_4)) : (((var_9 ? (arr_1 [8] [8]) : (arr_4 [i_0])))))), (((((max(var_8, 9300337154973280817))) ? ((var_3 ? -1810918680 : var_8)) : ((((arr_1 [4] [4]) ? 650465723 : (arr_0 [i_1])))))))));
                var_11 = (max(509454413, 4265911848));
                arr_6 [i_1] [i_0] [i_0] = ((((max(((max(var_1, var_2))), (max((arr_0 [i_1]), var_5))))) ? (((((min((arr_4 [i_0]), var_6))) ? (max((arr_2 [i_1] [i_0]), 3476606972)) : (((48584 ? (arr_3 [i_0] [i_0] [i_1]) : -1642324478)))))) : (max(((max(4369, var_0))), ((277970523 ? var_4 : 1569177168))))));
            }
        }
    }
    var_12 = (max(var_12, ((((((((max(var_5, var_6))) ? (min(9146406918736270809, var_1)) : (((543308501 ? var_4 : var_1)))))) ? (max((min(2688046953356827760, var_5)), (((var_8 ? var_9 : var_5))))) : (min(3785512887, 6485904847813600720)))))));
    var_13 += (max(((min((min(var_7, var_3)), (max(var_2, var_7))))), (((((240 ? var_5 : -40))) ? ((var_9 ? var_0 : 3400776956)) : (((var_9 ? 159 : var_2)))))));
    var_14 -= (max((((-650465724 ? 240 : 39))), (max((min(3825554603397657747, 9300337154973280809)), ((min(var_1, var_5)))))));
    #pragma endscop
}
