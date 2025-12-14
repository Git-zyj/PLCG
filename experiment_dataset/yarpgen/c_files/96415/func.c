/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96415
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
    var_14 = ((/* implicit */signed char) 495842313);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)48443))))), (((arr_3 [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25294)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (signed char)-47))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_17 = (+(((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) (signed char)-94))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))) : (((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_10 [i_4] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))))));
                                var_18 = ((/* implicit */signed char) min(((~(((arr_5 [i_0] [i_1]) >> (((((/* implicit */int) (unsigned char)204)) - (183))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_1])), (0LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1881509569U)) ? (((13ULL) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (arr_24 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_3] [i_1] [i_7])) <= (arr_25 [i_7] [i_6] [i_1] [i_0])))))));
                                var_20 = ((/* implicit */unsigned char) arr_27 [i_0] [(unsigned char)6] [i_6] [(unsigned char)6] [i_7] [i_7]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_3])), (arr_29 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0])))))));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    var_22 = ((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (arr_17 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_1] [i_8])));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 6537982744336070220LL)) ? (((((/* implicit */long long int) -495842314)) / (var_13))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_8])) ? (var_7) : (((/* implicit */int) var_0)))))));
                    var_24 = var_2;
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 2; i_10 < 8; i_10 += 2) 
        {
            {
                var_25 = ((/* implicit */short) -495842299);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    var_26 = ((/* implicit */signed char) arr_8 [i_9] [i_9] [i_10] [i_9]);
                    var_27 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)24433))));
                }
                var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((arr_19 [17U] [i_9] [i_9] [(signed char)17] [17U] [(signed char)17] [i_10]) < (arr_16 [i_9] [i_9])))), (min((arr_8 [i_9] [i_10] [i_10] [i_10]), (((/* implicit */int) min((var_6), ((signed char)83))))))));
            }
        } 
    } 
}
