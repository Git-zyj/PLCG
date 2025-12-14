/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (7497804288847381994 - var_1);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min(-var_3, ((~(arr_0 [i_0])))));
        arr_5 [i_0] = ((((~(max(3212803744, 208))))) ? 1082163552 : ((-(arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_12 = 175087153;
            arr_11 [6] [i_2] [i_2 + 2] = (max(12671483087222719584, 9223372036854775807));
            var_13 = (arr_6 [7]);
        }
        arr_12 [i_1 + 2] [i_1 + 2] = ((((((1082163561 | 3212803737) ? 3212803744 : (arr_7 [i_1 + 1])))) ? (((arr_10 [i_1 + 3]) ? (((var_4 ? -32293 : 156))) : (arr_7 [i_1 + 4]))) : (~4294967295)));
    }
    #pragma endscop
}
