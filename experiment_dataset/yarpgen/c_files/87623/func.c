/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87623
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
    var_20 |= ((/* implicit */signed char) var_13);
    var_21 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) var_14)), (245760U))))), (6767558431173306659ULL)));
    var_22 = ((/* implicit */unsigned long long int) (((((-(var_0))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -747573276)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2047))) : (9030897899397252444LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-1)) : (var_1)))) ? (((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */int) (signed char)118))))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5111))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 487821627)) && (((/* implicit */_Bool) var_4))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */signed char) ((var_8) << (((((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) var_16))))) ? ((+(561672715U))) : (((/* implicit */unsigned int) var_13)))) - (561672695U)))));
                var_24 = ((/* implicit */unsigned long long int) var_19);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_18 [i_5] = ((/* implicit */short) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 747573279)) ? (arr_12 [i_6] [i_3] [i_3]) : (802128060U)))))))));
                                var_25 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned long long int) -747573269))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) ^ (var_15))) % (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) arr_8 [i_5] [i_4] [i_3])))))));
                                var_26 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (min((var_9), (((/* implicit */int) var_18))))));
                                var_27 -= ((/* implicit */unsigned int) min(((signed char)-118), (((/* implicit */signed char) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) var_17);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_28 = ((((/* implicit */unsigned int) ((((var_9) & (((/* implicit */int) (short)-25795)))) ^ (((((/* implicit */_Bool) arr_20 [i_8] [19U] [i_3] [(_Bool)1])) ? (-400389675) : (((/* implicit */int) var_14))))))) & ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_3] [i_4] [i_7] [i_8]))) | (var_8))))));
                                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 302162988U)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1263))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((var_8) >> (((/* implicit */int) (_Bool)1))))))))));
                                arr_24 [(signed char)7] [i_3] [i_7] [i_2] [9ULL] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-5111)))), (-747573269)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
