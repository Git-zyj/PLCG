/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55776
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)18)), (((unsigned short) 4278592900U)))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -7401583672186074116LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2969197160U))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) ? (var_1) : (var_6)))) + (var_14))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) 2408825304U)) / (-6288417194936819474LL)))) ? (15771806597828970453ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_3) : (1585764564U))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (arr_1 [(_Bool)0])))) ? (((((/* implicit */_Bool) 1302988397U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) : (arr_0 [i_0] [i_0]))) : ((+(arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned char)18);
    }
    for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (max((((/* implicit */unsigned int) (short)-2738)), (((((/* implicit */_Bool) 10160776714444435148ULL)) ? (max((((/* implicit */unsigned int) (short)17641)), (arr_5 [4LL] [i_1]))) : (0U)))))));
        arr_8 [(short)12] = ((/* implicit */unsigned int) (unsigned char)1);
    }
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        var_23 ^= ((/* implicit */_Bool) max((((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (arr_9 [i_2])))), (((/* implicit */unsigned char) ((((/* implicit */long long int) arr_10 [i_2 - 1] [i_2])) < (((2920680843388718765LL) >> (((var_14) - (8238892161640296020LL))))))))));
        var_24 -= (unsigned char)140;
        var_25 = ((unsigned long long int) (short)17636);
    }
}
