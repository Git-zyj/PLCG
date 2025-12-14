/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 -= ((((!(!var_5))) ? (!var_15) : (arr_1 [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 = 12990;
                        arr_11 [i_1] [i_2] = ((-(((!((min(var_11, var_10))))))));
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, ((max((var_10 == var_13), ((((min(106147758, 155))) ? var_15 : var_4)))))));
    #pragma endscop
}
