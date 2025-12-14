/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99325
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_10))))), (min((7672321343353528068LL), (((/* implicit */long long int) var_4))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 7672321343353528068LL)))) | (min((var_2), (((/* implicit */long long int) 3707745296U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 2926241754540584902LL))))));
    var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)153))))) ? ((((~(var_8))) % (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_5 [10LL] [i_1] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) max(((~(var_9))), (((/* implicit */unsigned int) min((var_12), (((/* implicit */short) (_Bool)1)))))))) : (arr_1 [i_0])));
                    var_16 = ((/* implicit */unsigned short) min((((((((/* implicit */int) (short)-6002)) != (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */_Bool) (short)-643)) ? (var_1) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)79)), (var_10)))))), ((~(((/* implicit */int) var_3))))));
                    var_17 = ((/* implicit */short) (((+(-3988253212425913697LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_3 [7LL] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [6] [i_1] [i_1])) : (((/* implicit */int) var_0))))), (arr_0 [i_1])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(min((var_5), (495840545)))))), (((unsigned int) max(((short)-22923), (((/* implicit */short) var_11)))))));
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((var_7), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)5998))))))))));
}
