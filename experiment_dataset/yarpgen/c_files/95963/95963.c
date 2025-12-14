/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (arr_3 [i_0]);
                arr_6 [i_1] = ((((16004738467472830092 ? 531861377 : (arr_0 [i_0])))));
                var_13 = (min((arr_3 [i_0]), (arr_4 [i_0 + 3] [i_1 - 1] [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, ((((((((((arr_1 [9] [i_1]) ? (arr_4 [i_0] [i_0] [i_0]) : var_0))) | (2442005606236721523 << 35)))) ? (((!(arr_3 [i_0 - 1])))) : ((min(24782, 0))))))));
                            var_15 = ((((((arr_7 [i_0] [i_0 - 1] [i_0]) ? (arr_7 [i_0] [i_0 + 2] [2]) : (arr_7 [i_0] [i_0 + 3] [i_0 + 3])))) ? (((!(~var_2)))) : (((arr_8 [i_0] [i_1] [10]) ? ((max(-7, var_4))) : (((arr_0 [5]) >> (var_8 - 1496569413)))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, var_6));
    var_17 = (-21774 != 13713);
    var_18 = -var_3;
    #pragma endscop
}
