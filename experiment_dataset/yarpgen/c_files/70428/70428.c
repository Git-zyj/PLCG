/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = (!0);
                var_11 = (max(65535, 16343695214461589067));
            }
        }
    }
    var_12 = (((((var_8 >> (var_6 - 65009)))) ? ((((max(var_4, 0))) ? (((max(var_5, var_6)))) : (max(8814601851856232405, var_3)))) : 48502));
    #pragma endscop
}
