/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (var_6 * var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (min(((((arr_1 [i_0] [i_0]) && ((min(-4063517940587145118, var_9)))))), (((((arr_2 [i_0] [i_0]) && -10736)) ? (((!(arr_3 [i_0] [i_0] [i_0])))) : 1))));
                var_18 = (min(var_18, ((min((((((max(0, var_14))) ? 4063517940587145141 : 4063517940587145121))), (arr_2 [i_0] [i_1]))))));
                var_19 = ((-1047215496 ? ((-(arr_1 [i_1] [i_1]))) : ((((min(-53204392, 9223372036854775807)))))));
            }
        }
    }
    var_20 |= (~0);
    #pragma endscop
}
