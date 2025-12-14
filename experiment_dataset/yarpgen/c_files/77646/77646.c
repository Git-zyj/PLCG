/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [13] = (arr_6 [0] [17] [i_0]);
                var_15 = 13076520599091562794;
                arr_8 [i_0] [i_1] [i_1] = ((18446744073709551612 < (arr_6 [i_0 + 1] [5] [i_1])));
                var_16 = 17738624184212322572;
            }
        }
    }
    var_17 = (~-13076520599091562794);
    var_18 = (((max(var_9, (max(4, -1944851963630118558)))) >= 708119889497229048));
    #pragma endscop
}
