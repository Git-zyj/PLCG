/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55901
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [(unsigned short)16] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)61470)) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) >> (((-358178840837194179LL) + (358178840837194186LL)))))) : (((((/* implicit */_Bool) (unsigned short)63139)) ? (549350919814415779ULL) : (17592271630918970867ULL)))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2])) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) > (var_6))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned char)250)))));
                    arr_7 [(unsigned char)15] [12U] [12U] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1228086470)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)22643))));
                                var_11 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_3])) | (((/* implicit */int) (signed char)-54))));
                                arr_15 [i_0] [i_1] [i_2] [(unsigned char)16] [i_4] [i_3] = ((/* implicit */short) ((0ULL) < (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)15)), ((-(((/* implicit */int) var_9)))))))));
                                arr_16 [i_4 + 2] [i_3 + 1] [i_3] [13U] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-21041)))) ? (((((/* implicit */_Bool) (unsigned char)84)) ? (1125899906842623ULL) : (arr_3 [i_0] [(unsigned short)19]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)6), (((/* implicit */unsigned short) arr_4 [i_0] [(short)18] [(short)18] [i_4 + 2])))))))) <= (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_1);
}
