/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57516
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
    var_17 ^= ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((/* implicit */long long int) 4294967295U)) : (var_12))))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (((((/* implicit */int) arr_6 [i_0])) + (((/* implicit */int) var_7)))) : (var_14))) : (((/* implicit */int) (unsigned short)5))));
                                var_19 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_1 [i_2 + 1] [i_0 + 3]))))));
                                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_9 [i_0] [i_1] [i_0] [i_0] [i_1] [i_2])))) ? (((((/* implicit */_Bool) (-(var_14)))) ? (arr_8 [i_0 + 4] [i_2] [i_3] [i_4 - 1] [i_4]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_4 + 2])))))));
                            }
                            for (signed char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                            {
                                var_21 |= ((/* implicit */short) min(((-(arr_10 [i_0] [i_1] [i_0 + 3] [i_2 - 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_0 + 2] [i_2 - 1])))))));
                                var_22 |= ((/* implicit */long long int) ((short) (((-(((/* implicit */int) (unsigned short)65531)))) * ((-(((/* implicit */int) arr_2 [i_1] [12ULL] [(unsigned short)0])))))));
                                arr_15 [i_0] [i_0 + 4] [i_1] [4ULL] [i_0] &= ((/* implicit */_Bool) min((((((/* implicit */int) var_11)) >> (((((((/* implicit */_Bool) arr_14 [i_0 + 3] [i_1] [i_1] [i_2] [(_Bool)1] [i_5])) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (8574172396112830082LL))))), (var_2)));
                                var_23 = ((/* implicit */signed char) max((var_23), (var_10)));
                            }
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                            {
                                arr_19 [i_1] [18LL] [i_3] |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                                var_24 = ((/* implicit */unsigned long long int) var_11);
                                var_25 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_13 [i_0] [i_0] [4U] [4U] [i_0])))) ? (((/* implicit */unsigned long long int) arr_12 [14] [i_1] [i_1] [(signed char)0] [i_2 - 2] [i_6])) : (arr_7 [i_0 - 1] [i_1])));
                                arr_20 [i_2] [i_2] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_9))))));
                            }
                            for (signed char i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                            {
                                var_26 ^= ((/* implicit */short) var_13);
                                var_27 ^= ((/* implicit */int) ((long long int) (-(((/* implicit */int) arr_6 [i_0 + 3])))));
                                var_28 &= ((/* implicit */short) ((long long int) ((unsigned int) (-(((/* implicit */int) var_10))))));
                            }
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_9)))))))))));
                            var_30 = ((/* implicit */unsigned long long int) var_15);
                            arr_24 [i_3] [8] [i_3] [i_3] &= (-(((/* implicit */int) ((signed char) arr_13 [i_0 + 2] [i_0 + 2] [i_2 - 1] [i_3] [i_2]))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) (-((-(arr_12 [i_0] [i_0 + 4] [i_1] [i_1] [i_1] [i_0 + 4])))));
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)8] [i_1] [i_0])) ? (((/* implicit */int) var_15)) : (var_2))), (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)24576))))))) / (arr_21 [i_1] [i_1])));
            }
        } 
    } 
    var_33 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11660474241505056123ULL)) ? ((-(((/* implicit */int) (unsigned char)238)))) : (((/* implicit */int) (signed char)-107))));
    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_6))));
    var_35 = ((/* implicit */int) min((var_35), (((var_15) ? (((/* implicit */int) ((short) ((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (918156275U))))) : ((-(((/* implicit */int) var_9))))))));
}
