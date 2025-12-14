/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67454
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) var_2);
                var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_1 + 1]))))) >= (max((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1]))))), (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                            {
                                arr_13 [i_0] [i_4] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_2 [i_3 - 1])))) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-125)))))));
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_10 [i_0] [5U] [10ULL])), (((arr_5 [i_4] [i_0]) ? (arr_7 [i_0] [i_1 - 3] [i_2 - 1] [i_3 + 3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_1 - 1] [i_3 + 1] [i_3]))))))))));
                                var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_1 - 2] [i_2 - 1]) ? (((/* implicit */int) arr_5 [7U] [i_4])) : (((/* implicit */int) arr_5 [i_2 - 1] [i_3 + 3]))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                            {
                                arr_17 [i_5] [i_3] [i_0] [i_0] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_3 - 1] [i_2] [i_2 - 1] [i_1 - 1])) ? (72057044282114048LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_3 + 3] [(signed char)13] [i_2 - 1] [i_1 + 1])) ? (arr_7 [i_0] [i_3 - 1] [i_2 - 1] [i_2 - 1] [i_1 - 2]) : (arr_7 [i_0] [i_3 + 1] [i_3 + 2] [i_2 - 1] [i_1 - 3]))) : (arr_7 [i_1 - 3] [i_3 + 2] [i_0] [i_2 - 1] [i_1 - 1]));
                                var_15 = ((/* implicit */long long int) min((var_15), ((+((((_Bool)1) ? (arr_11 [i_0] [i_2 - 1] [i_2] [4ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))))));
                                arr_18 [i_0] [i_1 + 1] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */long long int) (+((-((-(arr_7 [i_0] [i_1 - 3] [10LL] [i_3 + 1] [i_5])))))));
                            }
                            arr_19 [(signed char)1] [(signed char)1] [i_1] [i_2 - 1] [i_3] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_4)))) ? (((arr_9 [(signed char)11] [i_1] [i_2 - 1] [i_0]) ? (((/* implicit */unsigned long long int) arr_0 [i_2 - 1])) : (var_4))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                            arr_20 [i_3] = ((/* implicit */unsigned int) (~(((((((/* implicit */int) var_3)) <= (((/* implicit */int) var_10)))) ? ((-(((/* implicit */int) arr_3 [i_0] [9LL] [i_2])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_2] [i_3])) : (((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8557147670155072670LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
