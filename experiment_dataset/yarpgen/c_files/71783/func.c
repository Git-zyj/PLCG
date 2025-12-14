/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71783
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_3))) || (((/* implicit */_Bool) ((signed char) min((10601754998944304669ULL), (((/* implicit */unsigned long long int) var_9))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned short)37189)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((unsigned short) 9223372036854775791LL)))))) <= (((((/* implicit */_Bool) ((unsigned long long int) 9223372036854775807LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)64)))))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (var_2)))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) < (((((/* implicit */_Bool) min((var_4), (((/* implicit */short) var_0))))) ? (((var_5) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_9))))))));
    var_20 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) ((short) 2578509254U))) + (((/* implicit */int) min((arr_0 [i_0]), (var_5)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_22 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned short) 1463791546U))) ? (12321290205494873365ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_16)))))), (min((arr_4 [i_0] [i_0] [20]), (((/* implicit */unsigned long long int) ((short) -9223372036854775791LL)))))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52481))) % (var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((signed char)122), (((/* implicit */signed char) var_10))))) ? (((/* implicit */int) ((_Bool) (signed char)-127))) : (((((/* implicit */int) (signed char)111)) + (((/* implicit */int) (unsigned short)65521))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) var_11))))), (max((((/* implicit */unsigned int) arr_5 [i_2])), (arr_2 [(short)6])))))));
                        arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((unsigned long long int) ((signed char) var_10))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) var_14))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [5LL])) : (((/* implicit */int) var_10))))) : (max((var_8), (var_16))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)183))));
    }
}
