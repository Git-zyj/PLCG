/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71091
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
    var_19 = (-(((long long int) ((long long int) (signed char)127))));
    var_20 &= ((/* implicit */_Bool) (signed char)64);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) var_0);
        var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (arr_0 [i_0]))), (((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))))))));
        var_23 |= ((/* implicit */_Bool) arr_2 [(unsigned short)6]);
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) 2366867847U)) : (9251150101761020607ULL)));
        arr_9 [i_1] |= ((/* implicit */signed char) ((unsigned int) (+(9251150101761020587ULL))));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]);
        var_24 *= ((unsigned short) (-(arr_4 [(unsigned char)11])));
        arr_11 [i_1] |= ((/* implicit */int) (-(((var_10) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_25 *= ((/* implicit */unsigned char) ((_Bool) var_15));
        arr_14 [i_2] [i_2] = ((/* implicit */long long int) ((int) (signed char)105));
        var_26 = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (arr_15 [(unsigned char)12])))) ? (((/* implicit */long long int) arr_16 [i_3] [i_3])) : (((((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_8))) ^ (((/* implicit */long long int) min((arr_16 [i_3] [i_3]), (arr_16 [i_3] [i_3]))))))));
        var_28 = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */long long int) var_15)), (arr_15 [i_3]))));
        var_29 *= ((/* implicit */_Bool) var_13);
        var_30 &= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned int) var_12)), (arr_16 [i_3] [i_3]))));
    }
    var_31 += ((/* implicit */_Bool) min((((unsigned short) var_1)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6)))))));
    var_32 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) (signed char)-127))) - (((long long int) var_13))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
}
