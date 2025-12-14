/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8525
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
    var_14 = ((/* implicit */int) -1LL);
    var_15 = ((/* implicit */unsigned short) ((max((var_8), ((_Bool)1))) ? (2116944044U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) == ((~(((/* implicit */int) (signed char)69))))))))));
    var_16 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) (+(var_9)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (unsigned short)7922))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (signed char)7))) ^ ((~(((/* implicit */int) (short)-20516))))))) : ((-(((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))));
            arr_9 [(_Bool)1] [i_1] [i_1] = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (unsigned short)32378)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)7909)))))) == (((/* implicit */int) (short)-32339))));
        }
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967284U)) ? (max((((unsigned int) var_4)), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_12)) + (2147483647))) > ((~(((/* implicit */int) (unsigned short)47531))))))))));
        arr_10 [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) (unsigned char)244))))), (max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (6886270910044813643LL))))) * (((((/* implicit */_Bool) max((3601379682U), (((/* implicit */unsigned int) var_5))))) ? ((-(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)18008), (var_0)))))))));
    }
}
