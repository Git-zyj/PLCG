/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_6 ? var_9 : var_1))) ? (~var_12) : var_10)) != (((max(65532, 135)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = ((((!(arr_5 [i_1] [i_2]))) || ((min((arr_2 [i_1]), (arr_5 [i_1] [i_1]))))));
                    arr_7 [i_1] [i_1] [i_1] = (max(((-(arr_5 [i_1] [i_1]))), ((max(3547789991260671643, 1026313801)))));
                    var_17 = (((--184) && (165 != 4095)));
                    arr_8 [10] [i_1] [10] &= ((((3503975642 >= (~19272))) ? (max(-1078388203588405496, (((-1078388203588405517 + 9223372036854775807) >> 55)))) : ((((!(arr_5 [4] [2])))))));
                }
            }
        }
    }
    var_18 *= (min(-13907, ((var_14 << (var_9 - 71)))));
    var_19 *= (((~21) / (((var_7 < (71 & var_13))))));
    #pragma endscop
}
