/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81097
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
    var_16 = ((/* implicit */long long int) var_8);
    var_17 ^= ((/* implicit */_Bool) (((+(861022020))) << (((((/* implicit */int) ((unsigned char) min((var_8), (((/* implicit */short) var_13)))))) - (163)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned char)20))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (7661456811835788864ULL)));
            arr_7 [i_0] [i_0] [3ULL] = ((short) (_Bool)1);
            arr_8 [i_0] = (!((_Bool)1));
        }
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */int) ((unsigned char) (_Bool)0));
        arr_13 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2])))))) >= ((((!(((/* implicit */_Bool) (unsigned char)252)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_2] [i_2] [i_2])))));
        arr_14 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)4)), ((-(536896409U)))))) <= (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_2]))))));
        arr_15 [i_2] = ((/* implicit */unsigned short) (short)-14);
        arr_16 [i_2] = ((/* implicit */unsigned short) ((short) var_7));
    }
    var_19 = ((/* implicit */int) ((signed char) var_6));
}
