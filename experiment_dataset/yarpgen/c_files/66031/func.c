/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66031
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
    var_17 &= ((/* implicit */signed char) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_11))) : (var_16)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2050821794103586035LL)) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned char) (unsigned char)237)))));
        arr_8 [17LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (arr_2 [6U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((unsigned long long int) var_9)))))) : ((-(((((/* implicit */_Bool) 18165097130999391426ULL)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (signed char)26))))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((_Bool) arr_0 [i_1])))))));
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 22; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        arr_19 [i_2] [i_4] [i_4 + 4] [i_4] [i_4 + 3] [i_4 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_12 [i_2])), (-1890202237)))) : (arr_7 [i_4 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [i_3 + 1])), ((unsigned char)32))))) : (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)32))))) & (((long long int) arr_7 [i_2]))))));
                        var_20 = ((/* implicit */_Bool) ((max(((+(((/* implicit */int) (unsigned char)237)))), ((+(((/* implicit */int) arr_1 [i_2])))))) * (((((/* implicit */_Bool) arr_16 [i_4 + 2] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_16 [i_4 + 3] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) arr_16 [i_4 + 4] [i_3 + 2] [i_3 - 1]))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)9), (arr_13 [i_5]))))) : (arr_7 [i_2])))) % ((~(arr_6 [i_4 + 4] [i_3 - 1])))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((var_11), (((/* implicit */long long int) arr_2 [i_2])))), (((/* implicit */long long int) arr_3 [i_2] [i_2])))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_23 = ((/* implicit */long long int) ((arr_14 [i_6]) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) arr_16 [i_6] [i_6] [i_6]))));
        var_24 += ((/* implicit */short) 4294967295U);
        var_25 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)18))));
    }
}
