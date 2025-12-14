/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72649
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((short) var_9)))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_0 + 1] [i_0 - 2])) ? (arr_2 [i_1 + 3] [i_0 + 2] [i_0 - 1]) : (arr_2 [i_1 + 1] [i_0 + 2] [i_0 - 2])));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (short)-31414)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) (short)-31422))))))));
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)1920))))) ? ((+(((/* implicit */int) arr_7 [i_0] [i_0])))) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2]))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_2 [i_0 + 2] [i_1 + 3] [i_0 + 2]) & (arr_2 [i_0 + 2] [i_1 + 2] [i_1 + 2])));
                    var_21 *= ((/* implicit */short) 12122666451672094384ULL);
                }
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_4) * (((unsigned long long int) arr_20 [i_0] [i_0 + 2]))));
                                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) (short)-15924)) != (((/* implicit */int) (short)15923))))) << (((((unsigned long long int) var_9)) - (92ULL))))) >> ((((-(((/* implicit */int) (short)-15934)))) - (15906)))));
                                var_23 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 1]))));
                                var_24 = ((/* implicit */short) (-(max((arr_1 [i_0]), (min((((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_7)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_1 + 3])) : (((/* implicit */int) arr_27 [i_0 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_0 - 1]))))) ? (((((/* implicit */_Bool) (short)15360)) ? (((/* implicit */int) arr_27 [i_0 + 1] [i_1 + 3] [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_1 - 2])) : (((/* implicit */int) (short)15923)))) : (((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 1])))))));
                }
                for (short i_9 = 2; i_9 < 20; i_9 += 3) 
                {
                    arr_32 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((6324077622037457231ULL) & (((unsigned long long int) (short)15934))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-2)) + (2147483647))) >> (((((/* implicit */int) (short)15360)) - (15343)))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-873)))) : (((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)22723)))))))))));
                    var_26 = ((/* implicit */short) min((((((/* implicit */_Bool) 1416710553326655257ULL)) ? (((/* implicit */int) (short)19222)) : (((((/* implicit */int) (short)-1)) * (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))), (((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))));
                }
                var_27 = ((/* implicit */unsigned char) var_15);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_13)) - (222)))))))))) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_13))))) ? (((((/* implicit */_Bool) (short)-15934)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 72299431715319690ULL)) ? (((/* implicit */int) (short)-15910)) : (((/* implicit */int) var_16)))))))));
    var_29 = ((/* implicit */unsigned long long int) var_16);
}
