/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84122
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
    var_12 = var_10;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_13 = min((((/* implicit */unsigned long long int) (signed char)-104)), (12133895272739296791ULL));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) + (2147483647))) << (((max((((unsigned long long int) -9050996774915142689LL)), (((/* implicit */unsigned long long int) (signed char)98)))) - (9395747298794408927ULL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_4))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)34482)) <= (((/* implicit */int) (_Bool)1))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_4))));
                        arr_14 [14LL] [i_2] [i_3] [i_4] |= ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) arr_4 [i_2])) ? (var_9) : (var_7))), (((/* implicit */unsigned long long int) var_3))))));
                        var_17 = (i_1 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((arr_6 [i_1]) << (((arr_6 [i_1]) - (5920004012650733990LL)))))) ? (arr_6 [i_1]) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (arr_6 [i_1])))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((arr_6 [i_1]) + (9223372036854775807LL))) << (((((((arr_6 [i_1]) + (5920004012650733990LL))) + (2540467248135968855LL))) - (53LL)))))) ? (arr_6 [i_1]) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (arr_6 [i_1]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        arr_21 [i_1] [i_1] [i_1] [i_1] = var_4;
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-77)) || (((/* implicit */_Bool) var_1))))), (max((arr_20 [i_1]), (((/* implicit */unsigned int) var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)104)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_2] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_6] [(unsigned char)2] [(unsigned char)2] [i_1] [1])))))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */long long int) var_0);
        }
        arr_22 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-13536)) ? (((((/* implicit */_Bool) var_4)) ? (arr_17 [i_1] [(_Bool)1] [i_1] [1]) : (arr_17 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_1])) <= (((/* implicit */int) arr_7 [i_1]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            arr_25 [i_1] = ((/* implicit */unsigned char) arr_24 [i_7]);
            arr_26 [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))), (min((((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1] [i_7])), (arr_9 [i_1] [i_1] [i_1])))));
        }
    }
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) (short)6375)), (2377433025603224315ULL)))));
}
