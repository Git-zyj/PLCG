/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85955
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
    var_11 = ((long long int) min(((unsigned char)1), (((/* implicit */unsigned char) var_9))));
    var_12 = ((/* implicit */unsigned char) var_9);
    var_13 += ((/* implicit */unsigned long long int) -9011850707730299984LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                var_14 ^= ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), (arr_14 [i_0] [i_1])))));
                                var_15 = ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                            for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                            {
                                arr_19 [(unsigned short)21] [i_0] [(unsigned short)21] [(unsigned short)21] [i_0] = ((/* implicit */unsigned short) (signed char)-75);
                                var_16 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (signed char)-94)))) / (((/* implicit */int) var_1)))))));
                                arr_20 [i_0] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) (unsigned short)35257)), (arr_10 [i_0] [i_0] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)30278)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-61)), ((unsigned char)116)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)60)) < (((/* implicit */int) (unsigned short)8968))))))))));
                            }
                            arr_21 [i_0] = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)157)), ((unsigned short)8968)))), (min((5572064456870397588ULL), (((/* implicit */unsigned long long int) -7668230123996993674LL)))))));
                            arr_22 [i_0] [i_3] [(unsigned char)16] [(signed char)20] [(unsigned char)16] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((unsigned long long int) (signed char)-48));
            }
        } 
    } 
}
