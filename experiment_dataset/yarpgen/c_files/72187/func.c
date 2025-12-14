/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72187
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
    var_19 = ((/* implicit */unsigned int) var_17);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)147)))), (((((/* implicit */_Bool) 875750483U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)237))))))) + (((((/* implicit */unsigned int) (+(-1550540301)))) - (arr_0 [i_0] [i_0])))));
        var_21 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)189)) > (((/* implicit */int) (signed char)83)))) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-3589)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (signed char)70)))))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (short)0)))), (((((/* implicit */int) (short)-22303)) & (arr_4 [i_1 + 1] [i_1 - 1])))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-73)) ? (1495328203U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31223)))));
                    }
                    var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) var_3)) : (var_10))), (((/* implicit */unsigned long long int) min((-4992619638157865995LL), (((/* implicit */long long int) (short)-256)))))));
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) / (var_0)))) ? (((arr_5 [i_0]) ? (((/* implicit */int) (short)6410)) : (((/* implicit */int) (signed char)72)))) : ((~(((/* implicit */int) var_14)))))) >= (((/* implicit */int) ((max((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) -4992619638157866001LL)))) > (((/* implicit */unsigned long long int) var_8)))))));
    }
    var_25 = ((/* implicit */unsigned int) var_11);
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)0)))) << (((((/* implicit */long long int) ((/* implicit */int) var_15))) / (var_13)))))) : ((~((+(var_4))))))))));
    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1))))), ((~(239111874U))))))));
}
