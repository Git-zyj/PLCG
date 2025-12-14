/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97259
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
    var_18 = ((/* implicit */int) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        var_20 = ((unsigned char) var_17);
        var_21 += ((/* implicit */int) var_9);
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_4)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_11 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)28878)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned char) (signed char)(-127 - 1))))));
                    arr_12 [i_2] [i_1] = ((/* implicit */signed char) var_5);
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((5423017977339010950LL) >> (((((/* implicit */int) (unsigned char)193)) - (177))))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)104)) - (((/* implicit */int) (unsigned char)193))));
                }
            } 
        } 
    }
    for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
    {
        var_24 = ((/* implicit */long long int) var_10);
        var_25 ^= ((/* implicit */unsigned char) var_8);
    }
    var_26 |= ((/* implicit */long long int) ((unsigned short) (_Bool)0));
    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4266)))))) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_11)));
}
