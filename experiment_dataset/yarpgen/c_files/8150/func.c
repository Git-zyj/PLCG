/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8150
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) & (13835058055282163712ULL)))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((short) arr_1 [i_0 - 1])))));
                    var_12 += ((/* implicit */long long int) ((8795556151296ULL) << (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(signed char)10] [i_1] [i_1])) || (((/* implicit */_Bool) (short)-13986)))))));
                    var_13 ^= ((/* implicit */long long int) var_1);
                    var_14 *= ((/* implicit */unsigned long long int) min((((397454928) << (((((/* implicit */int) (unsigned char)73)) - (71))))), (((/* implicit */int) ((((/* implicit */int) (short)-32517)) < (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_2))))))))));
                    var_15 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (4611686018427387927ULL)));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((3092481581U) % (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ^ ((~(1202485717U))))))));
}
