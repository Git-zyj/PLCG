/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_2] [i_1] [i_0] &= ((((((var_1 >= var_4) || (((122 >> (((arr_6 [i_0]) - 163)))))))) + ((((var_15 > var_1) < ((((arr_7 [i_0] [i_0]) || var_3))))))));
                    arr_12 [i_1] [i_1] [i_0] [i_1] = ((((((((arr_5 [i_1] [i_1] [i_2]) + (arr_9 [i_2]))) <= ((((1 != (arr_7 [i_0] [i_1])))))))) <= ((((var_0 - 1) > (var_7 || -32753))))));
                    var_17 = (((((var_3 == var_7) < (-93 & -604764870609192928)))) >= (((((arr_10 [i_1] [i_1]) & (arr_8 [i_1]))) << ((((93 << (-27 + 32))) - 2976)))));
                }
            }
        }
    }
    var_18 = (((((1 < var_1) <= (var_1 && var_15)))) <= (((var_16 && var_12) ^ (var_14 != var_2))));
    var_19 = (max(var_19, ((((((116 != var_6) != (var_5 / var_2)))) < (((142 >= var_8) | (var_7 / var_10)))))));
    var_20 = (((((var_5 & var_0) + (((0 & (-32767 - 1)))))) / (((((var_9 <= var_1) <= (var_8 > var_10)))))));
    var_21 = ((((((0 >> (134 - 103))) & (-1 == 1))) ^ (((1 && 21189) / (var_2 ^ var_8)))));
    #pragma endscop
}
