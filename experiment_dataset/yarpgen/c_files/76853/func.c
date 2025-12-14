/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76853
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
    var_10 = ((/* implicit */long long int) ((((_Bool) var_4)) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) ((signed char) (_Bool)1)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-113))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned char) -1073741824));
        var_11 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_1 [16LL]) : (((/* implicit */long long int) -1073741824))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
        var_12 = ((/* implicit */unsigned short) ((((unsigned long long int) var_6)) <= (((/* implicit */unsigned long long int) (~(var_7))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_13 = ((/* implicit */short) (+((((!(arr_5 [i_1] [i_1]))) ? (arr_0 [i_1]) : (max((var_7), (((/* implicit */long long int) 2365297495U))))))));
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) ((signed char) arr_4 [i_1]))) && (((/* implicit */_Bool) ((unsigned int) (signed char)-89))));
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) (signed char)71))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)19535))))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19535)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)70)))))))) : (min((var_1), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))));
    }
    var_16 = ((/* implicit */unsigned short) var_1);
}
