/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -6387168399634764564;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (min((min((26344 + 10), ((min(242, 10))))), 91));
                var_21 = (((min((1 & 223), 1)) ^ 1));
                var_22 = ((((((min(19629, 33))) * (1 / -11064))) >> ((248 * (21 / 64817723217376042)))));
            }
        }
    }
    var_23 = (min(49, 7566465172304906099));
    #pragma endscop
}
