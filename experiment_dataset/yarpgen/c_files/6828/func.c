/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6828
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
    var_17 = var_9;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)39870)) << (((133169152U) - (133169147U))))) / (((((/* implicit */int) (_Bool)1)) + (var_6)))))) ? (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) (short)31599)), (-3898540107194915148LL)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50814))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1219857791))))))));
        arr_2 [i_0] [(unsigned char)2] = ((/* implicit */unsigned int) max((((var_13) * (((/* implicit */unsigned long long int) 1219857777)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0])))))));
        var_19 = ((((/* implicit */unsigned long long int) -1219857791)) % (max((((/* implicit */unsigned long long int) ((_Bool) (short)7251))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_13))))));
        var_20 = ((/* implicit */unsigned long long int) min(((unsigned short)14379), (arr_1 [i_0])));
    }
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_9)))) < (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65086)) : (-1219857791)))))) : (((/* implicit */int) (_Bool)1)))))));
    var_22 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((max((((/* implicit */unsigned int) var_3)), (7680U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            {
                var_23 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */int) ((short) -1219857814))) : (((/* implicit */int) ((-3814325483589871427LL) >= (((/* implicit */long long int) -1219857794)))))))));
                var_24 += ((/* implicit */signed char) (unsigned short)0);
            }
        } 
    } 
}
