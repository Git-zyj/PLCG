/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(((min(23675, -16777216))), (max(13089372794994426930, 1610612736))))) ? ((~(min(1, 5357371278715124685)))) : 13089372794994426922));
    var_21 ^= ((!((!((max(1016566564846884697, 2961554100)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] = 3395345492;
                var_22 = (max(var_22, ((max(((((281474976709632 ? 1 : 1016566564846884696)) << (!899621816))), 1016566564846884673)))));
                arr_7 [i_0] [5] = ((!(~-460524644)));
                var_23 = (max((((!(~127)))), 1016566564846884694));
            }
        }
    }
    var_24 = ((((((3395345492 ? 1016566564846884690 : 1073741816)) ? (~634587705) : (((min(97, 32742))))))));
    #pragma endscop
}
