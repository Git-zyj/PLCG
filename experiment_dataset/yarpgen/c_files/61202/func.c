/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61202
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
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min(((signed char)-96), ((signed char)-55))))))) : (((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))));
        var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 3])) <= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 3])))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) 2520694610U);
                    var_17 = ((/* implicit */unsigned int) ((arr_8 [i_0] [i_2]) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))) <= (1774272708U))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) (-((~(arr_14 [i_3])))));
        var_18 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_3]))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_4]))));
        arr_20 [i_4] = (((((~(((/* implicit */int) arr_18 [13LL])))) + (2147483647))) << (((2047U) - (2047U))));
        var_19 = ((/* implicit */int) arr_18 [i_4]);
    }
    for (int i_5 = 2; i_5 < 9; i_5 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((min((arr_16 [i_5 - 2]), (arr_16 [i_5 + 2]))), (((/* implicit */signed char) ((var_5) >= (8388608U))))));
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-81))) ^ (((-1LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 985956829U)) ? ((~(1774272706U))) : (((((/* implicit */_Bool) var_9)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))))))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (unsigned int i_7 = 3; i_7 < 11; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1886820860U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (var_1)))) ? ((-(2047U))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_25 [i_5] [i_6] [i_6])), (var_14)))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (-(((((((arr_13 [i_9]) % (((/* implicit */long long int) 1774272686U)))) + (9223372036854775807LL))) >> (((((var_12) % (((/* implicit */unsigned int) var_6)))) - (1121729195U)))))));
                                arr_33 [7] [i_6] [i_6] [i_6] [1] = ((((((/* implicit */long long int) min((498156455U), (((/* implicit */unsigned int) arr_25 [i_5] [10] [i_5]))))) & (((((/* implicit */_Bool) 2520694597U)) ? (((/* implicit */long long int) 3U)) : (arr_5 [(signed char)8] [i_6]))))) % (min((min((arr_6 [i_5] [i_5]), (((/* implicit */long long int) arr_1 [(unsigned short)2])))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [(signed char)10])) >= (((/* implicit */int) arr_29 [1] [i_6] [i_8] [1]))))))));
                                var_24 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)27526)), (((((/* implicit */_Bool) arr_17 [i_5 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [(signed char)10])) ? (arr_14 [i_5]) : (-1)))) : (var_1)))));
                                var_25 = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) 8405066339927642725LL);
                }
            } 
        } 
    }
}
