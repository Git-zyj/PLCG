/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(((min((max(-12, -384462255)), ((min(0, 12)))))), (min((min(var_4, var_7)), ((max(127, (-127 - 1)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 -= (max((min((max(var_0, var_6)), ((max((arr_3 [1] [2]), (arr_0 [10])))))), ((max(-12, 1)))));
                arr_4 [i_1] &= (max(((max(((min((arr_2 [i_1] [i_0]), 1))), (min(7, (arr_2 [i_0] [i_0])))))), (max((min(2260100706646226703, 1)), ((min((arr_0 [i_0]), (arr_0 [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            {
                var_13 *= (max(((max(((min(1, var_6))), (max(var_10, -12))))), (min((max(15738, var_7)), ((min((arr_8 [22]), 960)))))));
                var_14 = (max(var_14, ((max(((min((max((arr_6 [i_2] [i_3]), (arr_5 [15]))), ((min(1, 1)))))), (max((max(var_2, (arr_8 [20]))), ((min(1, 11))))))))));
            }
        }
    }
    #pragma endscop
}
