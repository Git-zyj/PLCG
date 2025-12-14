/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76170
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
    var_15 = ((/* implicit */unsigned char) ((long long int) ((((0ULL) <= (((/* implicit */unsigned long long int) 562949953355776LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -562949953355777LL)) <= (13584606915901838775ULL))))) : (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) var_3)))))));
    var_16 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [(short)5] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 562949953355778LL)) : ((~(((((/* implicit */_Bool) arr_1 [4U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (0ULL)))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)8848))))) : (((((/* implicit */_Bool) (unsigned short)25211)) ? (6372097043281377444ULL) : (((/* implicit */unsigned long long int) -40361035))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1317114527)) ? (var_0) : (((/* implicit */int) arr_0 [i_2]))))) ? (arr_7 [(signed char)7] [9LL] [i_2]) : (((/* implicit */long long int) arr_1 [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12074647030428174171ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_3)))))))) : (((((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0]) - (((/* implicit */int) (short)29898))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) + (12074647030428174171ULL)))))));
                            arr_11 [i_0] [14] [i_0] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) max((arr_6 [i_0] [i_0]), (((/* implicit */int) var_11)))))), (arr_3 [i_2] [i_0])));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_3 [i_2] [i_1 + 2]) + (2147483647))) << (((((arr_3 [i_0 + 2] [i_2 + 1]) + (731271632))) - (1)))))) ? (((arr_3 [i_0 + 1] [i_1 + 1]) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) arr_3 [i_1 + 2] [i_2 + 1])))));
                            arr_12 [i_0 - 3] [i_0] [i_0 - 3] [i_2] [(short)19] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0)))))) : (arr_7 [i_3] [i_1 - 1] [6LL]))) * (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)13] [i_0] [(unsigned short)13] [i_0])))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_9) ^ (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_1 + 2] [i_0] [11U]))))), (((unsigned long long int) arr_1 [i_1 - 2]))));
            }
        } 
    } 
}
