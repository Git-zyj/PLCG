/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 47637;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((~(((!((max(17, var_13))))))));
                    arr_11 [i_2] [i_2] = (min((((arr_0 [i_1 - 3] [i_1 + 1]) ? (!var_2) : 1)), (((-(1 && -21471))))));
                }
            }
        }
        var_15 &= (~0);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_16 += ((1 ? ((((max(6777272191792795788, -13))) ? (-32767 - 1) : var_10)) : (((3348315423114484617 ? (((arr_7 [0]) ? 1505846217032227788 : -1505846217032227799)) : var_3)))));
                        var_17 = (min(-1505846217032227783, (arr_16 [i_0] [i_0] [i_4])));
                        var_18 = ((-(min((arr_18 [6] [6] [6]), -15762))));
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_19 = (+(((arr_25 [i_6 + 1] [i_6 + 1]) ? (arr_8 [i_6] [i_6 - 2] [i_6 - 1]) : (arr_25 [i_6 + 2] [i_7]))));
                        var_20 = min((((!var_6) ? ((min(var_3, (arr_13 [i_7])))) : (arr_7 [i_8]))), var_1);
                        var_21 = 26074;
                    }
                }
            }
        }
        arr_29 [i_6] = (arr_15 [16] [10] [i_6 - 1]);
    }
    #pragma endscop
}
