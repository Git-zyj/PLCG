/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73126
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
    var_16 = ((/* implicit */unsigned int) var_15);
    var_17 = ((/* implicit */signed char) ((unsigned long long int) 15ULL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) min(((~(max((((/* implicit */unsigned long long int) 1210609966)), (var_10))))), (((/* implicit */unsigned long long int) max((max((8826243109252273099LL), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)9))))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_19 ^= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) max(((signed char)9), (var_14)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_2])), (arr_4 [i_2] [i_1])))) : (((/* implicit */int) arr_3 [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) arr_8 [i_0] [i_3] [i_1] [i_0]);
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-10)) && (((/* implicit */_Bool) (short)-15690))))), (((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))))));
                                var_21 = (-(((/* implicit */int) var_12)));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0]);
                }
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_6)) : (18446744073709551615ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_5)))))) : (max((var_0), (arr_8 [i_1] [i_1] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3797052003U)))) >= (((unsigned long long int) 0U)))))) : (arr_0 [i_5])));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1411896769)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)-15))))) && ((!(((/* implicit */_Bool) 1062385986U))))));
                }
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)6189)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_6]))))), (arr_11 [i_6] [i_1] [i_1] [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) min((1358641027U), (((/* implicit */unsigned int) (_Bool)1)))))));
                    var_25 ^= ((((((arr_5 [i_6] [i_0]) << (((arr_17 [i_0] [i_1] [i_6]) - (13188921710735686922ULL))))) > (((arr_14 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0]))) : (1715349150U))))) ? (max((var_10), (((/* implicit */unsigned long long int) (signed char)-60)))) : (((((/* implicit */_Bool) -951721870916424524LL)) ? (arr_17 [i_0] [i_1] [i_6]) : (((/* implicit */unsigned long long int) var_2)))));
                    var_26 -= ((/* implicit */unsigned int) min((18446744073709551615ULL), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) -1LL)) : (6608055740283444239ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -951721870916424524LL))))))));
                }
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((signed char) var_8))), (((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) 2936326269U)) : (var_8)))))))));
            }
        } 
    } 
}
