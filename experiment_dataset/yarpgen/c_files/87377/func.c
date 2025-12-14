/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87377
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
    var_18 = ((/* implicit */unsigned short) var_6);
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_4)), ((+(min((((/* implicit */unsigned long long int) (unsigned char)224)), (var_10)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (min((var_2), (15ULL)))));
                    arr_8 [i_2] [i_1] [3U] [i_0] = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) (unsigned short)61458)) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_2] [i_1] [i_0]))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((8341334798796012127ULL), (((/* implicit */unsigned long long int) var_1))))) ? (min((arr_6 [i_2] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (short)4080)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 3] [i_2 - 4] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_3 [i_2 - 4] [i_2 - 3] [i_2 - 3]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10648192002458847479ULL)) ? (((/* implicit */int) (short)-24543)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [(unsigned char)2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61460)) && (((/* implicit */_Bool) 8708101930112235538ULL)))))) : (max((4620977903912667591ULL), (2443551095840759348ULL)))))));
                }
            } 
        } 
    } 
}
