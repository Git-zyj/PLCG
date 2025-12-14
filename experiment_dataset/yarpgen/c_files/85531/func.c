/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85531
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((((/* implicit */_Bool) (~(9223372036854775802LL)))) ? (var_7) : (6316704813695973881LL));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_1] [7LL] [7LL] [i_1] [i_0 - 3] = ((/* implicit */unsigned char) var_10);
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -86830892)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((-2801437397901225856LL), (-9223372036854775802LL)))))))) : (var_2)));
                                arr_13 [i_3] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */short) max((max((13817874135541465100ULL), (((/* implicit */unsigned long long int) var_2)))), (((((var_1) - (13817874135541465099ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-13277)) >= (((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                } 
                var_14 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) arr_7 [i_1 + 1] [(unsigned char)12] [(unsigned char)12] [i_0 + 3]))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_1 - 1])) | (2468477457923514363ULL)))) ? (((var_11) | (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) var_5))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (+(603956415)));
}
