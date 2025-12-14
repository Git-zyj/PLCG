/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55020
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (unsigned short)61261))));
                            arr_10 [i_0] [i_0] [i_0] [i_2 - 1] [i_2] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_8 [(short)6] [i_0] [i_2 - 1] [i_3])) : (((((/* implicit */_Bool) var_11)) ? (11361894365008638407ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned short) ((var_14) ? (max((arr_8 [i_0] [i_6] [i_4] [i_6 + 3]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (unsigned short)61253)) : (((/* implicit */int) (unsigned char)135))))))) : (((/* implicit */long long int) (-(((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                                var_19 &= ((/* implicit */short) (~((~(((/* implicit */int) arr_16 [i_6] [i_6 - 1] [i_6] [(unsigned short)8] [i_4] [i_1]))))));
                                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)4287))));
                                var_21 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) arr_16 [i_0] [i_6 - 2] [i_0] [i_5] [i_6] [(_Bool)1])), (((((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_0] [i_6])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) max((max(((unsigned short)61253), (arr_6 [i_0]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))))))))));
                            }
                        } 
                    } 
                } 
                var_22 ^= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_0 [(short)10])) ? (((/* implicit */int) var_2)) : (-1758113108))) < ((-(((/* implicit */int) arr_11 [(_Bool)1] [i_1] [i_1] [i_0])))))) ? ((-(((/* implicit */int) arr_2 [10ULL] [10ULL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])))))));
                arr_17 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) arr_3 [i_1])))) == ((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))) ^ (((((unsigned int) arr_0 [i_0])) & (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_23 += ((/* implicit */long long int) var_8);
    var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)135))));
    var_25 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
}
