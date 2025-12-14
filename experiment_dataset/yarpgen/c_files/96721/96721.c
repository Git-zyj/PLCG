/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_9 / (min(((max(var_1, var_10))), (var_6 / 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((max((((65535 == (arr_1 [i_0])))), ((3267167429 >> (((arr_6 [16]) - 507492814))))))) ? (!-1) : ((-(((arr_3 [12]) - 2163282883))))))));
                    arr_8 [5] [i_0] = (((((~1) & (max(3267167429, 60822))))) - (arr_1 [i_2 + 1]));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_13 = (((((!((max((arr_10 [i_3]), (arr_10 [i_3]))))))) == 4727));
        var_14 = (((max((!4723), 2780995931232398760)) == ((((!(~-23639)))))));
        var_15 = (((((-(((arr_10 [15]) * (arr_10 [i_3])))))) ? (max((((-32749 / (arr_9 [i_3])))), (max(4539823955210703711, (arr_10 [i_3]))))) : ((max((~-32766), ((max((arr_9 [i_3]), 32749))))))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_16 = ((-(((!(arr_9 [i_4]))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        var_17 ^= ((-((60822 >> (((max(-9223372036854775796, (arr_13 [18] [i_7 + 1]))) - 246))))));
                        arr_20 [20] [20] &= (((3028347142856014157 | 48) || (arr_10 [i_6 + 1])));
                        var_18 = (max(var_18, (((-32763 ? (max((4294967295 >> 4), (arr_11 [i_4] [i_4]))) : 19265371)))));
                    }
                }
            }
        }
    }
    var_19 = (max(-3742474899, (((var_8 == ((min(17620, var_0))))))));
    var_20 = (max(((((min(var_0, 2780995931232398749)) == ((min(var_8, 1)))))), (-26 == var_9)));
    #pragma endscop
}
