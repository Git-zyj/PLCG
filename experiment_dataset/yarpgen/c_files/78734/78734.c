/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [13] = (((((((-(arr_4 [i_0] [i_1])))) ? (((var_7 && (arr_3 [i_0] [i_1])))) : (arr_1 [14]))) >> (((arr_4 [i_0] [7]) - 32198))));
                var_10 ^= arr_3 [0] [i_1];
            }
        }
    }
    var_11 &= var_2;
    var_12 |= (((((2906412627106783788 ? 169 : (max(var_4, var_8))))) == ((~(max(var_3, var_6))))));
    #pragma endscop
}
