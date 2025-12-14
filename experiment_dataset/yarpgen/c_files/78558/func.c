/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78558
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) / (((var_7) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-122)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned char) var_7);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_2] [(short)19] [i_1] [i_0])) : (((/* implicit */int) (signed char)-13))))) ? (min((3569188003689597735LL), (((/* implicit */long long int) (signed char)0)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-350))))))));
                        var_16 = ((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_3 [i_0] [i_0]))));
                        arr_9 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) var_13);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_1))));
        var_18 = arr_10 [i_4] [i_4];
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((arr_1 [i_4] [i_4]) || (arr_1 [i_4] [i_4]))))));
        arr_12 [i_4] = ((/* implicit */long long int) ((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))));
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_5])) / (((/* implicit */int) arr_5 [i_5 - 1] [i_5]))));
        arr_16 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) | (3551494787U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        arr_17 [i_5] = (-(arr_15 [i_5 - 1]));
        arr_18 [i_5] = ((/* implicit */_Bool) (~(347936582)));
        arr_19 [i_5] [4ULL] = (+(((/* implicit */int) arr_5 [i_5] [i_5 - 1])));
    }
}
