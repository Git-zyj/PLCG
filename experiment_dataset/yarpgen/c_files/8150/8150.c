/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 += (((var_4 & 13835058055282163712) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_0 - 1])));
                    var_12 += ((8795556151296 << ((((arr_2 [10] [i_1] [i_1]) || -13986)))));
                    var_13 ^= var_1;
                    var_14 *= (min(((397454928 << (73 - 71))), (((-32517 < ((max(var_7, var_2))))))));
                    var_15 *= (((-32767 - 1) / 4611686018427387927));
                }
            }
        }
    }
    var_16 ^= (((((var_5 ? var_5 : var_1))) && ((((3092481581 % var_1) ^ (~1202485717))))));
    #pragma endscop
}
