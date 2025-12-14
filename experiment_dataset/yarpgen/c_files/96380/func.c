/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96380
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) (unsigned short)4621);
        var_17 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) var_0)), (18446744073709551615ULL)))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_18 &= ((/* implicit */unsigned char) min((max((1099933251U), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)110))))))), (((/* implicit */unsigned int) (unsigned short)64958))));
        var_19 = ((/* implicit */_Bool) arr_2 [i_1 + 1]);
        var_20 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) (signed char)-21))), (min((min((((/* implicit */unsigned long long int) (short)31)), (12977639484332514671ULL))), (((/* implicit */unsigned long long int) ((5469104589377036945ULL) < (var_15))))))));
        var_21 = ((/* implicit */unsigned char) (short)20);
        var_22 = ((/* implicit */int) (-(min(((~(5469104589377036945ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_1])) + (2147483647))) >> (((/* implicit */int) (short)20)))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_23 = ((/* implicit */signed char) (short)31);
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (unsigned char)205);
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(arr_9 [9LL] [i_2]))), (var_15)))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_11 [i_2] [i_3] [i_3])) - (((/* implicit */int) var_13)))) - ((-(((/* implicit */int) var_9))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) + (1210519940U)))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 2147483647))) > (((/* implicit */int) ((((/* implicit */_Bool) (short)42)) && (((/* implicit */_Bool) ((unsigned short) 2323914701U)))))))))));
            arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_12) << (((/* implicit */int) ((var_3) >= (var_3))))))) ? ((-((+(((/* implicit */int) var_4)))))) : (((/* implicit */int) (unsigned char)193))));
        }
    }
    var_26 = ((/* implicit */signed char) var_15);
    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (5106486844181228671LL)))) ? (var_1) : (((/* implicit */int) var_4)))))));
    var_28 = ((/* implicit */int) min(((+(((unsigned int) (unsigned short)10990)))), (((/* implicit */unsigned int) var_7))));
}
