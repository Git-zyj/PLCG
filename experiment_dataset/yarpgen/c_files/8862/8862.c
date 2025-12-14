/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (max(446485960, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((446485964 || 11) % (arr_2 [i_0] [i_0]))))));
                var_13 -= ((((((-89 ? 446485960 : 446485943))) ? (!9223372036854775805) : 67043328)));
                var_14 -= 10;
            }
        }
    }
    var_15 = (max(var_15, ((min((((115 || 2506954706) ? (min(88, 16247735988941871334)) : -9771633927611143134)), 146)))));
    var_16 &= ((0 ? -446485926 : 1));
    #pragma endscop
}
