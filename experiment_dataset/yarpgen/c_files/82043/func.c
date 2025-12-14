/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82043
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
    var_17 = var_11;
    var_18 |= ((/* implicit */unsigned char) ((var_7) < (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)121)) * (((/* implicit */int) (unsigned char)90)))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (var_3)))))))));
    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned short)37813))))) ? (var_7) : (((/* implicit */unsigned long long int) ((var_3) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37823))))))));
    var_20 = ((/* implicit */unsigned int) -1734090120433754676LL);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_21 += ((/* implicit */int) 0ULL);
        arr_3 [i_0] [i_0] = (_Bool)1;
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) (signed char)127);
            arr_6 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (unsigned short)27718))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((arr_9 [i_0] [i_2] [1ULL]) ? (((/* implicit */int) (unsigned short)27718)) : (((/* implicit */int) (unsigned short)110)))));
            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)37813))));
        }
        var_24 = ((/* implicit */int) ((((/* implicit */int) ((-4792471252449236635LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)62)))))) >= (((/* implicit */int) (unsigned short)37817))));
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_13 [7ULL] = (signed char)48;
        arr_14 [i_3] &= ((/* implicit */short) 18446744073709551615ULL);
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) 3304943467261022280ULL))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_2 [i_3] [i_3]))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 4; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) 4792471252449236636LL);
        var_28 = ((/* implicit */int) (unsigned short)52779);
    }
    /* vectorizable */
    for (unsigned int i_5 = 4; i_5 < 13; i_5 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */long long int) ((unsigned long long int) ((long long int) 2147483647)));
        var_30 -= ((/* implicit */unsigned char) arr_9 [i_5] [i_5] [i_5]);
    }
}
