/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57547
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
    for (long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((max((arr_0 [i_0 + 2]), (arr_0 [i_1]))) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)28)), (37702106)))))))));
                arr_7 [i_0] [i_0] [i_0 + 3] = ((/* implicit */signed char) arr_3 [i_0 + 1]);
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
                var_16 ^= ((/* implicit */signed char) max((5017755072124685042LL), (((((((/* implicit */int) (signed char)88)) == (((/* implicit */int) (signed char)-110)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8290))) : (36028797018959872LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) <= (-19190752)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
    {
        for (unsigned char i_3 = 2; i_3 < 7; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 4; i_4 < 9; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_19 [i_2] = var_9;
                            arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_17 [i_2] [i_3] [i_2] [(_Bool)1] [i_4] [i_5])))) == ((+((~(((/* implicit */int) (short)8285))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_6 = 2; i_6 < 8; i_6 += 2) /* same iter space */
                            {
                                arr_23 [i_2] [i_3 - 1] [i_3 - 1] [i_5] |= ((/* implicit */unsigned char) (-(1210263739)));
                                arr_24 [i_3] [i_4 + 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_5] [i_2])) != (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [2]))))) != (((((/* implicit */int) var_6)) / (((/* implicit */int) var_4))))));
                                arr_25 [i_2] [i_3] [i_3] [i_5] = ((_Bool) (unsigned char)152);
                            }
                            for (unsigned short i_7 = 2; i_7 < 8; i_7 += 2) /* same iter space */
                            {
                                var_17 -= ((/* implicit */unsigned int) (_Bool)0);
                                arr_30 [i_2] [(signed char)9] [i_2] [i_2] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (unsigned short)22821)), (min((((/* implicit */long long int) (unsigned short)1)), (2438189257880986773LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (arr_0 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31458)))))))))));
                                arr_31 [i_2] [i_2] [i_4 - 1] [i_2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((((/* implicit */int) (unsigned short)13918)) ^ (((/* implicit */int) (short)-31459))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37356)) ? (((/* implicit */int) arr_14 [i_2 - 2] [i_3 - 2] [i_4 + 1] [i_5])) : (((/* implicit */int) var_12))))) ? (min((((/* implicit */unsigned int) (signed char)-20)), (var_10))) : (((3157875954U) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                            }
                            arr_32 [i_2 - 2] [(unsigned short)5] [i_2 - 2] [i_5] [i_2 - 2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((arr_9 [i_3] [i_3]) - (4310640245664148812ULL)))))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (min((((((/* implicit */int) (signed char)-89)) * (((/* implicit */int) (short)-29058)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)2))))))));
                            var_18 ^= ((/* implicit */short) ((((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (signed char)-53))))) < (min((((/* implicit */int) var_1)), (-1570522250)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -1358319003)) == (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) var_14))))) : (arr_9 [i_3 - 1] [i_9])))));
                            arr_39 [i_2] [i_8] [(short)3] [i_9] [i_3] [i_3] = ((/* implicit */signed char) (~(arr_0 [i_3])));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)16)), (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2 - 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_13 [i_2 - 2] [i_3] [i_2 - 2] [i_2 - 1]))))));
                arr_40 [i_2 + 2] [i_2] [i_3 - 2] &= ((/* implicit */int) ((((30U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2 + 2] [i_3] [i_2 + 2]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33569)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                arr_46 [i_10] = ((/* implicit */signed char) 2583104716U);
                arr_47 [i_10] [i_10] = ((/* implicit */unsigned long long int) (~(max((arr_43 [i_10] [(_Bool)1] [i_11]), ((-2147483647 - 1))))));
                arr_48 [i_10] = ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), ((~(((/* implicit */int) (unsigned char)63))))))) < (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_41 [i_10] [(_Bool)1]))))), (min((arr_44 [i_10] [i_10]), (((/* implicit */unsigned long long int) var_3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 1; i_12 < 15; i_12 += 4) 
    {
        for (int i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) arr_49 [i_13]);
                arr_53 [14ULL] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [4])))))) : ((+(((var_8) / (((/* implicit */long long int) -1321674383))))))));
            }
        } 
    } 
}
