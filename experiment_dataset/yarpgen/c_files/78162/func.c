/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78162
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
    var_14 *= ((/* implicit */signed char) (-((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] = ((/* implicit */int) ((_Bool) arr_7 [(unsigned short)5]));
                            var_15 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_8 [i_1] [(short)0])) && (((/* implicit */_Bool) arr_0 [i_2] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_9 [i_3] [i_1] [i_1] [i_1] [i_0])))))) : (max((arr_2 [i_2 - 1]), (2298222213U))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9))))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_1 [i_3] [i_2 - 2]))));
                            var_17 *= ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) arr_8 [i_0] [i_1])))) % (arr_7 [i_2 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (int i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */signed char) (short)6021);
                            arr_18 [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) max((((unsigned int) ((((/* implicit */_Bool) 480743960)) ? (arr_12 [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5 - 1] [i_5] [i_5])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_4] [i_5])))))));
                            var_18 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                            var_19 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (var_2) : (arr_13 [i_0] [i_1] [i_4] [i_5 + 1])))) : ((+(arr_12 [i_0] [i_1] [i_1] [i_1]))))) >= (((/* implicit */unsigned long long int) min((2097151LL), (((/* implicit */long long int) arr_3 [i_1] [1LL])))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8909131619878448323LL)) - (8715604272252467778ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4398046511103LL)) ? (1385522989) : (((/* implicit */int) var_6))))) : (arr_15 [i_0] [i_1] [i_0] [i_1]))) : (min((arr_7 [i_0]), (arr_7 [i_1])))));
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_13 [i_0] [i_0] [i_0] [i_0])))));
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */short) max((((/* implicit */int) arr_5 [i_8] [i_7] [i_1] [i_0])), ((-(((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                                var_23 = ((/* implicit */signed char) max((arr_24 [i_0] [i_1] [i_1] [i_7] [i_1]), (((/* implicit */unsigned long long int) (-(var_1))))));
                                var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)159))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
