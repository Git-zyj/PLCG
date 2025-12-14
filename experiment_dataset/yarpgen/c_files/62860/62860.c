/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((!((((min(26, 415839650256962481))) && 1))));
    var_21 = ((((((min(-5524298081153678829, -3176106423731029327)) - (59462 >= 123)))) ? (38205548 && 56950) : var_15));
    var_22 = ((((max(-3176106423731029327, 1711109195))) ? ((((5524298081153678859 < (227 - 18446744073709551615))))) : 751794755));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_23 = ((((max(((min(8512, (-32767 - 1)))), (max(6055, -2273163174639761961))))) == (max(65535, 32))));
                    var_24 = max((~12), (max(((min(-24833, 44447))), 18446744073709551615)));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_10 [i_0] [i_1] [i_3] [2] = ((-((((3288418643451603330 ^ -3927860003602823904) <= 6049)))));
                    var_25 = ((-(!73)));
                }
                var_26 = (max(var_26, (((-(max(-57, 9223372036854775805)))))));
            }
        }
    }
    #pragma endscop
}
