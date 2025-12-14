/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65246
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
    var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_5)) : (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((4294967295U), (((/* implicit */unsigned int) (signed char)12))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [10LL])) ? (var_5) : (arr_0 [i_0 - 1] [i_0 + 2])))))))) : (max(((-(arr_7 [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(unsigned char)7] [i_1])) || (((/* implicit */_Bool) var_11))))))));
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) % ((~(var_4))))))));
                                arr_15 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((min((var_3), (arr_0 [5LL] [10ULL]))) / (((((/* implicit */_Bool) (signed char)12)) ? (3663312967U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12)))))))), (((((/* implicit */_Bool) arr_7 [(signed char)4])) ? (((3LL) / (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-119)) * (((/* implicit */int) (signed char)123)))))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 3] [i_2 + 2]))))) * (max((4294967295U), (((/* implicit */unsigned int) (signed char)-18)))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_13 [i_0] [3LL]))));
                    arr_16 [8U] [(short)4] [8U] = ((/* implicit */unsigned long long int) -1113400801);
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) -8995493587290813859LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)81))) : (-8684500269799806436LL)))));
    var_20 = ((/* implicit */unsigned char) var_9);
    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (288230375883276288ULL))) : (((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) var_0)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
