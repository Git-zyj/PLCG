/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67197
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)1307)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) var_2))))));
                var_19 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((3608853967U) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (min((((/* implicit */int) var_15)), (var_11))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)8)))))) >= ((~((~(((/* implicit */int) (unsigned short)64228))))))));
                var_20 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (~(var_14)));
    var_22 = ((/* implicit */unsigned char) ((792469929983806011LL) - (((/* implicit */long long int) var_0))));
    var_23 = ((((/* implicit */_Bool) ((signed char) var_8))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_7)), (var_4)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54656))) ^ (0ULL))))) : (((/* implicit */unsigned long long int) (~(max((var_0), (((/* implicit */unsigned int) var_6))))))));
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_16))));
}
