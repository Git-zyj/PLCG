/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68155
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_0 [i_0]))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-39)))))));
                                var_14 ^= ((/* implicit */unsigned int) min((485045511), ((~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)147))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) var_0);
                    arr_13 [i_0] [8ULL] &= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) ((var_9) <= (((/* implicit */long long int) arr_11 [(short)8] [6U] [i_1] [18] [(short)8]))))) | (min((arr_8 [(signed char)22]), (arr_11 [i_0] [i_0] [16] [i_1] [18U]))))));
                }
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((var_0), (((/* implicit */int) max((((_Bool) -3880434124208802588LL)), ((!(((/* implicit */_Bool) var_8)))))))));
                                var_17 += ((/* implicit */signed char) ((((((/* implicit */long long int) max((arr_20 [4ULL] [i_5] [i_5] [i_5] [i_0]), (((/* implicit */int) (unsigned char)230))))) + (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) : (-3880434124208802585LL))))) ^ (((/* implicit */long long int) ((arr_20 [i_7 + 2] [i_5] [i_5] [i_5] [i_0]) ^ ((+(((/* implicit */int) arr_7 [i_1] [i_5] [i_6])))))))));
                                arr_22 [2U] [i_1] [i_5] [i_1] [i_7] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_5])) ^ (((/* implicit */int) arr_6 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 + 2]))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_5]))))), (287104476244869120ULL)))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) ((unsigned int) max((((((/* implicit */_Bool) -995801845033875285LL)) ? (((/* implicit */unsigned long long int) var_1)) : (var_2))), (((/* implicit */unsigned long long int) ((long long int) 3880434124208802588LL))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)33)) * (((/* implicit */int) var_6))))) : (var_9))))))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((10459313567345340763ULL), (((/* implicit */unsigned long long int) (short)-32))))) ? (max((((/* implicit */long long int) var_4)), (-1LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)109))))))))));
}
