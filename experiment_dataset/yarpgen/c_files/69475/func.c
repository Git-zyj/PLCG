/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69475
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
    var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_9))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)61715)) != (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)61715)) : (((/* implicit */int) var_17)))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))) : (var_0)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_22 = ((/* implicit */long long int) min(((short)-12314), (((/* implicit */short) ((3077531505U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_0] [i_1] [i_0] = var_8;
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) max((((((/* implicit */int) var_12)) <= (((/* implicit */int) var_10)))), ((!(var_18)))))) == (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_0]))));
                    arr_8 [i_0] [i_1] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) min((((/* implicit */short) arr_3 [i_2] [i_0])), (arr_0 [(unsigned char)8] [(unsigned char)8]))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((/* implicit */int) (unsigned char)152)) - (152)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((short) arr_0 [i_0] [i_0])))));
    }
    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        arr_11 [i_3 + 2] = var_1;
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
        var_24 = ((/* implicit */_Bool) (~(arr_2 [i_3])));
    }
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) 1217435811U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) : (var_3)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) (signed char)-117)))))))));
}
