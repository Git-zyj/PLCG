/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((max(var_0, 11764929047950023880))))));
                arr_4 [i_0] [i_0] [i_0] = (max((max((arr_1 [i_1]), (max(6681815025759527735, var_7)))), ((-((var_7 ? var_3 : var_5))))));
                arr_5 [i_0] = (!var_12);
            }
        }
    }
    var_14 ^= var_3;
    var_15 = (max(((-((6681815025759527746 ? var_12 : var_6)))), (((var_5 && (var_0 || 22845))))));
    var_16 = (((!6681815025759527746) ? (max((max(var_0, -1159470856)), ((max(var_4, var_12))))) : ((((!((max(571957152676052992, 18176665894996894847)))))))));
    #pragma endscop
}
