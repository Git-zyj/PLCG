/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76372
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
    var_17 = ((/* implicit */unsigned char) max((3753533461U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (signed char)-89)))) : (((/* implicit */int) max((var_9), (var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (short)(-32767 - 1))) & (2091632445)))));
        var_18 = ((/* implicit */unsigned short) (!((_Bool)1)));
        var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        arr_5 [i_0] [(signed char)7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) (signed char)9))));
    }
    var_20 &= (+(((/* implicit */int) (unsigned short)65528)));
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) ((unsigned short) 18446744073709551602ULL))))));
    var_22 &= ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) (signed char)-10)) ? (var_0) : (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_12)), (var_14)))))) << (((var_12) - (1221075527)))));
}
