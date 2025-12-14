/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85488
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
    var_15 = ((/* implicit */unsigned short) (((+((~(((/* implicit */int) (short)28540)))))) > (((/* implicit */int) var_4))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0))) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))))))) < (((((long long int) var_3)) | (((/* implicit */long long int) ((/* implicit */int) (short)28540)))))));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) < ((+(4294967289U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) ((short) 1U)))))) : ((+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10911))) : (22U))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((signed char) ((unsigned char) var_14)));
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-10939)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))));
                    arr_8 [i_0] [i_0] [i_1 - 1] [i_2 - 2] = ((/* implicit */signed char) ((((6U) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_6)) == (((/* implicit */int) (short)7189)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))) : (((var_11) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                    var_18 -= ((((/* implicit */int) max((var_13), (var_10)))) / (((/* implicit */int) ((short) var_12))));
                    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)100))))))) || (((((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (_Bool)1)))))) == (max((((/* implicit */long long int) var_2)), (var_1)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_5);
}
