/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 3030900790770307690;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (((((arr_6 [i_1 - 2] [i_1 + 1] [i_2 + 1]) && (arr_6 [i_1 - 2] [i_1 + 1] [i_2 + 1])))) >= (((arr_6 [i_1 - 2] [i_1 + 1] [i_2 + 1]) - (arr_2 [i_1 - 2] [i_1 + 1]))));
                    var_17 = (min((((((max((arr_1 [3] [3]), -57))) - ((-(arr_1 [i_0] [15])))))), (-23 - 48)));
                    arr_7 [i_1] [i_1] = (((123 || (arr_4 [i_1]))) || ((((arr_3 [i_0]) << (61112 - 61102)))));
                    var_18 = ((((max(-1, 36178))) != (((min(-23, 23)) + (arr_4 [i_1])))));
                    var_19 = -26955;
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = (((min((-40 & 65535), (var_5 > 43411))) * (var_0 ^ 4294967295)));
    #pragma endscop
}
