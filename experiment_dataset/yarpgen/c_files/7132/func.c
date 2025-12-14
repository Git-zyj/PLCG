/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7132
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46482)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (9581440607606459407ULL)))) ? ((~(((/* implicit */int) (unsigned char)205)))) : (((/* implicit */int) var_8))))) ? (((10562535571690039218ULL) + (((unsigned long long int) var_11)))) : (((((/* implicit */_Bool) 0ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    var_17 *= ((/* implicit */unsigned long long int) ((long long int) (-2147483647 - 1)));
                    var_18 &= ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_8 [i_1] [i_2 + 1] [i_1]), (var_7)))), (((((/* implicit */_Bool) arr_8 [i_1] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_8 [i_2] [i_2 - 2] [i_2])) : (((/* implicit */int) arr_8 [i_1] [i_2 - 2] [i_1]))))));
                }
                for (int i_3 = 4; i_3 < 10; i_3 += 3) 
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]);
                    var_20 = ((/* implicit */unsigned short) var_3);
                }
                var_21 = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1]);
                var_22 = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (var_5)))) : (var_4))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-78))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_1);
}
