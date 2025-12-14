/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69045
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (unsigned char)136)) & (((/* implicit */int) (short)3615)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)7)) : (var_10)))))) || (((/* implicit */_Bool) var_6))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62197)) / (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((var_2) <= (var_2)))) : (((/* implicit */int) var_6)))) : (((int) var_1)))))));
    var_17 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_5)) <= (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2)));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_18 = ((short) min((((var_9) + (((/* implicit */int) (unsigned short)59464)))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6)))))));
        arr_2 [i_0] = ((/* implicit */signed char) var_4);
        var_19 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) >> (((((0ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3639)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120)))))))) - (17098187420114306740ULL)))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (4494803534348288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) >> (((min((((/* implicit */unsigned long long int) min(((unsigned char)119), (((/* implicit */unsigned char) var_14))))), (arr_4 [i_1 + 3]))) - (44ULL)))));
        var_20 = ((/* implicit */signed char) (unsigned char)125);
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (short i_3 = 3; i_3 < 20; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3 + 1])) : (var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_3] [i_3] [i_3 - 3])) / (var_9)))) : (var_7)));
                        var_22 = ((/* implicit */unsigned int) var_8);
                        var_23 = var_3;
                        arr_13 [i_4] [i_2] [i_3 - 3] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_14)) <= (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)136)))))));
                    }
                } 
            } 
        } 
    }
}
