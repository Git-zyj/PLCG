/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4294967295;
    var_12 = -7643;
    var_13 ^= 10;
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_15 = ((-(4633208723348121379 || 127)));
                            var_16 = ((7 ? 4633208723348121379 : 5));
                            var_17 = (((!82) ? (4633208723348121379 && -4633208723348121379) : ((3 ? 289715311 : 111))));
                            var_18 = ((2044 ? ((72 ? 43 : 15)) : 43));
                        }
                        var_19 = (((((1 ? 4294967292 : 218))) ? (~2994839209288186646) : -93941889));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_20 = (max(var_20, -4633208723348121392));
                        var_21 -= (((!805687264) <= ((((-127 - 1) >= 4633208723348121392)))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_21 [19] [i_1] [i_2] = (!241);
                        var_22 = ((((((-4633208723348121392 ? 93941897 : 3765933278)) == 1)) ? (2 >= -769002817304827895) : ((((9 * 10611959358942230633) == (~805687264))))));
                    }
                    var_23 -= (((4633208723348121384 >> (65011712 - 65011701))));
                    var_24 = (16376 * 16479083269976210105);
                }
            }
        }
    }
    #pragma endscop
}
