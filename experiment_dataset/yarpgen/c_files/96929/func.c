/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96929
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
    var_17 |= ((/* implicit */_Bool) var_9);
    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305843008676823040ULL)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (short)14035))))) ? (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) + (var_14)))) : (((/* implicit */unsigned int) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (-4996929090821206591LL)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14035)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (2305843009205305344LL)))) ? (var_7) : (((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) arr_1 [i_0]))));
                arr_8 [2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)55))))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_0] [15U])) : (((/* implicit */int) (unsigned short)5039))))))) : (max((((17773810801969840077ULL) - (((/* implicit */unsigned long long int) 1230979230U)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2] [14U])) ? (((((/* implicit */_Bool) arr_2 [2] [i_2])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 288230376151711728ULL)))) : (672933271739711542ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (5484160067584639057LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)131)))))))));
        var_21 = ((/* implicit */signed char) (((((+(((/* implicit */int) arr_10 [i_2 + 2])))) + (2147483647))) << ((((((+(var_9))) + (432316101))) - (21)))));
    }
    var_22 |= ((/* implicit */long long int) var_1);
}
