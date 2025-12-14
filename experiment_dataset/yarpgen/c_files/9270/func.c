/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9270
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
    var_20 = var_15;
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((/* implicit */long long int) var_19)), (3859486957112468405LL))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        var_22 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((arr_1 [i_0]) << (((((((var_19) ? (-3859486957112468426LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) + (9524LL))) - (57LL))))) << (((arr_1 [i_0]) - (7910714576533409240LL)))))) : (((/* implicit */unsigned char) ((((((arr_1 [i_0]) + (9223372036854775807LL))) << (((((((var_19) ? (-3859486957112468426LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) + (9524LL))) - (57LL))))) << (((((arr_1 [i_0]) + (7910714576533409240LL))) - (6372705974862717432LL))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_2))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_24 *= ((/* implicit */long long int) ((((/* implicit */int) ((arr_3 [(unsigned char)0] [i_1]) == (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (-3859486957112468405LL))))))) ^ (((/* implicit */int) ((((var_19) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) <= (((/* implicit */unsigned long long int) ((arr_2 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (2776342426277630645LL) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)27)) & (((/* implicit */int) var_4)))))))) <= (18446744073709551615ULL)));
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 14; i_2 += 4) 
        {
            arr_7 [13LL] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
            var_26 = ((/* implicit */long long int) (signed char)53);
        }
    }
    for (short i_3 = 2; i_3 < 22; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        arr_19 [10LL] [i_3] [i_3] [i_3] [15LL] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17))))), (arr_13 [i_5] [i_5] [i_3] [i_3]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4 + 1] [i_3 - 1] [i_3 - 2])))))));
                        arr_20 [i_6] [i_3] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) max((((unsigned short) arr_10 [i_3 + 2])), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 1]))) >= (var_5))))));
                        var_27 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))) : (arr_13 [i_3] [(signed char)0] [(signed char)16] [i_6])))), (arr_8 [(unsigned char)3]))), (((long long int) ((unsigned char) var_19)))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_3] [i_5 + 2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32355)) ? (((/* implicit */int) (short)-13235)) : (((/* implicit */int) (short)-18208))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17ULL)) || (((/* implicit */_Bool) (signed char)51))));
                            arr_24 [i_3] [i_4] [i_4] = ((/* implicit */signed char) var_16);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            arr_27 [i_4 - 1] [i_3] [12ULL] = ((/* implicit */signed char) var_19);
                            arr_28 [i_3] = ((/* implicit */_Bool) ((var_17) & (((/* implicit */int) arr_21 [i_3]))));
                        }
                        for (signed char i_9 = 2; i_9 < 22; i_9 += 1) 
                        {
                            arr_32 [i_9] [i_3] [i_6] [i_4] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? ((-(4175114250U))) : (303771244U)));
                            var_29 = ((/* implicit */unsigned int) min((((/* implicit */short) ((unsigned char) arr_30 [i_3] [i_4 + 2]))), (max((arr_17 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 2]), (((/* implicit */short) var_11))))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (max(((-(3991196052U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))) : (var_8)))) ? (((unsigned int) arr_10 [i_4])) : (((/* implicit */unsigned int) -1))))))));
                        }
                    }
                    for (short i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                    {
                        arr_36 [12] [i_3] [i_5] [7U] [7U] = ((/* implicit */unsigned char) min((((/* implicit */short) max((arr_21 [i_3]), (arr_21 [i_3])))), (min((((/* implicit */short) var_2)), (var_15)))));
                        arr_37 [i_4] [i_3] = ((/* implicit */_Bool) (-(arr_22 [i_4] [i_10] [i_4] [i_4 + 1] [18U] [(signed char)4] [i_4])));
                        arr_38 [(signed char)14] [i_3] [(signed char)5] = ((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)9))))), (((((/* implicit */_Bool) arr_13 [i_5 - 2] [i_5 + 2] [i_4 + 2] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_13 [i_5 + 2] [i_5 + 3] [i_4 + 1] [i_3 - 2])))));
                    }
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) arr_22 [i_5] [i_5] [16ULL] [16ULL] [i_4] [12] [i_3]))));
                    var_32 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (887583800U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (var_8)))) ? (((/* implicit */long long int) ((unsigned int) arr_33 [i_3] [i_3 - 2] [i_5 + 3] [(unsigned short)16] [i_5 - 1]))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_3] [17U])))))) - (max((var_7), (-6090815612573489746LL))))));
                }
            } 
        } 
        arr_39 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -3859486957112468397LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */short) (signed char)-27)))))) : (((1529586639U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79)))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-27)), ((unsigned char)247)))) : (((/* implicit */int) (signed char)-13))));
    }
    var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (((unsigned int) (-(((/* implicit */int) var_13)))))));
}
