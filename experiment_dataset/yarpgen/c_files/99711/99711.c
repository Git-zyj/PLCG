/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 -= ((-5 != -1172818622) ? (min((max(3524601274, (arr_6 [i_0 - 1] [16] [8]))), 41438)) : (((-(arr_1 [0])))));
                var_12 = 1172818622;
                var_13 = -1172818632;
            }
        }
    }
    var_14 = (((((var_5 <= (max(-898942951057018293, 3160623794627190702))))) & ((((-1172818621 == 0) == var_1)))));
    #pragma endscop
}
