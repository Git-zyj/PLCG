/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 += (min((arr_3 [i_2] [i_2]), 13206));
                        var_12 = (max((arr_3 [i_1] [i_1]), var_2));
                        var_13 = (!var_10);
                    }
                }
            }
            var_14 = ((((((var_5 == var_6) ? (((!(arr_3 [i_0] [i_0])))) : 255))) ? (((((246 ? (arr_3 [i_0] [i_1]) : 0))))) : ((-(min(1152921504606715904, -10325))))));
            var_15 |= (((arr_4 [16] [16]) ? (((((1842541906 ? (arr_7 [i_1]) : 251))) ? (21899 == 2147483643) : (((arr_7 [i_1]) >> (((arr_0 [1]) - 13065050383885757906)))))) : (arr_1 [i_0] [i_1])));
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_16 = (max(var_16, ((max(((((arr_4 [i_4 - 1] [i_4 - 1]) ? var_4 : 13221))), (((arr_4 [i_4 + 1] [i_4]) << (7771349163857900853 - 7771349163857900818))))))));
            var_17 = (min(var_17, (((29 ? ((max(var_2, 13188))) : (((arr_0 [i_0]) | (arr_0 [i_0]))))))));
        }
        arr_13 [i_0] = ((!(((-554858508 | ((((arr_4 [i_0] [i_0]) ? 54 : -29049))))))));
        var_18 = (((arr_4 [i_0] [i_0]) ? 14 : (min((!13499), (arr_9 [i_0] [i_0] [6] [6])))));
        arr_14 [i_0] |= (min(((((597980723 % 227) ? (arr_8 [i_0] [i_0] [6] [i_0]) : 4127334335))), 13943241421511008454));
    }
    var_19 = (max(var_19, (13943241421511008454 & -1581063572)));
    #pragma endscop
}
