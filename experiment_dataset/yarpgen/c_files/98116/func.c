/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98116
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
    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -422253659)) ? (10901649976705690944ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4094)))))) ? (((/* implicit */unsigned long long int) (+((+(var_5)))))) : (var_11)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((long long int) (!(((/* implicit */_Bool) 591958259))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (short)-15910))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)235))))), (max((((/* implicit */unsigned int) 2147479552)), (arr_0 [0ULL])))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
            arr_5 [i_0] [i_0] [i_1] = var_11;
        }
    }
    for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) arr_4 [i_2] [i_2]);
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-17937)))))) | (6790442975333418410LL)));
        var_18 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 2]))) + (4294967282U))), (((/* implicit */unsigned int) min((arr_8 [i_2 + 2] [i_2]), (arr_1 [i_2 - 2]))))));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_7) + (9223372036854775807LL))) >> (((var_1) - (367590218429084355ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */_Bool) var_3)) ? (2251799813685247ULL) : (((/* implicit */unsigned long long int) var_0))))))));
    var_20 = ((/* implicit */long long int) var_11);
    var_21 = var_11;
}
