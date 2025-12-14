/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64513
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))) % ((((-(((/* implicit */int) (_Bool)1)))) - (var_7)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_14 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1048574)))))) / (arr_2 [(_Bool)1]))) ^ (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [(unsigned char)17])))))))));
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
    }
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        var_16 *= ((/* implicit */signed char) arr_4 [(unsigned short)14] [i_1 + 3]);
        arr_5 [i_1 + 2] = ((/* implicit */int) ((((arr_4 [i_1 - 1] [i_1]) << (((/* implicit */int) var_3)))) % (((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 1])) ? (arr_4 [i_1 + 1] [i_1]) : (arr_4 [i_1 + 3] [i_1])))));
        var_17 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_1 + 1])))) - (((((/* implicit */int) var_6)) + ((+(((/* implicit */int) (unsigned short)65535))))))));
    }
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) min((var_11), (((/* implicit */signed char) var_3))))), (((((/* implicit */_Bool) var_4)) ? (-2147483644) : (((/* implicit */int) (short)-32762)))))))));
}
