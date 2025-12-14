/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65724
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
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */int) var_10);
                    arr_10 [(unsigned char)15] [6ULL] [i_2 - 2] [i_2] = ((/* implicit */int) arr_4 [11] [(signed char)4]);
                    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1048576)) ? (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) max((-26167638), (((/* implicit */int) var_7)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2104928556613406276ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0]))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (16341815517096145311ULL)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16341815517096145352ULL)) ? (((((/* implicit */_Bool) ((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((/* implicit */long long int) ((((((arr_5 [(short)13]) + (2147483647))) << (((16341815517096145347ULL) - (16341815517096145347ULL))))) + ((~(arr_13 [i_0 - 1]))))))));
                        var_16 = ((/* implicit */short) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_3 + 1])) || (((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13245)) ? (((long long int) max((((/* implicit */unsigned long long int) 4135503863952028186LL)), (arr_11 [i_0] [i_1] [i_2] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161)))));
                    }
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) max((((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) var_9)))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-130))))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_20 = ((/* implicit */long long int) (!(((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    var_21 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((4135503863952028177LL) % (((/* implicit */long long int) var_10)))), (max((65535LL), (((/* implicit */long long int) var_3))))))), (((((((/* implicit */_Bool) (signed char)47)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) | (((/* implicit */unsigned long long int) ((long long int) (short)23533)))))));
}
