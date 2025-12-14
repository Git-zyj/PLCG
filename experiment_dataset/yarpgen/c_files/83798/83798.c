/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] &= -var_2;
                    arr_8 [i_1] [i_0] [i_1] [i_1] = (((((3142473162318573142 | 1012143384) ? (!32716) : ((max(62, var_2))))) >> (32819 - 32790)));
                }
            }
        }
    }
    var_12 = ((-(((!(((-111 ? 62 : 32716))))))));
    var_13 = var_3;
    var_14 = (min(var_14, (((!(((var_0 | (62 | 9007061815787520)))))))));
    #pragma endscop
}
