/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69885
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)74))) * (((((/* implicit */long long int) ((1611391373U) + (((/* implicit */unsigned int) -925903125))))) / (((long long int) var_12))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (-(6885273102283530173LL))));
                    var_16 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (signed char)-14)))), (((/* implicit */int) (short)14007))));
                    var_17 = 1770277901932478362ULL;
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_13)), ((short)-23080)))) ? (((/* implicit */int) ((unsigned char) 18446744073709551615ULL))) : (((((/* implicit */int) var_13)) | (((/* implicit */int) (_Bool)1)))))));
}
