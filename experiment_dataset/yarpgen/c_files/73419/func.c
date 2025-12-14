/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73419
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | ((+(3738612943U)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))) <= (arr_6 [i_1 - 1] [i_1 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (((unsigned int) arr_2 [i_0] [i_2 + 1]))));
                    var_19 ^= ((/* implicit */long long int) (-((~(((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)20447))))))));
                    arr_7 [i_2 - 1] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11811))) > (arr_4 [i_2 + 1] [i_2 - 1] [i_1 - 2] [i_1 + 1]))) ? (((((/* implicit */_Bool) 17ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)81)) % (((/* implicit */int) (unsigned short)17798)))))));
                }
            } 
        } 
    } 
}
