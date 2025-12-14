/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93484
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
    var_13 = ((/* implicit */signed char) (~(((((2535177797U) + (2535177799U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2535177797U))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_3)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62038))))))));
                        arr_9 [i_0] [i_3] [(short)16] [(short)7] = ((/* implicit */_Bool) 2535177797U);
                    }
                    for (unsigned int i_4 = 2; i_4 < 23; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) arr_7 [i_1] [i_2]))))))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (2535177797U) : ((+(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (2373639271U) : (1199161112U)))))));
                        var_17 ^= arr_0 [i_0] [(_Bool)1];
                    }
                    /* vectorizable */
                    for (long long int i_5 = 3; i_5 < 23; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_6))))));
                        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)40))));
                        arr_16 [i_2] [i_0] = (unsigned char)43;
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((((unsigned short) min((1726513115U), (1726513126U)))), (((/* implicit */unsigned short) var_9))));
                                var_21 |= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_6]))) > (arr_1 [(unsigned char)2] [(unsigned char)2])))) : (((/* implicit */int) (signed char)(-127 - 1))))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_1] [i_2]);
                    arr_21 [i_0] = ((/* implicit */unsigned long long int) min((((long long int) min((((/* implicit */long long int) (unsigned short)40617)), (var_4)))), (((/* implicit */long long int) 11U))));
                    arr_22 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
                }
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_23 = ((/* implicit */signed char) ((((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8] [i_8]))))) < (((/* implicit */unsigned long long int) var_1))));
                    arr_25 [i_0] [i_1] [i_8] [i_8] = ((/* implicit */_Bool) (((((-(((/* implicit */int) var_12)))) + (2147483647))) >> (((((((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0] [i_8]) | (1726513112U)))) ? (((/* implicit */long long int) 4144536644U)) : (arr_5 [4ULL] [4ULL] [4ULL]))) - (4144536629LL)))));
                }
                for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_25 = ((/* implicit */unsigned long long int) (_Bool)0);
                }
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    arr_33 [i_0] = ((/* implicit */short) (_Bool)0);
                    var_26 ^= ((/* implicit */unsigned char) (signed char)-107);
                    arr_34 [i_10] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)99);
                }
                arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)40);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            {
                arr_42 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (signed char)-23);
                /* LoopNest 2 */
                for (long long int i_13 = 4; i_13 < 18; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) 2568454173U);
                            arr_49 [i_11] [i_12] [i_13 - 2] [i_14] [i_14] [i_14] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) % (max((arr_18 [i_11] [i_14]), (((/* implicit */long long int) arr_44 [i_11] [i_12] [i_13 - 4] [i_14]))))))));
                            arr_50 [i_14] = ((/* implicit */signed char) var_3);
                            arr_51 [13U] [i_14] [13U] = ((((_Bool) 439141921015371893LL)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)121)) ? (2568454169U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */long long int) (unsigned short)52257)), (var_5))))) : (min((((/* implicit */long long int) arr_27 [i_11] [i_11] [i_13])), (var_0))));
                        }
                    } 
                } 
                arr_52 [i_12] [i_12] [i_12] = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_46 [i_11] [i_11] [i_11] [i_11])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_12])))))))) >> (((2535177797U) - (2535177790U)))));
                arr_53 [i_11] [i_12] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)31)), ((+(((/* implicit */int) arr_47 [i_12] [i_11]))))));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [22LL] [22LL])) ? (((((((/* implicit */_Bool) (unsigned short)52269)) ? (arr_45 [i_11] [i_11] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_11] [i_11]))))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (arr_36 [i_11])));
            }
        } 
    } 
}
