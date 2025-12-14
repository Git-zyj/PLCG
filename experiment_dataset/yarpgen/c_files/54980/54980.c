/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (!var_1)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_15 *= max(1, 1);
                    arr_9 [i_0] [5] [i_0] = ((1 ? 24119 : 1));
                    arr_10 [i_0 - 1] = arr_0 [i_0] [i_0];
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_3] = var_5;
                    arr_14 [i_0] [i_0] [1] = var_5;
                }
                arr_15 [i_0] = (((((-16 / (arr_0 [i_0] [i_1 - 1])))) ? 1 : (arr_8 [i_0] [i_0] [10] [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                {
                    var_16 = ((4232599912376825700 ? ((~(max(var_2, 4232599912376825700)))) : (arr_16 [i_5])));
                    var_17 = var_11;
                    var_18 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
