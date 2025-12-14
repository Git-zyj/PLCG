/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66042
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] |= max(((-(((/* implicit */int) (unsigned char)95)))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0])), (var_6)))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) ((int) max((((/* implicit */long long int) arr_4 [i_1])), ((-(arr_3 [i_0] [i_0] [i_1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -2147483644)), (14831189986686799572ULL)));
                        arr_13 [i_0] [(unsigned short)17] [i_2] [i_3] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) (unsigned char)160)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_0 [i_1])))))) : (((((/* implicit */_Bool) arr_12 [4U] [4U] [i_2])) ? (4003110066061303082LL) : (((/* implicit */long long int) -11)))))))));
                    }
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned char)95))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) -169036416)) : (11084575824479253991ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) : (max((((((/* implicit */_Bool) (unsigned short)63942)) ? (((/* implicit */long long int) 16777216U)) : (-4003110066061303083LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_15)))))))));
                }
                var_18 -= ((/* implicit */unsigned int) (+(((arr_4 [i_0]) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) arr_4 [i_0]))))));
            }
        } 
    } 
    var_19 += ((/* implicit */short) 5642408911700513782ULL);
    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 5642408911700513791ULL)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_15)) >> (((((/* implicit */int) (short)-32763)) + (32769))))))) : (((/* implicit */int) var_12))));
    var_21 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (~(5017255315400629897LL)))) & (max((((/* implicit */unsigned long long int) (signed char)-124)), (var_1))))) < (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_7)) * (((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 1; i_4 < 24; i_4 += 3) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_14 [i_4 - 1]) : (((-169036416) | (((/* implicit */int) arr_15 [i_4]))))))) ? (((/* implicit */int) (signed char)-124)) : (max(((~(((/* implicit */int) arr_16 [i_4])))), (((/* implicit */int) arr_16 [i_4 - 1]))))));
        var_23 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) | (max((222450927861030454LL), (((/* implicit */long long int) arr_16 [i_4]))))))));
    }
}
