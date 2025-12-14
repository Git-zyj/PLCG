/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_8 && 19186) | -5672334768150829460))) ? var_3 : (max((max(var_0, 19208)), ((min(var_6, 118)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (((((!(0 != -19190)))) & ((-((((arr_3 [i_0] [i_0] [i_0]) != 99)))))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_2] |= (1 * 0);
                    var_11 = (max(var_11, ((max((min(15430080780363442886, 19993)), ((max((arr_2 [i_2]), (arr_2 [i_1])))))))));
                    var_12 += ((((58 * (18214420870431450052 - -333357325578296221))) ^ 0));
                    arr_8 [1] [i_0] [i_2] = (max((((-(arr_1 [i_0])))), (arr_2 [i_0])));
                    var_13 -= (max((122 % 99), (((((3381208434 ? 0 : 57))) / -1831759495606572633))));
                }
            }
        }
    }
    #pragma endscop
}
