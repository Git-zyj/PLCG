/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96085
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */short) ((int) var_9));
                    var_10 = ((/* implicit */unsigned char) min((var_10), (((unsigned char) max((((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (min((arr_5 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) var_3)))))))));
                    var_11 ^= ((/* implicit */unsigned long long int) var_7);
                    var_12 = max((((/* implicit */int) max((max((var_0), (arr_6 [i_1] [(short)14]))), (((/* implicit */unsigned short) var_9))))), (((((((/* implicit */int) (short)-20041)) + (-246690058))) & (((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_1 - 3] [i_2])))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (arr_2 [i_1 + 1] [i_0 + 1]) : (arr_2 [i_1 - 2] [i_0 + 1])));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 4] [i_1 + 1])) % (((/* implicit */int) arr_3 [i_0 + 4] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                arr_16 [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_8 [i_4] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [3ULL] [i_3] [i_4])) : (((/* implicit */int) var_5)))));
                                var_15 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 3] [i_0 + 3]))) > (arr_5 [i_4] [i_1] [i_1 - 1] [(unsigned short)13])));
                                arr_17 [(signed char)15] [6LL] [i_3] [i_4] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)185)) - (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */_Bool) arr_13 [5LL] [5LL] [i_1] [i_1] [i_1] [18LL])) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_1 - 4] [(unsigned short)5] [i_1 - 4] [i_0 + 3]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 3) 
                {
                    var_16 = ((/* implicit */long long int) ((arr_9 [i_0] [i_1] [i_1 - 3] [i_1]) ? (((/* implicit */int) arr_18 [23U] [23U])) : (((/* implicit */int) arr_9 [i_0] [i_6] [i_1 - 3] [i_0 + 3]))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)182)) ? (9381385667971034508ULL) : (((/* implicit */unsigned long long int) 2062024740U))));
                    arr_21 [i_6] = ((/* implicit */long long int) arr_3 [i_1] [i_6]);
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)16764)) ? (9065358405738517118ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107)))))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2232942569U)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (unsigned char)68))));
                    }
                }
                var_20 = ((((/* implicit */_Bool) min((((unsigned long long int) 1985080117)), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_0]))))))) : (max((((((/* implicit */long long int) arr_0 [i_0 + 2])) / (var_7))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_4)) : (arr_22 [i_0 - 2] [i_1 - 1] [i_0 - 2] [i_1 - 1] [i_0] [i_1 - 1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)188)), ((unsigned short)1052))))) : ((~(var_1)))))));
}
