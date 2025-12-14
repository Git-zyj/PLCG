/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96641
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned char) 256);
        var_21 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_2 [(unsigned char)15])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7)))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)132))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_1 [5ULL] [i_0])) : (((/* implicit */int) (signed char)-76))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) var_17)), (var_9)))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((12103606739043495125ULL) >> (((((/* implicit */int) var_1)) - (16951)))))) ? (((((/* implicit */_Bool) (short)7391)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26679))) : (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1])))))))) ? (-4577763690383669809LL) : (-2877777283018510440LL)));
        var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6343137334666056490ULL)) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) arr_5 [i_1]))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) 372868694)) ? (9006998207142641971ULL) : (((/* implicit */unsigned long long int) -2877777283018510440LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134)))))));
    }
    var_24 = ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -636992792)), (var_13)))) ? ((~(6343137334666056514ULL))) : (((/* implicit */unsigned long long int) 360906194U))));
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) : (var_15)));
}
