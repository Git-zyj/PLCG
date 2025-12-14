/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83033
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (unsigned short)10);
        var_13 = ((/* implicit */short) ((((((/* implicit */int) var_10)) << (((arr_0 [i_0 - 2] [i_0]) - (1465807325U))))) << (((var_9) - (14361306847262267831ULL)))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_9))));
                        arr_9 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)4547)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1] [i_0 + 2]))) : (var_8)))));
                        var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-54))))) * (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)53)))));
                    }
                } 
            } 
        } 
        var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)45)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned short)65529))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)63))))))) : (max(((~(var_0))), (((/* implicit */unsigned long long int) (~(arr_3 [i_0]))))))));
    }
    var_17 ^= ((/* implicit */short) (unsigned char)65);
}
