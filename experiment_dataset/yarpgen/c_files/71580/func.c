/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71580
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) arr_1 [(short)9]);
        var_12 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((arr_0 [i_0]) + (9223372036854775807LL))) << ((((~(arr_0 [i_0]))) - (3577090373181581414LL)))))) : (((/* implicit */unsigned short) ((((arr_0 [i_0]) + (9223372036854775807LL))) << ((((((((~(arr_0 [i_0]))) - (3577090373181581414LL))) + (979654980155739349LL))) - (56LL))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_13 &= ((/* implicit */unsigned char) var_8);
            var_14 = ((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_0] [i_0 - 1]);
            var_15 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (arr_3 [i_0] [i_0] [i_1])))) + (((1604317009U) - (arr_1 [i_0]))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                var_16 = ((/* implicit */int) arr_1 [i_0]);
                var_17 = ((/* implicit */long long int) var_9);
                var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) % (((((/* implicit */long long int) arr_10 [i_0 + 1])) | (arr_0 [i_0])))));
            }
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_0 - 1]), (arr_6 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (arr_6 [i_0 + 1]) : (arr_6 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_6 [i_0 + 1]))))));
                var_20 = ((/* implicit */int) var_4);
            }
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((var_0) / (((/* implicit */long long int) arr_8 [i_0 + 1] [i_0 + 1]))));
                            var_22 = ((((arr_10 [i_0 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))))) ? (((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned char)206)))), (((/* implicit */int) var_2))))) : (((((long long int) var_4)) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)11643)))))));
                            var_23 = ((/* implicit */signed char) (~(((((/* implicit */long long int) var_1)) / (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1])))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((((_Bool) arr_8 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) min((arr_8 [i_0 - 1] [i_0 + 1]), (arr_8 [i_0 - 1] [i_0 + 1])))) : (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1])) ? (var_7) : (((/* implicit */long long int) arr_8 [i_0 - 1] [i_0 + 1]))))));
            }
            for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned char i_10 = 3; i_10 < 9; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) 16745790117807711959ULL))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_7)))) : (((unsigned long long int) (_Bool)1)))) + (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_9)))))))));
                            var_26 = var_10;
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-1))))) ? (arr_1 [i_0 - 1]) : (((((/* implicit */_Bool) var_5)) ? (arr_1 [(signed char)9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [4]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_0 [i_0]))) / (((/* implicit */int) arr_24 [i_0 - 1] [i_8 + 1])))))));
            }
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)8])) && (((/* implicit */_Bool) arr_15 [i_0 - 1] [(unsigned char)2]))))), (min((arr_26 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_26 [i_0] [(unsigned short)1] [i_2]))))))));
            var_29 = ((/* implicit */unsigned long long int) ((int) ((arr_7 [i_0] [i_0 - 1]) ^ (((/* implicit */int) arr_24 [(short)3] [i_0])))));
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            var_30 ^= ((/* implicit */signed char) (((~(var_0))) <= (((/* implicit */long long int) var_1))));
            var_31 = ((arr_33 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0 + 1] [i_0 - 1]))) : (arr_20 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_11]));
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_0]));
                    var_33 = ((/* implicit */signed char) (unsigned char)161);
                }
                for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    var_34 = ((unsigned short) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_2))));
                    var_35 = ((/* implicit */short) arr_12 [i_0] [i_11] [i_12] [i_11]);
                }
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_6))));
            }
        }
    }
    var_37 += ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((min((((/* implicit */int) (short)-26034)), (var_1))) != (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_3))))))))));
    var_38 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_6)))));
}
