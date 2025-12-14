/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (7945 != 246);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1 + 1] [i_1 + 1] = (!((!(((arr_1 [i_0] [i_1 + 1]) != 246)))));
                    var_19 ^= (((((var_9 >> (((!(arr_3 [i_0] [i_1] [i_2]))))))) ? var_4 : 359357955));
                    arr_7 [i_0] [i_1 + 1] [i_2] [i_1] = (min(((8419388669788476211 ? 359357955 : 2109183523)), ((+((((arr_4 [2] [i_1] [2]) < var_10)))))));
                }
            }
        }
    }
    var_20 = (min(var_20, (((105 ? var_12 : var_4)))));
    #pragma endscop
}
