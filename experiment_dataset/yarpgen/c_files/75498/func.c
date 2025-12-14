/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75498
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
    var_13 = ((/* implicit */unsigned char) var_7);
    var_14 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)31))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 1720760341)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((short) 1720760316))))) + (2147483647))) >> (((/* implicit */int) arr_4 [i_0] [i_1]))));
                var_16 = arr_4 [i_0] [i_0];
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) var_5);
                    var_17 = ((/* implicit */short) (-((-(max((1720760340), (((/* implicit */int) var_7))))))));
                    var_18 = ((/* implicit */signed char) var_1);
                }
                for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    var_19 = ((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */long long int) (signed char)70))))) ? (((long long int) arr_1 [i_0])) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) + (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                    arr_12 [5LL] [i_3] &= ((/* implicit */signed char) (unsigned char)64);
                    var_20 += ((/* implicit */_Bool) min((((unsigned short) min((((/* implicit */long long int) (unsigned char)87)), (var_3)))), (((/* implicit */unsigned short) ((short) min((1720760351), (((/* implicit */int) var_12))))))));
                    arr_13 [i_1] [i_1] [4LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (signed char)70)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_3]))) : (((((/* implicit */_Bool) arr_3 [i_3] [i_1] [i_3])) ? (arr_3 [i_0] [i_3] [i_3]) : (arr_3 [i_0] [i_0] [i_0])))));
                    var_21 = ((/* implicit */short) ((long long int) ((1720760341) >> (((/* implicit */int) (_Bool)1)))));
                }
                var_22 &= ((/* implicit */_Bool) 9223372036854775805LL);
            }
        } 
    } 
}
