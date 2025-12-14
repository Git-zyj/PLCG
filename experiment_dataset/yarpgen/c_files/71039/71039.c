/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((max(839408245, 47))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = ((((((((4261038141448276560 ? 0 : 929819321))) ? 184 : ((max(-57, 6375)))))) ? ((-((1 ? 7471402457189643478 : 3365147975)))) : 30828));
                    arr_11 [i_0] [i_0] [i_0] [i_1] = ((!(((((min(8557927237206064760, -1220275274908221278))) ? 1220275274908221255 : 955213117019932371)))));
                    var_22 = (~7);
                    var_23 = ((0 ? (-9223372036854775807 - 1) : -0));
                }
            }
        }
    }
    #pragma endscop
}
