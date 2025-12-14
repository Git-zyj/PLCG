/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6238
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
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12)))) ^ (var_1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (((((/* implicit */unsigned long long int) 5U)) ^ (17847159382758831351ULL))))) : (var_2));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1 + 1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1]))) + (17847159382758831352ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1]))) == (599584690950720263ULL)))))));
                arr_7 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((long long int) ((17847159382758831348ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((long long int) ((var_11) - (var_11))));
                    arr_18 [i_3] [i_2] [i_2] [i_2 - 3] = ((/* implicit */unsigned long long int) (!(((arr_16 [i_2] [i_3] [i_4]) == (((/* implicit */int) (unsigned short)42960))))));
                    var_15 = ((/* implicit */short) -3414820941296294780LL);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                arr_24 [i_2] [i_2] = ((((unsigned int) var_9)) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))));
                arr_25 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9644))) % (var_1)));
                var_16 = ((/* implicit */long long int) ((short) ((10ULL) == (arr_14 [i_2] [i_2] [i_2] [i_2]))));
            }
            for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                arr_28 [i_2] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                arr_29 [i_2] = ((/* implicit */unsigned long long int) (short)-29130);
            }
            var_17 = ((/* implicit */unsigned short) (+(arr_8 [i_2 - 1] [i_5])));
            arr_30 [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) arr_16 [i_2] [i_2] [i_2 - 3])) == (arr_23 [i_2 + 1] [i_2 - 3] [i_2 + 1] [13ULL])));
        }
        for (unsigned long long int i_8 = 4; i_8 < 15; i_8 += 4) 
        {
            var_18 = ((/* implicit */long long int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 599584690950720263ULL))))))));
            arr_33 [i_8] [i_8] [i_8] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_8] [i_2] [i_8 - 2] [i_2])) ? (arr_17 [i_2] [i_8 - 2] [i_2 + 1]) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)))));
            arr_34 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((int) arr_27 [i_2] [i_2 - 3] [i_2]));
            arr_35 [i_2] [i_2] = ((/* implicit */int) arr_17 [i_2 - 3] [i_8] [i_8 - 1]);
        }
    }
    var_19 = ((/* implicit */short) max((-3414820941296294780LL), (((/* implicit */long long int) ((unsigned short) var_5)))));
}
