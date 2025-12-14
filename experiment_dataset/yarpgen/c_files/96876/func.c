/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96876
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
    var_18 -= ((/* implicit */short) ((var_2) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) -171984903)))) != (((/* implicit */unsigned int) (~(var_16))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) (~(((long long int) arr_3 [(short)2]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_14 [i_0 + 2] [i_0 + 2] = var_0;
                        var_20 *= ((/* implicit */short) ((unsigned short) arr_2 [i_0 - 1] [i_0 + 2]));
                    }
                } 
            } 
            var_21 = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)130)))) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1]))));
            arr_15 [i_1] = arr_3 [i_0 - 1];
            arr_16 [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 - 1]))));
        }
        var_22 = ((/* implicit */unsigned short) ((((arr_4 [i_0 + 1] [i_0 - 1]) + (2147483647))) >> (((arr_4 [i_0 + 2] [i_0 + 2]) + (735915261)))));
        var_23 ^= ((/* implicit */long long int) (short)-18382);
    }
    var_24 &= ((/* implicit */_Bool) (-(var_13)));
    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) (signed char)84)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (min((var_2), (((/* implicit */long long int) var_16))))))) > (max((min((((/* implicit */unsigned long long int) var_9)), (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_13)))))))));
}
