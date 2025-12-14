/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (min(((var_7 ? var_3 : (~-1521628876))), (135291469824 > 1563133123)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, var_0));
                            var_12 ^= (((2015408842 + -1521628880) || 10));
                            arr_11 [i_0] [i_3] [i_0] [16] [8] = arr_9 [i_2 + 2] [i_2] [i_2] [i_2 + 2];
                        }
                    }
                }
                arr_12 [2] [1] [10] = var_2;
                arr_13 [i_0 + 1] = 15;
            }
        }
    }
    var_13 = ((((((1521628882 + 46) ? (max(8521837904516155229, -740536858)) : var_5))) ? var_0 : ((((~18446743938418081791) != var_9)))));
    var_14 = (min(var_14, ((((((3670016 ? 6241996380338457591 : (min(47, 135291469824))))) ? var_2 : var_2)))));
    #pragma endscop
}
