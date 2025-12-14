/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68004
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
    var_12 = ((/* implicit */unsigned short) (signed char)-55);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-1) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_10)) ? (-106372280) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) ((signed char) (unsigned char)255)))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) ((((((/* implicit */_Bool) -743588936)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)64)) ? (((705217445) & (((/* implicit */int) ((_Bool) 743588935))))) : (((/* implicit */int) (unsigned char)56))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0 - 3] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 4385100614853308923LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)21292))))));
        var_15 = ((/* implicit */unsigned char) (-(((2147483647) / (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((((unsigned char) 743588936)), (((/* implicit */unsigned char) min((arr_0 [i_0] [i_0 - 2]), (arr_0 [i_0] [i_0 + 1]))))));
                    var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [(unsigned char)2] [i_2])) ? (3352476398U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) << (((((/* implicit */int) (short)(-32767 - 1))) + (32770))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_1 + 2]))) : (min((18467348U), (((/* implicit */unsigned int) (unsigned short)41413))))));
                    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)176)) - (((/* implicit */int) (unsigned short)63080))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_10 [i_3] [i_3] &= ((/* implicit */unsigned short) ((int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) % (min((((/* implicit */long long int) (unsigned char)151)), (arr_6 [i_3] [i_3] [i_3]))))));
        arr_11 [i_3] |= ((/* implicit */unsigned int) var_7);
        var_19 -= ((/* implicit */unsigned char) arr_0 [i_3] [i_3]);
        var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 255)) ? (((((/* implicit */_Bool) max((2571453874196781987LL), (((/* implicit */long long int) (signed char)3))))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((unsigned short)42264), ((unsigned short)24123)))))) : (min((2147483647), (((/* implicit */int) var_9))))));
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_5 = 4; i_5 < 10; i_5 += 1) 
        {
            var_21 = ((/* implicit */short) (unsigned char)0);
            var_22 *= ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) (unsigned short)64571)) || (((/* implicit */_Bool) (short)-8455)))) ? (min((1869608011021749008LL), (((/* implicit */long long int) 180354447)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))))));
            var_23 = ((/* implicit */long long int) ((unsigned int) (unsigned short)44600));
        }
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            arr_20 [i_4] [i_4] = ((/* implicit */int) (unsigned char)25);
            var_24 = ((/* implicit */int) arr_7 [i_4] [i_4] [i_6]);
        }
        var_25 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))) : (6107542961641764226LL))) - (min((((/* implicit */long long int) 267232164)), (arr_12 [i_4])))));
    }
}
