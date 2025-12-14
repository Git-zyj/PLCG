/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95725
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
    var_17 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) min(((short)-25031), (((/* implicit */short) ((var_6) < (var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_18 = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) (short)-25031)) ? (var_9) : (var_9))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)58893)))));
            var_19 += ((/* implicit */short) arr_3 [i_0]);
            var_20 = ((/* implicit */unsigned short) (!((_Bool)1)));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) < (var_15)));
        }
        var_21 = ((/* implicit */signed char) ((unsigned int) (+(((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58893))) : (18446744073709551615ULL))))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */_Bool) ((unsigned int) ((16404908592847208493ULL) < (arr_9 [i_3 + 1] [i_3 + 1]))));
                arr_12 [(signed char)16] [(signed char)16] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_14) : (arr_7 [i_3 - 1])))) && ((((_Bool)1) || (((/* implicit */_Bool) min((arr_9 [i_3] [19U]), (((/* implicit */unsigned long long int) arr_7 [9LL])))))))));
                var_23 = (((~(min((((/* implicit */unsigned int) arr_8 [18ULL])), (var_0))))) < (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))));
                var_24 -= ((/* implicit */unsigned char) var_8);
                var_25 = ((/* implicit */_Bool) ((int) ((unsigned int) (_Bool)1)));
            }
        } 
    } 
}
