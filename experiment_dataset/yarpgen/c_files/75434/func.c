/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75434
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_1)) ? (var_14) : (var_6))))))))));
    var_18 = ((/* implicit */short) (+(8160252558094130225LL)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) % (var_12))) - ((+(10491104444775752982ULL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_2 - 2] [i_2])))), (((((var_14) % (481658409U))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 3] [i_1 - 2])))))));
                                arr_13 [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2])) ? (((/* implicit */unsigned long long int) arr_6 [i_2 + 1] [i_2 - 2])) : (0ULL)));
                                var_21 = ((/* implicit */unsigned short) min((-8160252558094130239LL), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)253)))))));
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 481658415U);
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned short) (~((~(arr_12 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_1 - 2] [i_2 + 3])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (var_6)))))) % ((-(((/* implicit */int) var_4))))));
}
