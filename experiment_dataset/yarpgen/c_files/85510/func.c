/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85510
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
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) 65028164)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))), (((((/* implicit */int) var_2)) - (((/* implicit */int) (signed char)-88))))))), (arr_1 [i_0] [i_0 + 2]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)215);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */long long int) (~(997162918U)))) : (min((var_1), (((/* implicit */long long int) (unsigned char)23)))))), (arr_1 [i_0] [i_1]))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */signed char) (-(var_8)));
                            var_14 = ((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1] [i_2] [(_Bool)1] [i_4 + 1]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                            arr_16 [i_0] [i_1] [i_2] [(unsigned char)17] [i_3] [i_5] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)65))))) ? (((((/* implicit */_Bool) arr_6 [17] [i_1] [i_2] [i_1])) ? (((/* implicit */int) var_5)) : (arr_15 [i_5] [(short)13] [i_3] [i_2] [i_1] [i_0] [i_0]))) : (arr_15 [i_5] [i_5] [i_0 - 2] [i_0 - 3] [i_0] [i_0 - 1] [i_0])))));
                        }
                        var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [24U] [(signed char)22] [(signed char)22] [i_0 - 1])))))))));
                        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) : (var_9))) - (min((((/* implicit */long long int) var_7)), (var_9)))))));
                        arr_17 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */int) min((arr_8 [(signed char)16]), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)-13163)))))))));
                    }
                } 
            } 
            arr_18 [i_1] [i_1] [(signed char)24] = ((/* implicit */short) min(((-(((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)216)))))), (((((/* implicit */int) (unsigned char)215)) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))))))));
            var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) 4294967280U)))));
        }
    }
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-37)) / (((/* implicit */int) (signed char)65))))) ? (((/* implicit */int) min(((unsigned char)216), ((unsigned char)23)))) : (((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (unsigned char)226)) : (-1)))))) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-4)))) >> (((((/* implicit */int) (signed char)-88)) + (98)))))) : (((unsigned long long int) var_5)))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_3))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)23)), ((-((-(((/* implicit */int) (short)4529))))))));
    var_22 = var_1;
}
