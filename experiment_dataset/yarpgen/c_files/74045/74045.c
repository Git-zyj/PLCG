/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((1 + 7194355534828618319) + (min(14781029661608277342, 593998607)))), (((-108 - 32754) ? (min(14781029661608277342, 241)) : -1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_21 &= ((((max((2892583805523463730 != 236), (1956795926 << 2)))) || ((max(127, ((min(189, 145))))))));
                var_22 = (min(var_22, 14781029661608277344));
            }
        }
    }
    var_23 = (min(((min(-103, -102))), (((26496 / 122) ? 17 : 21))));
    var_24 = 54076;
    #pragma endscop
}
