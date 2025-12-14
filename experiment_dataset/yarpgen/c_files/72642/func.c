/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72642
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
    var_19 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (max((((/* implicit */unsigned long long int) (+(-1568549073)))), ((+(9695155865468955771ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max((31), (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 13366865109620644683ULL))))) : ((~(((/* implicit */int) (_Bool)0)))))));
                    var_20 *= ((/* implicit */unsigned short) ((((unsigned long long int) arr_5 [i_0 - 1] [i_1 - 1] [i_1 + 1])) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(signed char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59187))) : (3833902067U))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) (+(((((/* implicit */int) (!((_Bool)1)))) >> (((8394315999068425257ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
}
