/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((1 / 1) / (var_13 * 255))) * (((var_10 / var_4) / (15056573527376009046 / var_6)))));
    var_17 = (((((32227 * var_6) % (40878316 != 3769426120))) / (((2930929538 >= var_10) + (var_10 < var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_18 = ((((((((arr_2 [i_1] [i_1 + 1] [i_1 + 1]) / (arr_2 [i_1] [i_1] [i_3]))) >= (765475891 == 1)))) >= ((((var_7 | 4116952014) || (((var_1 - (arr_1 [i_1 + 1])))))))));
                            arr_12 [i_0] [i_1] = (((((var_0 != var_0) < (-1929055192 > var_10))) && (((((58064 << (2147483647 - 2147483644))) + ((-32227 * (arr_1 [i_3]))))))));
                            var_19 -= (((((((((arr_0 [i_2 - 1] [i_1]) ^ var_14))) >= (var_3 * 18135443736593929357)))) * ((((((((arr_6 [i_0 + 2] [i_0 + 2] [i_2 + 1] [i_2 - 2]) <= 4294967293)))) == ((var_13 % (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
                        }
                    }
                }
                var_20 = (((((((var_1 / 6192939400904979627) < ((((var_6 == (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))))) == (((2147483647 < 2085727170) / (17228942279227968920 * -32750)))));
            }
        }
    }
    var_21 = (((((((var_1 >> (var_8 - 6079209005651380914)))) & (var_10 % var_9))) - (((((var_7 / 81) >= (-67 - 7325757952541044158)))))));
    var_22 = (((((var_11 - var_4) * (var_6 > var_15))) >> ((((80 % (56527 | 255))) - 67))));
    #pragma endscop
}
