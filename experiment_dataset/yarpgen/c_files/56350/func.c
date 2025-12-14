/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56350
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] |= ((/* implicit */short) min((((max((arr_2 [i_0]), (((/* implicit */int) (signed char)1)))) & ((~(arr_6 [i_0] [(unsigned short)1] [i_2] [i_3]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-108))))) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 3] [i_1 - 3])) : ((-(((/* implicit */int) (short)-5095))))))));
                        var_19 *= ((/* implicit */signed char) ((max((max((var_18), (((/* implicit */unsigned int) arr_10 [i_1] [i_1])))), (0U))) * ((+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11)))))));
                        arr_13 [i_0] [i_0] [(short)12] [8U] [(short)10] [i_3] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((var_3), (var_17)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        arr_14 [i_0] [i_1 - 2] [i_2] [i_3] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 3] [i_1 + 2] [i_1 + 3])) ? (arr_8 [i_1 - 3] [i_1 - 1] [i_1 - 2] [i_1 - 2]) : (29U))), (arr_8 [i_1 - 3] [i_1 - 3] [i_1 + 2] [i_1 - 2])));
                    }
                    arr_15 [(unsigned short)7] [i_0] [i_1] [i_2] |= min((var_2), (((/* implicit */unsigned int) arr_10 [i_0] [i_1 + 1])));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */short) ((((((((/* implicit */int) ((short) 4294967248U))) + (((/* implicit */int) ((short) var_18))))) + (2147483647))) << (((((((((/* implicit */_Bool) ((((/* implicit */int) var_16)) % (var_15)))) ? (((var_8) - (var_15))) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967263U)) || (((/* implicit */_Bool) var_15))))))) + (536698512))) - (4)))));
    var_21 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned int) (unsigned short)5))))) ? ((-(((/* implicit */int) (signed char)-98)))) : ((+(((/* implicit */int) var_13)))))), (((int) max((4294967262U), (((/* implicit */unsigned int) (unsigned short)65520)))))));
}
