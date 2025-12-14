/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78614
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), ((-((((_Bool)1) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] [1U] [10LL] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2 + 2])) >= (var_8)))) - (((/* implicit */int) ((signed char) var_1)))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)78))) == (arr_11 [i_2 + 1] [i_2 + 3] [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 - 1])))) / (((/* implicit */int) ((signed char) arr_8 [i_2 + 1] [i_2 + 3] [i_2 + 2] [i_2 + 1])))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 3; i_4 < 12; i_4 += 1) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (signed char)-97))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))) * (var_2)))) ? (((/* implicit */int) ((2982944222U) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) ((18010456205406930924ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) / (min((((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))), (((((/* implicit */_Bool) arr_10 [0LL] [5LL] [5LL] [i_3])) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                            for (long long int i_5 = 3; i_5 < 12; i_5 += 1) /* same iter space */
                            {
                                arr_21 [i_0] = ((/* implicit */long long int) arr_4 [i_0]);
                                var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) arr_20 [i_0] [i_1] [i_5] [i_1] [i_5])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned long long int) (unsigned short)21))));
}
