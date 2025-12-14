/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59615
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
    var_16 = (~(((/* implicit */int) var_3)));
    var_17 &= ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */int) var_2)), ((~(-1246058069))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((unsigned long long int) ((1046821607U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))))))));
        arr_3 [i_0 + 3] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 3]))))), (min((var_0), (((/* implicit */long long int) arr_0 [i_0 + 2]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_11 [i_2] [i_3] [(signed char)2] = ((/* implicit */unsigned int) 17145195294562856285ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((max((max((var_12), (((/* implicit */unsigned long long int) arr_8 [i_5])))), (((/* implicit */unsigned long long int) 3949740014U)))), (((/* implicit */unsigned long long int) var_9))));
                                var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19144)) ? (arr_16 [i_3] [i_4] [i_1] [i_2] [i_3]) : (var_9)))) ? (((/* implicit */unsigned long long int) ((arr_14 [i_3] [i_2] [i_3] [i_4] [i_3] [i_2]) & (((/* implicit */int) arr_1 [i_1]))))) : (((unsigned long long int) 2898295281361844494ULL))))));
                                var_20 *= ((/* implicit */short) arr_1 [i_3]);
                                var_21 += max((min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (18446744073709551615ULL) : (17145195294562856285ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_2)) - (200)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) (unsigned char)193))))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */int) (unsigned char)65)) >> (((var_9) - (3630879564U)))))))));
                                arr_18 [i_3] [0U] [i_3] [i_4] [i_5] = var_2;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                arr_24 [i_2] [i_2] [i_3] [i_6] [i_7] &= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)123)) + ((+((~(var_11)))))));
                                arr_25 [(unsigned char)0] [(unsigned char)0] [i_3] [i_3] [(unsigned char)0] [(unsigned char)3] [(unsigned char)0] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [i_1] = ((/* implicit */unsigned char) ((var_0) | (max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))), (min((-7890617446689096304LL), (((/* implicit */long long int) (short)-3243))))))));
        arr_27 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 2030699506770089753LL)), (16300371917790546289ULL)));
    }
}
