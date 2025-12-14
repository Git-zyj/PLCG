/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77944
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
    var_13 = (-(((/* implicit */int) var_8)));
    var_14 = min(((signed char)100), (((signed char) var_4)));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163)))))) >= (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) 4114666959U))))))) > ((~(((/* implicit */int) min(((unsigned short)37915), (((/* implicit */unsigned short) var_9)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((unsigned int) ((long long int) arr_6 [i_1] [i_2] [i_2 - 2] [i_2 - 2])));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (1249006667U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104)))));
                    arr_7 [i_0] [i_0] [i_0] = ((unsigned short) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_4 [(unsigned short)9]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-104)))))) : (((((/* implicit */_Bool) (signed char)-113)) ? (-7LL) : (((/* implicit */long long int) arr_0 [i_0]))))));
                }
            } 
        } 
    } 
}
