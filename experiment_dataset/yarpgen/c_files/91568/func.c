/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91568
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
    var_11 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_7)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) arr_0 [(signed char)13]);
        var_13 = ((/* implicit */unsigned short) ((((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) + (26)))));
    }
    for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((max((1900807219916718079LL), (((/* implicit */long long int) var_2)))) | (arr_2 [i_1 - 1] [i_1])));
        var_14 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) arr_2 [i_1 + 1] [i_1 + 1]))), ((+(arr_2 [i_1 + 1] [i_1 + 1])))));
        arr_6 [i_1] [(short)9] = min((((min((var_10), (((/* implicit */long long int) arr_1 [i_1] [i_1])))) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))), (((/* implicit */long long int) arr_0 [i_1])));
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((((((((/* implicit */_Bool) (short)-30441)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))) + (2147483647))) << (((((/* implicit */int) var_3)) - (47460))))), (((/* implicit */int) arr_0 [i_1 + 1]))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (signed char)72)) ? (4386877102911625604LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1]))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_8 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((arr_9 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (signed char)17)) >> (((((/* implicit */int) (signed char)72)) - (66))))))))));
        var_17 = ((/* implicit */_Bool) ((((((arr_8 [i_2] [i_2]) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) : (var_7))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 2690673805233312140LL)) ? (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_8 [(unsigned short)1] [i_2]) : (arr_8 [i_2] [(unsigned short)4]))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-30433), (((/* implicit */short) (signed char)-72)))))))) + (166383317869656668LL)))));
        var_18 = ((/* implicit */short) ((signed char) 1099511627648LL));
    }
}
