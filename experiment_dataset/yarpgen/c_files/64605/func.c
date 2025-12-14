/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64605
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)31)) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) == (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 2])) : (((/* implicit */int) arr_4 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (signed char)22)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)38)), (arr_4 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((unsigned char) min((((((/* implicit */int) (unsigned short)14176)) * (((/* implicit */int) (unsigned char)199)))), (((((/* implicit */int) (unsigned short)60241)) ^ (((/* implicit */int) (unsigned char)29)))))));
    var_15 = ((/* implicit */short) var_2);
    var_16 &= ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)(-32767 - 1))))) & (var_6))), (((/* implicit */unsigned long long int) (short)-16400))));
    var_17 = ((/* implicit */unsigned long long int) ((((min((((/* implicit */unsigned int) (_Bool)1)), (var_5))) != (var_1))) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (short)32760)))) : (((/* implicit */int) ((((/* implicit */_Bool) 6863930485313377194LL)) && (((/* implicit */_Bool) ((2046U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
}
