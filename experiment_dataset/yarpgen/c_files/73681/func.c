/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73681
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
    var_10 = min((min((((unsigned int) var_2)), (((/* implicit */unsigned int) ((unsigned char) var_8))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)40))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) 768684416U);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(((long long int) (unsigned short)48348))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-1))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((-1614103121) | (((/* implicit */int) arr_2 [i_1] [(_Bool)1])))) + (2147483647))) >> ((((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))) + (37)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((_Bool)1))))) > (15988975363590447291ULL)))) : (((((min((var_2), (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) var_5)) - (41041)))))));
        var_12 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_2)) != (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (((unsigned int) (unsigned char)8))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        var_13 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2]))));
        var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */unsigned long long int) ((arr_0 [i_2]) && (((/* implicit */_Bool) var_4))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_6))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_14 [i_2] [i_3] |= ((/* implicit */short) (+(((/* implicit */int) var_4))));
            arr_15 [i_2] = ((/* implicit */signed char) var_9);
            var_17 = (_Bool)0;
        }
        for (short i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            var_18 = (signed char)35;
            arr_18 [i_2] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_2)))));
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_19 = ((((/* implicit */_Bool) (unsigned char)95)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 768684416U)) ? (var_2) : (((/* implicit */int) var_8))))));
            var_20 = ((/* implicit */signed char) ((unsigned char) var_2));
            var_21 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)48346)) ? (((/* implicit */int) var_4)) : (var_2)))));
            var_22 *= ((/* implicit */signed char) ((unsigned int) var_9));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        var_23 |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
        arr_23 [i_6] = ((/* implicit */long long int) var_2);
        var_24 = ((/* implicit */unsigned char) ((unsigned long long int) var_8));
        arr_24 [i_6] = ((/* implicit */unsigned char) var_7);
    }
}
