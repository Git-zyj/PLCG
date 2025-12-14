/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84613
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [(unsigned char)3] [i_0] [i_0] = (~(((int) (~(((/* implicit */int) var_1))))));
                    var_11 = ((((/* implicit */_Bool) ((((unsigned int) var_5)) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) || ((!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_2))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((((/* implicit */int) var_2)) - (((/* implicit */int) var_7))))));
                        arr_10 [i_3] = ((/* implicit */unsigned short) ((short) var_4));
                    }
                    for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
                    {
                        arr_13 [i_0] [2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_6)))))) < (((unsigned int) var_0)))))) < (max((var_5), (((/* implicit */long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_2)))))))));
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((int) max((max((var_8), (var_8))), (((/* implicit */unsigned char) var_2))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] = var_0;
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_10))));
    var_15 = ((/* implicit */long long int) ((max((-433334752), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (_Bool)1))))))) << (((((/* implicit */int) var_1)) + (6988)))));
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((-472534235566216686LL) + (9223372036854775807LL))) << (((((-33554432) + (33554437))) - (5))))))));
}
