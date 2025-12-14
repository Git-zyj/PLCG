/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92809
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_7))))));
                            var_19 = ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_0]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                            {
                                arr_15 [i_0] = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */unsigned int) 1641628212)) | (var_1)))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_2)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_14 [i_1 - 1] [i_1 + 1] [(short)14] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_14 [(_Bool)1] [(signed char)17] [(signed char)23] [(_Bool)1] [i_5 + 1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)65524)))))))));
                            }
                            arr_16 [i_0] [i_0] [i_0] [i_0] [(signed char)4] = ((/* implicit */long long int) var_5);
                            var_21 = ((/* implicit */unsigned int) (unsigned char)0);
                            /* LoopSeq 3 */
                            for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                            {
                                arr_19 [i_0 + 2] [(unsigned char)7] [i_0] [i_5] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_6)))))))));
                                arr_20 [i_0] [16] [16] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */long long int) (signed char)4);
                            }
                            for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                            {
                                arr_25 [i_0] [15U] [i_4 - 1] [i_0] = (unsigned short)33977;
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_8 [i_4 - 1] [i_0] [i_5 + 1]), ((+(((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) (-(5574666220165385799ULL)))) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_5] [i_1] [i_1 - 1] [i_1 + 1] [i_0])) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (signed char)-78))))))) : (((int) (+(((/* implicit */int) arr_12 [i_0] [i_0 + 3] [i_0] [i_0])))))));
                                arr_26 [i_0] [i_1 + 1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) (+(-1037555774)))))))));
                                arr_27 [(short)5] [i_0] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_24 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])) >= (((/* implicit */int) (signed char)-90))))));
                            }
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                arr_31 [i_0] = ((/* implicit */int) max((max((((/* implicit */long long int) ((var_13) + (((/* implicit */int) var_4))))), (((long long int) arr_5 [i_0] [i_0] [i_5])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_9)))))));
                                var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (unsigned char)91)))));
                                arr_32 [i_0] [15] [i_0] [i_5 + 1] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */_Bool) var_1)) ? (1810634785U) : (((/* implicit */unsigned int) arr_30 [i_0] [i_0] [(signed char)19] [i_0] [i_0])))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_9])) : (((/* implicit */int) (signed char)90))))))));
                            }
                        }
                    } 
                } 
                var_24 -= ((/* implicit */long long int) var_6);
                arr_33 [(signed char)16] [(signed char)16] &= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-7030)) + (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) != (var_3)))) != (((/* implicit */int) (!((_Bool)1))))))), ((-(((/* implicit */int) (signed char)-61))))));
}
