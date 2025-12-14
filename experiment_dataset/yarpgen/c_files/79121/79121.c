/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((-2064771227970596646 - (max((((2064771227970596645 ? 48807 : 58))), 3706226452155397552))));
    var_15 = var_3;
    var_16 = ((2064771227970596645 ? var_7 : ((((var_13 ? var_6 : -4733948036165014843)) << (50 - 30)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (-((6142066713255372763 ? var_11 : 3706226452155397553)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((40260 / (arr_15 [i_1 + 3] [i_1] [i_1] [i_1 - 1] [i_1]))))));
                            arr_17 [i_0] = (((min((min(-1949237585, 3706226452155397578)), 48)) <= (!var_10)));
                            var_18 = (min(var_18, (1 / 7680)));
                            var_19 = (min(var_19, ((((((24843 & ((var_12 ? var_4 : var_13))))) ? var_10 : ((min(3832526011754301090, ((var_11 || (arr_16 [i_0] [i_1] [0])))))))))));
                            arr_18 [i_0] [i_0] [8] [8] [i_0] [i_3] = ((1 >> (3311402844186687908 - 3311402844186687877)));
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_1] = var_1;
            }
        }
    }
    #pragma endscop
}
