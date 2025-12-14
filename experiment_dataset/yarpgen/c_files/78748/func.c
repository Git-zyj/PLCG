/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78748
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (arr_5 [i_0] [i_0] [i_2]))))))) <= (arr_5 [i_0] [i_0] [i_0])));
                    var_13 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        var_14 ^= ((/* implicit */signed char) arr_1 [i_3]);
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [(unsigned char)7])) : (((/* implicit */int) var_1))))) ? (arr_13 [i_4 - 1] [11] [i_3] [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [(signed char)7] [i_3] [i_4 - 2] [i_5])))));
                            arr_18 [i_0] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0] [i_1]));
                            var_15 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 3823614473U)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (_Bool)1))))));
                            var_16 -= ((/* implicit */signed char) arr_3 [i_5] [i_1 + 1]);
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned short)65535))));
                        var_18 = ((/* implicit */short) (((~(12548910037851320229ULL))) / (((/* implicit */unsigned long long int) arr_4 [i_6]))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 16; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) arr_9 [i_0] [(_Bool)1])))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [(signed char)0] [i_1] [i_3] [i_7])) && (((/* implicit */_Bool) arr_0 [i_1] [(unsigned short)3])))))));
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (15939624449522980293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) 3274306508U)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1 - 2] [i_1])))))));
                    arr_26 [i_0] = ((/* implicit */_Bool) (-(((arr_1 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [5ULL] [i_0] [i_0])))))));
                    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 2]))));
                    var_23 ^= ((/* implicit */long long int) arr_19 [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                {
                    var_24 += ((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_1] [(unsigned short)2]);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */int) arr_12 [13U] [i_1 - 2] [i_1] [i_1 - 2]);
                                arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-57)) ? (((((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_8] [i_9] [i_10])) << (((((/* implicit */int) arr_9 [i_0] [i_0])) - (6544))))) : (((/* implicit */int) ((signed char) var_6)))));
                                arr_38 [i_10] [i_9] [i_8] [3ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_22 [i_0] [i_8] [i_9] [i_10]) : (arr_22 [i_9] [i_9] [i_8] [i_1 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_1 - 2] [i_1 - 1]))) : (arr_19 [i_0] [i_1 - 1])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                {
                    arr_41 [i_11] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1 - 1]);
                    var_26 -= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned char)25)) * (((/* implicit */int) arr_31 [i_0] [i_0] [i_11] [i_11] [i_11] [i_11])))));
                }
                var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50322)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54932))) : (1911580958U)))), (max((((/* implicit */unsigned long long int) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((-(17099643217179049859ULL)))))));
                var_28 = ((/* implicit */_Bool) (unsigned short)10603);
            }
        } 
    } 
    var_29 = ((/* implicit */int) ((unsigned int) max(((-(((/* implicit */int) var_11)))), ((-(((/* implicit */int) var_10)))))));
}
