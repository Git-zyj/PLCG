/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? var_3 : ((((var_4 != (var_3 <= var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 *= ((((var_8 == ((34357641216 ? 3731538441 : 6017)))) ? (((-1870441092 ? ((var_9 ? var_5 : var_1)) : (!var_9)))) : (min((var_0 || var_2), ((var_1 ? var_9 : var_8))))));
                var_12 = (min(var_12, (((((var_6 || (var_7 * 2537))) ? var_5 : var_4)))));
            }
        }
    }
    var_13 = (min(var_13, var_3));
    var_14 = ((-1870441114 ? 636708629264808900 : 13116));
    var_15 &= ((((((((var_3 ? var_5 : var_2))) ? ((52249 ? 178 : var_6)) : ((var_3 ? 3 : var_6))))) ? var_9 : (65511 >= var_2)));
    #pragma endscop
}
