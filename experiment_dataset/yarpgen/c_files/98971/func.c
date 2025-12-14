/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98971
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
    var_17 |= ((/* implicit */unsigned long long int) (_Bool)1);
    var_18 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_10 [i_3 - 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)70)))))));
                            arr_11 [i_0 + 3] [i_0 + 3] [i_1] [i_0] [i_3 + 1] = ((/* implicit */_Bool) var_7);
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_1] [(unsigned char)11])) : (((/* implicit */int) arr_1 [(_Bool)1] [i_1]))))) / (max((((/* implicit */unsigned long long int) 60223794U)), (131071ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)6827)))) / (max((((/* implicit */long long int) (_Bool)0)), (9223372036854775807LL))))))))));
                            arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((long long int) (unsigned short)3764))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (1854384979U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [5ULL])))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) var_5)))))), (min((62914560ULL), (((/* implicit */unsigned long long int) ((4227378395U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 3] [0U]))))))))));
                            var_20 ^= (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((max((137438953471ULL), (((/* implicit */unsigned long long int) 60223818U)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                                var_22 -= ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) (unsigned short)16676)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 2) 
                        {
                            {
                                arr_34 [i_11] [9ULL] [i_9] [i_8] [(unsigned char)0] = ((/* implicit */unsigned long long int) var_7);
                                arr_35 [i_7] [i_8] [i_9] [i_10] [i_8] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_9] [i_9] [i_7 - 1] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_8]))) : ((((_Bool)1) ? (arr_30 [i_11 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
                                arr_36 [i_8] [(unsigned short)10] [i_8] [i_11 - 1] [i_10] = ((((/* implicit */_Bool) ((arr_5 [i_11 + 1] [i_8] [i_9]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) min((15974590621035723776ULL), (62914560ULL)))));
                            }
                        } 
                    } 
                } 
                arr_37 [i_8] [i_7] = ((/* implicit */long long int) ((_Bool) min((((unsigned int) arr_19 [i_7 - 2] [14ULL] [i_7] [i_7 - 2] [i_8])), (((/* implicit */unsigned int) var_1)))));
                var_23 = ((/* implicit */_Bool) ((max((((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */int) var_3)) + (((/* implicit */int) (_Bool)1)))))) << (((((/* implicit */int) ((unsigned short) -2561646074932556815LL))) - (3029)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_7);
}
