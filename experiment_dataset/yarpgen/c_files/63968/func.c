/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63968
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((var_1) - (var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), ((short)-17417)))))))) ? (((((_Bool) var_2)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67))))))));
    var_15 = ((/* implicit */unsigned char) (((+(max((((/* implicit */long long int) (signed char)-84)), (var_6))))) * (((/* implicit */long long int) ((var_12) + (min((var_13), (((/* implicit */unsigned int) var_0)))))))));
    var_16 += ((/* implicit */unsigned long long int) ((-5537439701529572589LL) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58387))) < (-3103768620612631717LL)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_17 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))));
            var_18 ^= ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
            var_19 &= ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_4 [i_0] [i_2] [i_2]))) - (((var_0) + (((int) arr_4 [1ULL] [i_0] [i_0])))))))));
            arr_7 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)38516)), (2472628778U)))) : ((+(var_2))))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(2472628778U))))))) : (((/* implicit */int) ((arr_3 [i_2] [i_0]) != (((/* implicit */unsigned long long int) var_7)))))));
            arr_8 [i_0] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_0 [i_2] [i_0])), (((min((((/* implicit */unsigned long long int) arr_4 [i_2] [i_0] [i_0])), (arr_3 [i_0] [i_0]))) - (arr_3 [i_0] [i_0])))));
        }
        var_22 = 5840665710328970194LL;
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_3]) ^ (((/* implicit */long long int) var_7))))) ? ((~(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))))))));
        var_24 = min((((/* implicit */short) ((((/* implicit */int) min((arr_1 [i_3]), (arr_5 [i_3] [i_3])))) <= (((/* implicit */int) ((var_1) < (((/* implicit */long long int) var_12)))))))), (((short) (!(((/* implicit */_Bool) (signed char)-8))))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-67))) ? (var_13) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_3]))))))))));
        var_26 |= ((/* implicit */unsigned char) arr_5 [i_3] [i_3]);
    }
}
