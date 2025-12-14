/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= -229;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((((max(((112 >> (var_3 - 65))), (((!(arr_3 [i_0]))))))) ? (((((-7242199824497859882 ? 1 : 1))) / (((arr_2 [i_0]) ? 1 : -7242199824497859882)))) : (((-(~1)))))))));
                var_12 = (min(var_12, ((max(((6287603507786570302 ? ((-(arr_1 [i_0] [i_0]))) : 6982)), (((!112) ? ((((arr_2 [i_0]) <= 44))) : 2096871905)))))));
            }
        }
    }
    #pragma endscop
}
