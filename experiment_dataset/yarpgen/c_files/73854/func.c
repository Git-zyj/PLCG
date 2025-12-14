/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73854
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */signed char) min((3626210522U), (((/* implicit */unsigned int) (unsigned char)164))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3626210522U)) ? (((unsigned long long int) max((var_15), (arr_3 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) arr_4 [i_0]))));
                var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3626210522U)) / (-6741736676932909772LL)))), (max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_0])))));
                var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) (-(var_5)))) : ((((_Bool)0) ? (13481671901291321360ULL) : (arr_0 [i_0])))))));
                arr_5 [3U] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-21))))) * (((((/* implicit */int) (short)-21)) & (((/* implicit */int) (unsigned short)0))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 3; i_2 < 13; i_2 += 2) 
    {
        arr_8 [i_2] |= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (unsigned char)235)))));
        var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2 - 1]))) - (668756772U)));
    }
    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3 + 2])) + (((/* implicit */int) arr_10 [i_3 - 2]))))) ? (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_9 [12ULL] [12ULL]))))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_19))))), ((~(var_10))))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) arr_9 [(short)23] [20U]);
        var_25 ^= ((/* implicit */unsigned int) arr_9 [i_3 - 1] [i_3 + 1]);
        var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)-21)), (3063266072U)));
        var_27 *= ((/* implicit */unsigned char) min((((((/* implicit */int) min((arr_10 [i_3 + 1]), ((short)-3)))) + (((/* implicit */int) var_19)))), (((/* implicit */int) arr_9 [i_3] [i_3]))));
    }
}
