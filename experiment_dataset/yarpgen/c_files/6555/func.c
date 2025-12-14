/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6555
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_12))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 += ((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [i_0 - 4] [i_0 + 1] [i_1 + 1])) ? (((/* implicit */long long int) 262128)) : (449569332722440875LL))), (((((/* implicit */_Bool) 4252632443U)) ? (449569332722440878LL) : (((((/* implicit */_Bool) 449569332722440852LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-449569332722440876LL)))))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (max((595611807), (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])))) : (arr_1 [i_0]))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) ((unsigned short) ((int) arr_3 [i_0] [i_0 - 1] [i_0]))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [12ULL] [12ULL]), (((/* implicit */unsigned char) var_5)))))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))))) ? (((((/* implicit */_Bool) (+(-1018474135)))) ? (max((((/* implicit */long long int) (signed char)89)), (-7854234439695060458LL))) : (((/* implicit */long long int) ((int) arr_2 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -449569332722440877LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)));
    var_19 &= ((/* implicit */unsigned long long int) var_7);
    var_20 ^= ((/* implicit */long long int) var_8);
}
