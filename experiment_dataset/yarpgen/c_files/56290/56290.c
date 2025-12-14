/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2042451519600989483;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [6] [i_1] [i_1] [i_0] = 99;
                        arr_12 [i_0] [i_1] = (((arr_3 [i_1 - 1] [i_1 + 2]) == 2849867320224946241));
                    }
                }
            }
        }
        var_16 = ((((arr_10 [4] [i_0]) || 4741026221142325685)));
        arr_13 [i_0] = ((((((arr_9 [i_0] [i_0] [5] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) + (max(-4741026221142325682, -369193542564291753))));
        arr_14 [6] = ((-4741026221142325686 ? (((((~(arr_8 [6] [i_0] [i_0] [i_0]))) >> (-7273312234281142332 + 7273312234281142358)))) : ((((((arr_8 [i_0] [i_0] [i_0] [i_0]) << (4039676898 - 4039676878)))) ? 4741026221142325711 : (arr_6 [i_0])))));
    }
    #pragma endscop
}
