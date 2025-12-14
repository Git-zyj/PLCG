/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66109
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0 - 2] [i_1 - 1] [i_2 - 1] = ((/* implicit */_Bool) max((var_4), (var_0)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_15 [6] [i_0] [i_3] [i_2 - 1] [i_0] [i_0 - 2] |= ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((short) var_0)))))));
                                var_12 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)33837))))), (arr_13 [i_4 + 2] [i_4 + 4] [i_4 + 4] [i_4] [4ULL]))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */_Bool) (+(8466404126676071265ULL)));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_13 [i_1] [i_1] [(short)2] [i_2 - 1] [i_0 - 1])))) % ((-(arr_4 [i_0 - 2] [i_1 + 1] [i_2 - 1])))));
                    var_15 = (-(((9980339947033480368ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49021))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) (short)28069)) : (((/* implicit */int) var_0))))))))));
}
