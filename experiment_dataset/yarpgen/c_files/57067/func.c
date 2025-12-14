/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57067
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) (~(11846969656182357804ULL)));
        var_11 ^= (~(var_5));
        arr_2 [i_0] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) arr_0 [i_0])));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) / (arr_9 [i_0] [i_0] [i_0] [i_0]))) != (((/* implicit */int) var_7)))))));
                        var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) (signed char)-81))));
                        arr_11 [i_2] [14] [(_Bool)1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)92)) & (((/* implicit */int) (short)2077))));
                        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_5 [i_2])) / (var_3)));
                        arr_12 [i_3] [i_2] = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        } 
    }
    var_15 ^= ((/* implicit */short) (~(var_3)));
}
