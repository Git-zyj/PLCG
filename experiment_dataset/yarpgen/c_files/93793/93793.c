/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_10 = (((((arr_0 [i_0]) + 2147483647)) << (((((var_3 < (arr_0 [i_0])))) - 1))));
        var_11 *= (max((((arr_1 [i_0]) ? var_4 : (arr_0 [i_0]))), ((max(22772, 1)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_12 += -1;
            var_13 = (arr_6 [i_1]);
            var_14 += (((((~(((arr_3 [i_2]) ? 14244218874092411959 : 0))))) ? var_5 : ((((~(arr_6 [i_1])))))));
        }
        var_15 = 1;
        arr_7 [i_1] [i_1] = min((min(((~(arr_1 [i_1]))), (arr_5 [i_1] [i_1] [i_1]))), (arr_6 [i_1]));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_16 = min(((((~(arr_9 [i_3]))))), ((-(arr_6 [i_3]))));
        var_17 = (max(var_17, (((+(((!((((arr_0 [i_3]) ? (arr_3 [i_3]) : 1)))))))))));
        var_18 += (max((~1), (((((arr_4 [i_3]) ? 9 : 564239658723677533)) * ((((arr_4 [i_3]) ^ (arr_4 [i_3]))))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_19 = ((((max(9223372036854775807, (arr_1 [i_4])))) ? (((min((arr_11 [i_4] [i_4]), (arr_4 [i_4]))) | (arr_1 [i_4]))) : 90));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_20 [i_4] [i_4] [i_5] [i_7] [i_6] [i_7] = ((~(var_0 * 0)));
                        var_20 = (((((min(1, (arr_13 [i_4] [i_4] [i_4]))))) ? (min(4161536, (arr_3 [i_5 - 1]))) : (((-((~(arr_5 [i_4] [i_5] [i_6]))))))));
                        var_21 = (-(127 / 8353664797875734732));
                    }
                }
            }
        }
    }
    var_22 -= (~(~24576));

    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        arr_23 [i_8] = (max((arr_22 [i_8]), ((((-(arr_22 [i_8]))) * (((arr_22 [i_8]) + 24576))))));
        var_23 = (~1);
    }
    #pragma endscop
}
