/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 |= (12932868132396844805 - ((((arr_0 [i_0]) ? (((arr_5 [i_0] [i_0] [i_1]) ? 128 : 91)) : ((-102 ? -13848 : 36754))))));
                var_17 = ((((min((arr_3 [i_0]), (min(48767, 1190438031))))) & (min(var_8, ((4503599627369472 ? 18446744073709551615 : var_6))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [i_1] [i_1] [i_0] = (min((((9223372036854775807 && 9223372036854775807) | 102)), ((((1 ? (arr_10 [i_0] [14] [i_1] [i_3]) : -92)) >> (-13 + 22)))));
                            var_18 = ((arr_0 [i_0]) - ((((14339 - 148) == ((min(196, 1)))))));
                            var_19 = ((~(arr_6 [i_0] [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_20 &= var_4;
    #pragma endscop
}
