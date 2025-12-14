/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5840
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned char) (_Bool)1);
                var_17 ^= ((/* implicit */long long int) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                arr_9 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-19934)) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-19905)) > (((/* implicit */int) (_Bool)1)))))))) << (((((unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_2) : (((/* implicit */int) (_Bool)1))))) - (1219251265U)))));
                var_18 = (-(((((((/* implicit */_Bool) arr_6 [i_3])) ? (2064384U) : (((/* implicit */unsigned int) (-2147483647 - 1))))) / (((/* implicit */unsigned int) var_6)))));
                arr_10 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)19939))))), (min((((/* implicit */unsigned int) arr_3 [i_2] [i_3] [i_2])), (arr_0 [i_3])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    var_19 = ((((((/* implicit */int) arr_4 [i_3])) + (2147483647))) >> (((/* implicit */int) (_Bool)1)));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)17477)) / (((/* implicit */int) arr_8 [i_4 - 2] [(unsigned short)2] [i_4 - 2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), ((+(((/* implicit */int) arr_2 [i_2] [i_5] [i_4]))))));
                                arr_17 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (short)-17462))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) arr_2 [i_4 - 2] [i_4 - 2] [i_4]);
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-19925))) >= (arr_11 [i_2] [i_3] [i_4]))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (9114982934259985698LL) : (6430273936138088463LL)));
}
