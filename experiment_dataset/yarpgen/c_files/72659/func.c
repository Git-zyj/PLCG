/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72659
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (max((((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (1879048192U)))))) : (((/* implicit */long long int) min((((/* implicit */int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (1593034200))))));
    var_17 ^= ((/* implicit */unsigned long long int) ((var_3) >> (((max((((/* implicit */long long int) var_0)), (var_12))) - (40957577LL)))));
    var_18 = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */short) var_7)), (((short) (unsigned char)0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) max((min((((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))))), (max((((/* implicit */int) (_Bool)1)), (arr_2 [i_0]))))), (min((((((/* implicit */_Bool) -306783160)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31866)))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_13)))))))));
                var_20 = ((/* implicit */unsigned long long int) (~(var_3)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8)))))))) >= (min((((/* implicit */long long int) max((((/* implicit */short) var_2)), ((short)31865)))), (((((/* implicit */_Bool) var_13)) ? (var_14) : (arr_3 [i_2])))))));
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))) < (((arr_7 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        arr_21 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) var_10)), (var_13))), (min((arr_10 [i_3 + 3] [i_3 + 1]), (arr_10 [i_3 + 3] [i_3 + 1])))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_9))));
                        var_22 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_7)), (((var_7) ? (max((-1800990491962007140LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (arr_0 [i_2])))))))));
                    }
                } 
            } 
        } 
        arr_22 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((short) (signed char)-29));
        var_23 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (_Bool)1)))));
    }
}
