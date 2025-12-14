/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92068
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((var_5) << (((((unsigned long long int) var_2)) - (32952ULL))))) : ((((~(var_5))) << ((((~(((/* implicit */int) var_2)))) + (33039)))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_2]))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 4] [i_1 + 1])) || (((/* implicit */_Bool) 9768773059328181938ULL))))))))));
                    var_18 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_2)), (((var_5) / (((/* implicit */unsigned long long int) var_11)))))) / (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_5 [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 6; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 - 1] [i_4] = arr_7 [i_2];
                                var_19 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) -828730370)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22390))) : (8677971014381369695ULL))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_1] [i_3 - 1] [(_Bool)1] [i_3 - 4])) | (arr_1 [i_0 + 4])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_6 [i_2] [i_0])))))) > ((~(var_9)))))) : (arr_1 [5ULL]))))));
                                var_21 = ((/* implicit */short) ((max((max((var_0), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))), (((/* implicit */unsigned long long int) (+(849509342)))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [2ULL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_11))))))));
                                var_22 ^= max((((/* implicit */long long int) min((((/* implicit */short) arr_2 [i_3 + 2])), (var_13)))), ((~(arr_13 [i_0] [i_0] [i_0] [i_0] [i_4]))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
        var_24 &= arr_10 [i_0] [i_0];
        var_25 = ((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0]);
        var_26 = ((/* implicit */short) max(((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) : (8677971014381369695ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_0 + 3] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_14)))) ? (((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 3] [i_0])))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_0] [i_0 + 3] [i_0] [i_0 + 3])) : (((/* implicit */int) (signed char)73)))))))));
        arr_15 [i_0] [i_0] = arr_7 [i_0];
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_27 ^= ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_5]))))), (arr_18 [i_5] [i_5])))) ? (min((((/* implicit */unsigned long long int) ((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (18446744073709551601ULL))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 849509342)) : (8677971014381369695ULL))));
        arr_19 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_17 [i_5])) % (((/* implicit */int) var_4)))) % (((((/* implicit */_Bool) (unsigned char)134)) ? (828730343) : (((/* implicit */int) (short)(-32767 - 1)))))))), (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_18 [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) var_1))))) : (max((var_6), (((/* implicit */unsigned long long int) arr_18 [i_5] [i_5]))))))));
        arr_20 [i_5] = ((/* implicit */signed char) ((((((/* implicit */int) arr_17 [i_5])) << (((((/* implicit */int) arr_17 [i_5])) - (33))))) ^ (((/* implicit */int) var_7))));
        var_28 ^= ((/* implicit */unsigned long long int) arr_18 [i_5] [i_5]);
    }
}
