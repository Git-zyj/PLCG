/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 1));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] = 8;
                            arr_13 [i_0] [i_1] [9] [6] [i_0] [i_0] [8] = ((-(max(4095, 768008277))));
                        }
                    }
                }
            }
            var_16 = -768008253;
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_17 = 8677041810169721164;
            var_18 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
            var_19 *= (4064617041 ? 4064617030 : ((((arr_14 [i_0] [i_0 - 1]) ? (arr_14 [i_0] [i_0 - 1]) : (arr_14 [i_0] [i_0 - 1])))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {
                        var_20 ^= (min(((((max(2944, (arr_1 [12])))) ? -1 : 4294967284)), ((-(arr_1 [12])))));
                        var_21 = ((((((((25 ? 108 : (arr_6 [i_0] [i_7] [i_6] [i_6])))) ? -6972394816998062179 : -728592688))) ? -21015 : (arr_14 [i_7] [i_5])));
                    }
                }
            }
        }
        var_22 = (((((-768008299 ? (arr_3 [i_0 - 1] [i_0 - 1] [i_0]) : 12))) ? (((((2647265752 ? 17174 : 217))) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_20 [i_0] [i_0 - 2] [i_0] [i_0] [19] [i_0]))) : (((((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0 - 2] [i_0 - 2] [i_0] [17] [i_0]) : (arr_4 [i_0] [i_0])))) ? (!171) : -21002)))));
    }
    var_23 = ((var_0 ? (((((var_10 ? -768008288 : var_5))) ? var_9 : (~728592677))) : ((-((768008279 ? -768008284 : var_3))))));
    var_24 = 14851760431507486045;
    #pragma endscop
}
