/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81166
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) ^ (4194303LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_0))))) : (var_4)))) ? (((/* implicit */unsigned long long int) 16777215U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (var_9)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_1 [i_0] [i_0])))));
                    arr_10 [i_0] [(unsigned short)11] [(unsigned short)11] = ((/* implicit */unsigned short) (~(2593727872932474512ULL)));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((6240718030706928285ULL) == (arr_5 [(_Bool)1] [i_1 + 1]))))));
                        arr_13 [(_Bool)1] &= ((/* implicit */unsigned long long int) arr_11 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0]);
                    }
                    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)48027)) && (((/* implicit */_Bool) (short)1023))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)114))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73)))))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : ((~(((/* implicit */int) arr_11 [5U] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
}
