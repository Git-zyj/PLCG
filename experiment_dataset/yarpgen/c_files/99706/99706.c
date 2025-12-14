/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = (max(var_20, ((((-6029041331533006862 & 1670360111415301431) * 6029041331533006861)))));
    var_21 = (((((-6029041331533006866 ? (4543674863222379088 ^ 1) : (var_2 * 3796307455)))) ? 3015699892 : -6029041331533006844));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((!((max(9425997387944383008, var_11))))))) <= 4294967295));
                arr_6 [i_0] = (~0);
                arr_7 [i_0 - 1] [1] &= min(((((max(1, (arr_1 [i_0 + 3])))) ? ((var_1 & (arr_1 [i_0 + 3]))) : ((793118566997199683 >> (4590344166637204779 - 4590344166637204731))))), ((-5004542814551610548 ? 2048 : 4590344166637204779)));
            }
        }
    }
    var_22 = -6029041331533006830;
    #pragma endscop
}
