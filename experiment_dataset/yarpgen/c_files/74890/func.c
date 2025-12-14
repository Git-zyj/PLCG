/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74890
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 - 2])), (min((15387832105737879134ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 - 2]))))));
                    var_18 = ((/* implicit */long long int) ((arr_3 [(unsigned char)9] [(unsigned char)9]) != (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_3 [5U] [i_2]) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((int) 574208952489738240ULL))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_11);
    var_20 ^= ((/* implicit */unsigned char) min((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(6405664167079735631ULL))))), (((/* implicit */unsigned long long int) var_2))));
}
