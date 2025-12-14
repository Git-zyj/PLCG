/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((((((100894192 ? 2838268970 : 2262939980))) ? (0 + var_2) : 1456698326))) ? (((((var_4 + (arr_1 [i_1 - 1])))) ? (var_2 + 3716415907) : 578551389)) : ((min(var_1, 496845495258947109)))));
                var_10 ^= (((((((32753 ? 3716415907 : 162)) * 3716415907))) - (((var_0 / -1961943038213462227) * (~var_7)))));
            }
        }
    }
    var_11 = (max(var_11, (((var_6 ? (~var_9) : var_8)))));
    var_12 &= var_5;

    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_11 [i_2] = ((~((var_6 - (arr_0 [i_2] [i_2])))));
        arr_12 [i_2 - 3] = ((((((var_5 ? 40 : (arr_5 [20] [i_2])))) ? (arr_2 [i_2 - 1] [i_2 - 1]) : (arr_5 [i_2 + 1] [i_2 + 2]))));
    }
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        arr_17 [i_3] = min(((255 * ((3716415907 ? 1 : var_7)))), (((~var_7) / var_6)));
        var_13 = ((var_8 < (var_2 * var_3)));
    }
    #pragma endscop
}
