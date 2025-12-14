/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84402
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
    var_13 &= ((/* implicit */int) 9223372036854775807LL);
    var_14 -= ((/* implicit */signed char) 4208952208U);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8224160437255149392LL))))) : (((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) (unsigned short)23307)) & (((/* implicit */int) (signed char)-120)))) << ((((((+(((/* implicit */int) var_5)))) + (28404))) - (12)))))));
        var_17 = var_0;
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)17108)) : (arr_3 [i_1 - 1])));
        var_18 = ((/* implicit */signed char) ((unsigned long long int) arr_4 [i_1 + 1]));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                for (int i_5 = 1; i_5 < 9; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) var_8);
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8224160437255149388LL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (1596668473302942788ULL)));
                    }
                } 
            } 
        } 
        arr_19 [i_2] [(unsigned short)2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (signed char)40)))));
        arr_20 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)56430)))) * (837051171214365002ULL)));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_24 [i_2] [i_2] [i_6] = ((/* implicit */long long int) ((short) 7229361390801131047LL));
            arr_25 [i_2] [9U] = ((/* implicit */unsigned char) var_6);
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 7229361390801131047LL))) ? (((/* implicit */long long int) ((int) var_11))) : (((long long int) var_4))));
            arr_26 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)60))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_2])) : (var_12))) : (var_12));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2])) ? (837051171214364993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26790)))));
        }
        for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_32 [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)63))));
                arr_33 [0] [i_8] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_13 [i_7 + 1] [i_7 - 1] [i_7 + 2]))));
            }
            var_23 = ((/* implicit */short) ((int) ((arr_21 [(signed char)9]) ? (((/* implicit */int) (unsigned short)56430)) : (((/* implicit */int) arr_14 [(unsigned char)6] [i_7] [i_2])))));
            arr_34 [i_2] = ((8533870781167414142LL) / (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7 + 1] [i_7 - 1] [i_7]))));
        }
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            var_24 = ((/* implicit */signed char) var_6);
            var_25 = var_5;
            arr_38 [i_9] [i_2] = ((/* implicit */unsigned char) (signed char)-60);
        }
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)3762))))) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) var_11))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_27 = ((/* implicit */long long int) max((((/* implicit */int) ((short) 147595368U))), ((-(arr_39 [i_10] [i_10])))));
        var_28 += ((((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)54528)) <= (((/* implicit */int) var_9)))) ? (min((var_12), (((/* implicit */int) (short)1024)))) : (arr_39 [i_10] [i_10])))) & (max((7602652737483612384LL), (((/* implicit */long long int) var_6)))));
        arr_42 [i_10] = ((/* implicit */unsigned long long int) ((((long long int) ((signed char) var_11))) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-26790))))), ((unsigned short)1965)))))));
    }
}
