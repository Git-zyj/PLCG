/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89918
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
    var_13 &= ((/* implicit */_Bool) var_7);
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)22552), (((/* implicit */short) (signed char)-118)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((min((arr_2 [i_0 + 1] [i_1]), (var_4))), (((/* implicit */long long int) (~(2147483644))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)2698)) < (((/* implicit */int) arr_3 [i_1] [(short)13])))) ? ((((-(((/* implicit */int) (short)2083)))) - (330311120))) : (((/* implicit */int) arr_5 [i_2 - 3] [i_1] [(short)0])))))));
                    var_17 = ((/* implicit */short) (+(arr_1 [i_2])));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((arr_2 [i_0 + 1] [i_0 + 2]), (((/* implicit */long long int) (short)-14)))))));
                    var_19 = ((int) max((arr_3 [i_0 - 3] [i_0 + 1]), (arr_3 [i_0 - 3] [i_0 + 2])));
                }
            } 
        } 
    } 
}
