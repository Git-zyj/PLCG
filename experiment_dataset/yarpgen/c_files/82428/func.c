/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82428
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)31543)) ? (arr_4 [i_0 - 3] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))))) < (max((arr_4 [i_0 - 3] [i_1 + 3]), (((/* implicit */long long int) var_6))))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (max((arr_3 [5]), (((/* implicit */unsigned int) -21823252)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)199)) & (((/* implicit */int) arr_2 [i_0 - 1] [i_1]))))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_14 *= (unsigned char)216;
                            var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> ((((+(118386338U))) - (118386331U)))));
                            arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) 4176580957U)) & (12160969563784563325ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_12)))))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)0))))), (arr_0 [i_2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_16 |= ((/* implicit */long long int) (-(((/* implicit */int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
                            var_17 = ((/* implicit */unsigned char) arr_16 [i_5] [i_1] [i_0 - 3]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) && (((/* implicit */_Bool) var_0)))))) >= (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_3 [i_0 + 1])))));
                                arr_24 [i_0] [i_0] [i_6] [i_7] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (unsigned char)247)))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_17 [i_0] [i_1 + 2]), (arr_17 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))) : (var_0)))) ? (7818566993451364397ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                                arr_25 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)29)) * (((/* implicit */int) arr_23 [i_1 + 1] [i_7 - 1]))))) ? (((((arr_0 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) arr_14 [i_0] [i_1 + 3] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2047LL)) ? (6285774509924988290ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20)))))) ? (((/* implicit */int) min(((unsigned short)65532), ((unsigned short)61196)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_9])) || (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)22)), (-1431635297))))))))))));
        var_21 = ((/* implicit */signed char) (!(((arr_27 [i_9]) < (((/* implicit */long long int) ((-697245028) & (1431635297))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_6);
    var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) max((((signed char) (unsigned short)25288)), (((/* implicit */signed char) ((((/* implicit */int) var_2)) <= (-1431635297))))))), (((unsigned short) var_2))));
}
