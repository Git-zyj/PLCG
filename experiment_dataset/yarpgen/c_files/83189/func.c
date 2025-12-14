/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83189
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
    var_11 = ((/* implicit */signed char) var_10);
    var_12 = ((/* implicit */unsigned long long int) (-(min((var_4), (((/* implicit */unsigned int) var_1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((((/* implicit */int) arr_1 [(short)8] [i_0])) & (((int) arr_0 [i_0])));
        arr_4 [0LL] &= ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_3 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) 4257987333U);
        var_14 += (+(((/* implicit */int) arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 15; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */short) ((unsigned char) arr_6 [i_1 + 1] [i_1]));
        var_15 *= arr_1 [i_1 - 1] [i_1];
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_7 [i_1])));
        var_17 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1 - 1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) arr_8 [i_2] [i_2]))), ((+(arr_7 [i_2])))));
            arr_18 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((arr_7 [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (arr_10 [i_2] [i_3])))))));
            arr_19 [i_3] = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]);
            var_19 ^= ((/* implicit */unsigned short) (-(min((arr_8 [i_2] [i_3]), (((/* implicit */long long int) var_6))))));
        }
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            arr_23 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_17 [i_2] [(signed char)9])), (arr_13 [i_2] [i_2])))) >= (min(((((_Bool)1) ? (arr_8 [i_2] [i_4]) : (arr_14 [i_4] [i_4] [i_2]))), (((/* implicit */long long int) min((arr_6 [i_2] [i_2]), (((/* implicit */unsigned short) arr_16 [i_4] [i_2] [i_2])))))))));
            arr_24 [i_2] [i_2] = ((/* implicit */_Bool) arr_17 [i_2] [i_4]);
        }
        for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 2) 
        {
            var_20 = ((/* implicit */int) arr_1 [i_2] [i_2]);
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_0 [i_2]))));
        }
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            arr_30 [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_28 [i_2] [i_6])) ? (((/* implicit */int) arr_28 [i_6] [i_2])) : (((/* implicit */int) arr_28 [i_6] [i_2]))))));
            arr_31 [i_2] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)127)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16072))) : (-8410566551528809523LL)));
            arr_32 [i_2] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */int) arr_29 [i_6] [i_2])), (((int) ((unsigned char) arr_8 [i_2] [i_6])))));
        }
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        arr_39 [i_2] [i_2] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_17 [i_2] [i_2]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_2] [i_8]))))))))));
                        arr_40 [i_9 + 1] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_8 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_9]) % (((/* implicit */int) arr_2 [i_2]))))) : (((((/* implicit */unsigned long long int) arr_26 [i_2] [i_2])) & (arr_34 [i_7] [i_2]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))));
                        arr_41 [i_8] [i_9 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_8] [i_9]))) : (arr_8 [i_7] [i_8])))))) <= ((-(((arr_11 [i_2]) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))))))));
                        var_22 += min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_2] [i_2] [i_2] [i_9])))))))), (((long long int) arr_35 [i_2] [i_7] [i_7] [i_9])));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_38 [2ULL] [i_2])), ((-2147483647 - 1))))) : (arr_33 [i_2] [i_2] [i_2])));
    }
    var_24 += ((/* implicit */unsigned char) var_10);
}
