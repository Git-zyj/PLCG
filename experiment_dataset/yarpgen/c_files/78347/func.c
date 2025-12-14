/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78347
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
    var_13 = max((((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((max((((/* implicit */long long int) var_8)), (7110413377156434618LL))) - (7110413377156434618LL)))))), (max((((((/* implicit */_Bool) (signed char)127)) ? (var_4) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_1)))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) min(((unsigned char)128), (((/* implicit */unsigned char) (signed char)119)))))) ? (((/* implicit */int) ((unsigned short) var_3))) : (var_10)));
    var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-7110413377156434619LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_3)));
    var_16 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (!((_Bool)0))));
                    var_17 = min((((/* implicit */unsigned long long int) var_8)), (((5399806390883253037ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)108)) >= (arr_4 [i_0]))))))));
                    arr_8 [i_0] [7] = ((/* implicit */unsigned char) (((_Bool)0) ? (8006383768741152132ULL) : (((((/* implicit */_Bool) arr_2 [(short)2])) ? (3ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-1LL))))))));
                }
            } 
        } 
    } 
}
