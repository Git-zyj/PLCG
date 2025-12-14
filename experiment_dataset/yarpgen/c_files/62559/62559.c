/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = (max(var_11, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 ^= (19437 ^ 6);
                    var_13 = (((((((max(46099, 46098))) == (arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 2]))))));
                    var_14 = ((((((((!(arr_3 [i_0] [i_1] [i_2])))) * ((46098 ? 44 : 1005012352))))) ? (arr_0 [i_0]) : (max((arr_3 [i_0] [i_1 + 3] [11]), (arr_3 [i_0] [i_1 + 2] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
