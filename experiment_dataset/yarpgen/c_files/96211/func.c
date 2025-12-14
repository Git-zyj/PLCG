/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96211
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0 - 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_3))))), (max((arr_5 [i_0] [i_0 - 2] [i_0 - 3]), (((/* implicit */unsigned long long int) var_0))))))) ? (((3405411633058122149ULL) * (((/* implicit */unsigned long long int) (-(-2115457053)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4294967295U))))));
                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned char) var_8)))))) ^ (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0]))))));
                arr_7 [i_0 - 1] [i_0] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_0)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (4294967280U)))) : (var_7)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 7; i_2 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_4), (var_1)));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_16 [0LL] [i_2] = ((/* implicit */unsigned long long int) ((long long int) min((var_7), (((/* implicit */unsigned long long int) ((unsigned short) var_4))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_19 [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */_Bool) ((signed char) min((var_9), (((/* implicit */long long int) var_0)))));
                        var_12 -= ((long long int) var_8);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        arr_22 [i_2] [i_3] [i_3 - 2] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_3 - 2]))) : (var_5)))) ? (min((((/* implicit */unsigned long long int) 16U)), (arr_5 [i_2] [8] [(signed char)8]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7)))))) ? (((unsigned long long int) ((long long int) 0U))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 4294967284U)) ? (arr_12 [i_2] [(signed char)3] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                        var_13 = ((/* implicit */_Bool) (-(((var_8) ? (((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 4294967288U))))))));
                    }
                    arr_23 [(unsigned short)4] [(signed char)3] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-31855)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_2 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_2] [i_2])) || (((/* implicit */_Bool) ((long long int) arr_1 [i_4]))))))));
                }
            } 
        } 
        arr_24 [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [i_2] [i_2 + 3] [i_2])) ? (((((/* implicit */_Bool) 1984)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2]))) : (arr_18 [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_3 [i_2] [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13U)) ? ((-(var_6))) : (arr_11 [i_2 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_25 [6U]))));
            arr_28 [i_2] = ((unsigned long long int) (+(((/* implicit */int) max((((/* implicit */signed char) arr_14 [i_2] [i_2] [i_2] [i_2])), (var_4))))));
        }
    }
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)30660)) << (((var_7) - (731308231677212896ULL)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_8) || (((/* implicit */_Bool) var_2)))))))) ? (max((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) var_2)))))));
}
