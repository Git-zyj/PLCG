/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85715
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_19 |= ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147)))))) > (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))), (max((arr_0 [i_0 - 1] [i_0 + 2]), (arr_0 [i_0 - 1] [i_0 + 1])))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_16))) ? (max((((((/* implicit */int) (unsigned short)33891)) >> (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]))) >> ((((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 1] [i_3])))) + (8)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_12 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((((((/* implicit */_Bool) -8062744521776957887LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_2 [i_0] [i_0]))) + (((/* implicit */long long int) min((var_15), (((/* implicit */int) var_10))))))));
                            arr_13 [i_0 + 2] [4] [i_2 - 1] [i_0] [i_0 + 2] [i_2] [(signed char)1] = ((long long int) max((arr_0 [i_3 + 3] [i_3 + 1]), (arr_0 [i_3 + 2] [i_3 - 1])));
                        }
                    }
                } 
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 += ((/* implicit */short) min((((/* implicit */long long int) var_18)), (((((/* implicit */long long int) ((/* implicit */int) min(((short)6032), ((short)-1))))) ^ (var_5)))));
        var_22 = ((int) (+(2147483647)));
        arr_16 [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (max((((/* implicit */unsigned long long int) arr_4 [(unsigned short)8])), (max((4503599627370495ULL), (((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_5]))))))));
        arr_17 [i_5] [i_5] = ((/* implicit */long long int) max((((arr_5 [i_5] [i_5] [i_5]) / (arr_5 [i_5] [i_5] [i_5]))), (max((arr_5 [i_5] [i_5] [(short)9]), (((/* implicit */unsigned long long int) 1551066415))))));
    }
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))) : (min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_3)) : (var_13)))))))))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1))));
}
