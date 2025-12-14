/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81283
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) arr_2 [(short)21]);
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((unsigned int) (!((_Bool)1)))) | (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_0 [i_0]))))))))))));
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
                }
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) arr_13 [i_5] [i_4] [i_0] [i_1] [i_0])) <= ((~(((/* implicit */int) (_Bool)1))))))))))));
                                var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                                arr_16 [i_5] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_11) ^ (arr_2 [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (arr_2 [i_0])))));
                                arr_17 [i_0] [i_0] [i_1] [i_3] [i_4] [i_0] [i_5] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_4])) <= (((/* implicit */int) ((arr_4 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))))))) ? (((/* implicit */unsigned long long int) (((~(3549180996542439285LL))) ^ (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)153)) % (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_0])) ? (var_0) : (arr_4 [i_5])))) : (var_11)))));
                            }
                        } 
                    } 
                    arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_18)))) ? (var_10) : (((/* implicit */int) (_Bool)1))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 21; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_1] [i_3] [i_6] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_7]))))) + (((/* implicit */long long int) ((/* implicit */int) (short)28324)))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1))));
                                var_22 = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0]))))), (((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                                arr_26 [i_3] |= ((/* implicit */_Bool) max((((/* implicit */int) ((((int) 249672860U)) <= (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))), (((((/* implicit */int) arr_19 [i_6 + 1] [i_7] [i_7] [i_7] [i_7 - 1])) << (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) min((3549180996542439285LL), (((/* implicit */long long int) 4045294436U))));
                }
                arr_27 [i_0] [i_1] = ((/* implicit */_Bool) 6048692835649342076ULL);
            }
        } 
    } 
    var_24 ^= ((/* implicit */unsigned char) var_1);
    var_25 |= ((/* implicit */unsigned int) 9246139372443293756ULL);
}
