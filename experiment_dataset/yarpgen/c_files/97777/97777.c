/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(-1271237066, (((var_4 <= (28470 / -772940991))))));
    var_14 = (max((-996347955 > 79), (((var_1 * 1) / (1125899906842616 / var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(((((arr_3 [i_0]) / (arr_0 [i_0])))), (((max(2147483626, -16))))));
                arr_6 [i_0] = ((((((!(((65534 ? 3 : 216))))))) >= (max(((max(-381624579, var_6))), (max(83, 1740428980))))));
                arr_7 [i_0] = (max((((-((-1439102885 / (arr_3 [i_0])))))), (max((max((arr_4 [i_0] [i_0]), var_1)), -var_2))));
                arr_8 [i_1] [4] [i_0] = 16903868364248998690;
            }
        }
    }
    var_15 = (((((max(381624584, var_4)) != 1830441281)) && -1));
    #pragma endscop
}
