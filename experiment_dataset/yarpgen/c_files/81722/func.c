/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81722
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
    var_10 *= ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((((((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [(signed char)17] [i_2])) ? (9223372036854775807LL) : (arr_4 [i_0] [i_1] [i_0]))) >= (((/* implicit */long long int) ((int) var_7)))))) : (((/* implicit */int) arr_3 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) arr_6 [i_0] [i_0] [i_2])));
                                var_11 = ((/* implicit */short) max((min((((((/* implicit */_Bool) (unsigned short)11602)) ? (1ULL) : (((/* implicit */unsigned long long int) 245729068746213381LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_6 [i_0] [i_0] [i_0])), (arr_9 [i_1] [i_2] [i_0] [i_4])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_1] [i_1] [i_4] [i_2] [i_4])))))) : (arr_5 [(unsigned short)8] [(unsigned short)8] [i_3]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((max(((-(((/* implicit */int) arr_0 [(short)4] [(short)4])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_6] [i_0]))))));
                                var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_6])) ? (((/* implicit */int) arr_16 [(short)16] [i_0] [i_1] [i_2] [(signed char)6] [i_6])) : (((/* implicit */int) var_1))))) ? (arr_5 [i_2] [i_2] [(unsigned short)12]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) != (((/* implicit */long long int) min((arr_18 [i_1] [i_6]), (((/* implicit */unsigned int) ((signed char) var_9))))))));
                                var_14 = ((/* implicit */long long int) var_0);
                                arr_22 [i_0] [9LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) arr_1 [17]))))) ^ (var_6)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */unsigned short) (signed char)-122);
}
