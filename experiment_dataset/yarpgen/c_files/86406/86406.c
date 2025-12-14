/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_3, var_7)) > (((var_14 ? -715696481 : var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((201326592 > -717424472) ? (((((var_8 > (arr_7 [i_0] [i_0] [i_0] [i_0])))) << (((arr_2 [i_0]) ? var_8 : var_13)))) : ((((53377 && var_11) != ((((arr_4 [i_0] [i_0] [i_0]) != 2323570047)))))));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_18 = ((((max((717424471 <= 717424472), var_3))) | (((((max(var_6, var_1))) <= ((-8181274997403455776 ? -717424472 : 1459727381)))))));
                        var_19 = ((((!(((-5278986529541500936 ? -494683190 : 225480689))))) || (((1459727381 && -1779545957) && (((3 ? 1824418937 : 425601431)))))));
                        arr_11 [i_1 - 3] [i_2] [i_1 - 3] [10] [i_3] |= ((17549 ? -2892968383248669322 : -2892968383248669327));
                        arr_12 [i_0 - 4] [i_0 - 4] = -717424479;
                    }
                    var_20 = (((((5278986529541500926 != ((-496322218 ? -6977828944426934276 : 1))))) >> (((((((-27352 ? -4518 : 4069486607))) ? (2388086352 ^ 717424495) : (-717424471 | -2102))) - 2761181478))));
                }
            }
        }
    }
    #pragma endscop
}
