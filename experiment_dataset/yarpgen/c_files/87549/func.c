/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87549
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_8)), ((unsigned short)35192)));
    var_12 |= ((/* implicit */unsigned int) (unsigned short)35187);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (232410178U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
        var_13 *= var_5;
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_3 [i_1 - 1])))), ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((/* implicit */int) arr_3 [i_1 - 1]))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_0)) : (var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 847485864536768871LL)) ? (4193792) : (((/* implicit */int) arr_3 [i_1]))))) : (4128768U)))) : (((11102995115339595406ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37569))))))))));
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(var_2)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1 - 1])), ((unsigned short)35159)))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)208)) >> (((arr_6 [i_2 - 1]) - (1621838042)))));
        var_18 |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 3229893340U)) * (20119777879682933ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1])))));
    }
}
