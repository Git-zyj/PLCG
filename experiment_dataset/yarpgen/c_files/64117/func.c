/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64117
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32769)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] &= ((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) < ((~(((/* implicit */int) arr_0 [i_0]))))));
                            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_3 - 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)32324))))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535))));
                            var_13 ^= ((/* implicit */unsigned long long int) max((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]), (((/* implicit */int) (unsigned short)0)))), (((int) arr_8 [i_0 - 1] [i_1 + 3] [9U]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_18 [(short)17] [i_1] [7LL] [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_10 [(signed char)1] [i_1 + 1] [(short)5] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1176952023875442368LL)) ? (((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_4])) : (((/* implicit */int) arr_5 [i_0])))) - (((/* implicit */int) arr_14 [i_4 - 1] [i_4] [i_4] [i_4 + 1]))))) : (arr_8 [i_0 + 4] [i_1 + 1] [i_0 + 4])));
                            var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) arr_10 [i_0] [i_4 + 1] [i_1 - 1] [i_5])) - (arr_4 [17] [i_1 + 3]))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) != (4610560118520545280LL)))))))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((3289266159U), (((/* implicit */unsigned int) (short)23271))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_6)), (arr_5 [i_0 + 1]))))) : (arr_15 [(signed char)19] [i_0] [i_1] [i_1] [i_1 + 3])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_6])), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4211318996117096051LL)) ? (-6508116824160260559LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : ((~(max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (15ULL)))))));
                    arr_30 [0] [i_7] [i_7] [0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [5U] [i_8]))) != (max((((arr_8 [i_6] [3U] [3U]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((arr_10 [i_6] [i_6] [3ULL] [i_6]) >> (((((/* implicit */int) (short)4080)) - (4055))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 3; i_9 < 15; i_9 += 3) 
    {
        for (unsigned char i_10 = 4; i_10 < 14; i_10 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        for (short i_13 = 2; i_13 < 14; i_13 += 1) 
                        {
                            {
                                arr_46 [2LL] [8LL] [i_10] [i_12] [i_13 - 1] &= ((/* implicit */unsigned int) arr_1 [i_10]);
                                arr_47 [i_9 + 2] [i_9 - 1] [i_9 + 2] [6] [i_10] [i_9 - 1] [i_9] &= ((/* implicit */unsigned long long int) arr_5 [i_9]);
                                arr_48 [i_13 + 2] [(signed char)16] [i_11] [i_12] [i_10] [i_9 - 1] [i_9] = ((/* implicit */short) arr_34 [(_Bool)1]);
                                arr_49 [i_9] [i_9 - 2] [i_12] [i_9 + 1] [i_9 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (~(arr_10 [i_9] [i_10 - 4] [i_9] [i_13 - 1])))), (((long long int) (unsigned short)65535)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_14 = 2; i_14 < 15; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        for (signed char i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            {
                                arr_58 [i_9 - 2] [16U] [i_9 - 2] [13U] = (unsigned short)0;
                                arr_59 [i_9] [i_9 + 2] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_36 [i_9] [i_9] [i_9]);
                                var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)8)));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) min((3289266157U), (((/* implicit */unsigned int) (_Bool)1))))) - (arr_38 [i_14 - 1] [i_14 - 1])));
                            }
                        } 
                    } 
                } 
                arr_60 [i_9] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (signed char)-57))))) - (arr_36 [i_9] [i_9 + 2] [i_10])));
            }
        } 
    } 
    var_19 = ((var_9) - (var_1));
}
