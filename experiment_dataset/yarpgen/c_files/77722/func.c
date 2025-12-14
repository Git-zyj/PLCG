/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77722
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_17 = (-(((/* implicit */int) var_4)));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((571865843) >> (((/* implicit */int) (unsigned char)3))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (_Bool)1)), (var_1))) >> (((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) / (((/* implicit */int) (short)6))))))) && (((/* implicit */_Bool) (unsigned short)39201))));
            var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)35)), (min((((/* implicit */int) (short)4)), ((+(((/* implicit */int) (unsigned char)3))))))));
            var_20 = (short)6;
        }
        arr_7 [15LL] = ((/* implicit */long long int) min((2147483637), ((~(((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) arr_6 [(short)11] [i_1])) : (((/* implicit */int) (unsigned char)7))))))));
    }
    var_21 = ((/* implicit */signed char) var_1);
}
