/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66712
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51)))))) - (((((/* implicit */_Bool) -4029642231472847228LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_8)))))))) : (var_8)));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (var_4)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)56222)) ? (18014123631575040LL) : (((/* implicit */long long int) var_1)))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((arr_2 [i_1] [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37190))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (short)2511))))))) : (max((max((((/* implicit */unsigned int) arr_0 [15] [i_1])), (var_2))), ((~(3987108507U)))))));
            }
        } 
    } 
    var_13 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_10))))));
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
}
