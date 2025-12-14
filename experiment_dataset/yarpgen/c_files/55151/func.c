/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55151
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) (signed char)-78);
        arr_3 [i_0] = ((/* implicit */short) (-((~(1391146485U)))));
        var_12 += ((/* implicit */unsigned int) var_9);
    }
    for (long long int i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)-78)))), (((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_1 + 1])), ((signed char)-78))))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)77), (((/* implicit */signed char) arr_4 [i_1]))))) ? (((((/* implicit */int) var_7)) ^ (((arr_4 [i_1]) ? (((/* implicit */int) arr_4 [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 3])))))) : ((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1]))))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_10 [(short)6] [(short)6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1391146485U)) ? (((((/* implicit */_Bool) min((arr_9 [i_2] [i_1]), (((/* implicit */int) (unsigned char)127))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) 3203652794U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) -5423375799346523918LL))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) : (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2])) ? (2903820804U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77)))))))))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_20 [i_1 + 1] [i_1 + 1] [i_1] [(unsigned char)0] = ((/* implicit */unsigned int) var_1);
                            var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-52)) ? (1391146477U) : (1091314501U))), ((-(arr_0 [i_5 + 1])))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            var_14 = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (signed char)-78)))));
            var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6 - 2] [i_6 - 2] [i_6 + 1])) ? (((((/* implicit */_Bool) (signed char)-52)) ? (3203652794U) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) > (max((((/* implicit */unsigned long long int) 2903820801U)), (13130975251972417536ULL)))));
        }
        for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            arr_27 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(arr_9 [i_1] [i_7])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2903820810U)) ? (1091314499U) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))) * (arr_22 [i_1] [i_7])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1])) ? (var_6) : (((/* implicit */int) (unsigned short)65417))))) ? (5315768821737134080ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_8)) * ((-(5315768821737134072ULL))))) <= (((/* implicit */unsigned long long int) ((((arr_21 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? ((-(2903820810U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))))))));
        }
    }
    for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        var_17 = ((/* implicit */signed char) 3461949402U);
        arr_31 [i_8] [13U] = arr_29 [i_8];
        var_18 = ((/* implicit */signed char) 5315768821737134079ULL);
    }
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned char i_10 = 3; i_10 < 22; i_10 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_9] [(signed char)9] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_10] [i_10 + 1])) || (((/* implicit */_Bool) arr_38 [i_10] [i_10])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10] [i_10 - 2]))) & (2903820810U)))));
                var_20 *= ((/* implicit */unsigned int) (signed char)52);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_2))))))));
}
