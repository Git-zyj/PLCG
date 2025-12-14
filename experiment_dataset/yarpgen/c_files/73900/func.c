/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73900
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((1261896077), (((/* implicit */int) (unsigned short)2047))))) ? (((/* implicit */int) (!(var_13)))) : ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_2))))))));
    var_18 += ((((((((/* implicit */int) var_5)) + (2147483647))) << (((((((/* implicit */int) var_14)) << (((var_4) + (2060519300))))) - (64))))) >> ((((~(((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) - (6020420023739082589LL))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) var_5))))) ^ (((((/* implicit */_Bool) 1144321156)) ? (6940807561525390803LL) : (34359738367LL))))) ^ ((((!(((/* implicit */_Bool) (unsigned short)63499)))) ? (((/* implicit */long long int) max((-1113952214), (1113952202)))) : (var_0))));
        var_19 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [16LL] [16LL])) ? (((/* implicit */int) min((arr_0 [14]), (((/* implicit */signed char) var_13))))) : (((/* implicit */int) ((arr_1 [i_0] [2LL]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [10LL]))))))))), (min((((/* implicit */unsigned int) arr_0 [(signed char)10])), (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_16)))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_6))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [8LL] [i_1]))) : (var_16))) >> ((((~(-1113952214))) - (1113952195))))))))));
        var_22 = ((/* implicit */unsigned char) var_14);
        var_23 = ((/* implicit */long long int) max((8163471785846791180ULL), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1]))))), (((((/* implicit */_Bool) -3640622778611078665LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (7002267936893274501ULL)))))));
    }
    var_24 = ((/* implicit */signed char) ((var_13) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (var_4)))) ? (((((/* implicit */_Bool) (unsigned short)63498)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2047))) : (-313808410884631778LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_13))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63484)))));
}
