/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((!((min(var_18, var_1)))))) >= ((((min(-66, 2020356511)) > (884371096683472275 != 884371096683472275))))));
    var_21 *= (((((var_10 & var_14) % -17562372977026079341)) % ((max(var_14, ((16776704 >> (30152 - 30141))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_22 ^= min(((min((!-357005324), (35359 < -27979)))), (((arr_4 [6] [i_1]) * 11144247261842299516)));
                arr_6 [i_0] [i_1] = ((-((min(30177, (1 != var_11))))));
                arr_7 [i_0] [i_1] [i_1] = (((arr_2 [i_0]) - (((~-16776705) | (min(var_14, -1503893680))))));
            }
        }
    }
    #pragma endscop
}
