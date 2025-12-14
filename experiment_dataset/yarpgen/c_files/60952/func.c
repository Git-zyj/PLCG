/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60952
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_13 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13)) ? (-1678934483) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (3398978761037664588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21457)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [(unsigned short)0]) || (((/* implicit */_Bool) arr_0 [(short)0] [(short)0])))))) : (arr_0 [(unsigned char)6] [(unsigned char)6])))));
        var_14 = ((/* implicit */long long int) ((((arr_0 [i_0] [i_0 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)18969))))) % (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6545)) ? (15047765312671887028ULL) : (3398978761037664588ULL)));
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) 1678934493)) ? (((((/* implicit */_Bool) (unsigned char)21)) ? (3398978761037664599ULL) : (((/* implicit */unsigned long long int) var_0)))) : (((((/* implicit */unsigned long long int) 1069383844873544606LL)) ^ (3398978761037664599ULL)))))));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 += (+(((((/* implicit */_Bool) var_12)) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12574))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */unsigned long long int) 1700951191U)) >= (3398978761037664599ULL)))));
    }
}
