/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((53694 ? 11842 : -3154)));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_13 = (max((((((11842 ? 32754 : -32755))) ^ (((arr_0 [0]) ? 1 : -5019134901617279735)))), ((1 ? var_3 : ((((var_3 >= (arr_0 [i_0])))))))));
                        var_14 = ((+(((((((arr_7 [i_0 - 3] [i_0] [i_2]) | 11843))) <= ((3272582999 - (arr_3 [i_0]))))))));
                    }
                }
            }
        }
        arr_8 [i_0] [1] = (((((19451 ? var_6 : 53684)) - -32755)) <= (((max(0, (11842 != 1))))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_15 = ((((max((!32754), 6386180983946579537))) ? (var_1 | 19474) : (arr_9 [i_4])));
        var_16 = (((((((11842 ? (arr_9 [i_4 - 1]) : var_10))))) > (arr_9 [i_4 - 1])));
    }
    var_17 = 1;
    #pragma endscop
}
