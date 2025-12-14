/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60706
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
    var_11 = ((/* implicit */unsigned int) (~(((unsigned long long int) ((((/* implicit */_Bool) -6183493460420406583LL)) ? (2339405950U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
    var_12 = ((/* implicit */int) min((((/* implicit */long long int) var_1)), (var_9)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_2 [i_0]))))), (min((arr_0 [i_0]), (((/* implicit */unsigned int) ((arr_0 [i_0]) < (arr_0 [i_0]))))))));
        var_14 &= ((/* implicit */long long int) var_0);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)152))) ? (((/* implicit */long long int) (-(arr_0 [i_0])))) : (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_0 [i_0])))))) % (((long long int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned short) arr_4 [i_1])))));
        arr_7 [i_1] = min(((+((+(arr_4 [i_1]))))), ((~(((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */long long int) var_6)))))));
    }
    for (unsigned char i_2 = 4; i_2 < 18; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_10 [i_2 + 1])) - (arr_0 [i_2])));
        var_18 -= ((/* implicit */unsigned int) arr_1 [i_2 - 2] [i_2 - 2]);
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_19 = ((/* implicit */int) arr_13 [i_3]);
        var_20 = ((/* implicit */short) arr_14 [i_3]);
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((((long long int) var_7)), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (var_6))))))));
}
