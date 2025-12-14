/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64730
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned char) (short)27429);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_10)) + (var_13)))));
                        var_17 = ((/* implicit */_Bool) ((18446744073709551615ULL) >> (((16651912802504003162ULL) - (16651912802504003127ULL)))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_2 - 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) var_8)) : (arr_9 [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13204)) && (((/* implicit */_Bool) arr_4 [i_1] [i_3 + 2]))))) : (((/* implicit */int) var_12))));
                    }
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) 16383)), (var_4)))))) : (max((((var_10) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) 1391358690U)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)64667)))))))));
}
