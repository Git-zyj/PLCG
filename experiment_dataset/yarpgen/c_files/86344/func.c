/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86344
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
    var_15 |= ((/* implicit */unsigned int) (+(9223372036854775807LL)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_0] [i_0 + 1] [i_2 + 1] [i_3 + 1]))) ? (((/* implicit */int) arr_5 [i_0 - 1])) : (max((((((/* implicit */_Bool) var_13)) ? (0) : (((/* implicit */int) arr_5 [i_2])))), (((((/* implicit */int) arr_1 [i_2])) + (((/* implicit */int) (unsigned short)26681))))))));
                        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)-64)) ? (3088948247U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_2 + 1] [i_3])))))))));
                        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) min((arr_8 [i_0 - 2] [i_1] [i_2 + 1]), (arr_8 [i_0 + 1] [i_1] [i_2 + 2])))) ? (((arr_4 [i_1 + 3]) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)51))))) : ((~(((((/* implicit */_Bool) 6U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1 - 3] [i_2] [i_2])))))))));
                        arr_13 [i_0] [i_2] [i_2 + 1] [17LL] [i_2 + 1] [i_0 - 2] = ((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 17; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_8 [i_1] [i_2] [i_4]))))));
                        var_20 = ((/* implicit */unsigned short) (_Bool)0);
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((short) arr_1 [i_0])))));
                        var_22 = ((/* implicit */_Bool) arr_3 [i_2 + 2] [i_1 + 3]);
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-(arr_6 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))));
                    }
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) ((max((((/* implicit */long long int) max((arr_9 [i_0] [i_1] [i_2] [i_5]), (((/* implicit */unsigned char) (_Bool)1))))), (7143273871712627134LL))) << (((((/* implicit */int) arr_0 [0LL] [i_1])) - (20204)))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (signed char)-1)) ? (2683019315U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_10 [i_2] [i_1] [i_0])))))))))));
                    }
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_25 *= ((/* implicit */unsigned int) ((signed char) -1));
                        arr_22 [i_2] [15U] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) 6U)))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-5461))))), (15ULL)))));
                    }
                    var_26 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) ((signed char) 18446744073709551615ULL))) : (((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (_Bool)1)))))), ((~(((/* implicit */int) ((short) var_3)))))));
                    var_27 = ((/* implicit */long long int) max((max((max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_6 [i_2] [i_1]))), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((arr_18 [i_2 - 1] [i_1 + 2] [i_2 - 1] [i_1 + 2] [i_1] [i_2]), (arr_18 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_0 - 2]))))));
                }
            } 
        } 
    } 
    var_28 += ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 10; i_7 += 3) 
    {
        for (unsigned int i_8 = 4; i_8 < 13; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7 - 1] [i_7] [i_9] [i_10])) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) max(((short)9), (((/* implicit */short) arr_10 [i_7] [6LL] [i_9])))))))) ? (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_7] [i_8] [i_9] [i_10]))))), (0U))) : (((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_8 - 1] [i_8] [i_7 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_7] [i_8] [i_9] [i_10 + 2]))))) : (arr_7 [i_10 + 1] [i_10 + 1] [i_8])))));
                        var_30 -= ((/* implicit */long long int) (_Bool)1);
                        var_31 *= ((/* implicit */unsigned int) (+(((long long int) (signed char)-17))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((_Bool)1) ? (-1) : (((/* implicit */int) arr_12 [i_8 - 2] [6ULL]))))) & (max((arr_7 [i_8] [i_8] [i_8 - 2]), (arr_7 [i_8] [i_8] [i_8 - 3]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 4; i_11 < 11; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */short) 1);
                        var_34 ^= ((/* implicit */int) (unsigned short)65534);
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_7] [i_7 + 4] [i_7])) ? (((1295293511U) | (((/* implicit */unsigned int) -502839864)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (arr_10 [i_7] [i_11] [i_9])));
                    }
                    for (long long int i_12 = 3; i_12 < 12; i_12 += 2) 
                    {
                        arr_39 [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 8699653782148740766ULL)))));
                        var_37 = ((((/* implicit */_Bool) (short)15)) ? (((((/* implicit */int) arr_29 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 2])) - (((/* implicit */int) arr_29 [i_12 - 2] [i_12] [i_12 + 2] [i_12])))) : (((/* implicit */int) max((arr_29 [i_12 - 2] [i_12 + 1] [i_12] [i_12 + 1]), (((/* implicit */unsigned short) (_Bool)1))))));
                        var_38 = ((short) var_13);
                    }
                    var_39 = ((/* implicit */signed char) arr_6 [i_9] [i_7]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned char) ((((-2024437365) != (((/* implicit */int) arr_19 [i_7 + 2] [i_8] [i_8] [i_13] [i_8] [i_7])))) || (((/* implicit */_Bool) ((signed char) arr_38 [i_7] [i_8] [i_9] [i_13])))));
                        arr_42 [i_7] [i_7] [i_7 + 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_20 [i_13] [i_13] [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
                        var_41 = (-(0ULL));
                    }
                }
            } 
        } 
    } 
}
