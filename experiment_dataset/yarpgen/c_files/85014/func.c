/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85014
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) ((arr_10 [(signed char)11] [i_1] [i_1] [i_1]) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_3))) << (((((/* implicit */int) arr_11 [i_0 + 3] [i_1] [4U])) - (49955))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)896)))))))))));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_7 [i_2 + 3] [i_0 + 1] [i_0 + 4]))))) ? (((/* implicit */long long int) (-(2104979744U)))) : ((-(-3180021735297084139LL)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_4 + 2] [i_2 + 3] [i_0])) ? (arr_16 [i_4 + 2] [i_2 + 3] [(unsigned short)5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49189)))));
                        var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 3]))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 + 4] [i_2 + 4] [10])) ? (((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 3] [i_4 + 1] [i_2 - 2] [i_0 - 2] [i_0 + 4])) : (((/* implicit */int) var_9)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_14 [i_2] [i_2 + 3] [i_2] [i_2 - 1] [i_2 - 3] [i_2 + 2])))), (((/* implicit */int) arr_11 [i_0] [i_1] [i_0]))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_5 + 3])) / (((var_7) ^ (((/* implicit */int) var_9)))))))));
                                var_19 = (!(((/* implicit */_Bool) var_2)));
                                var_20 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_7 [i_0 + 2] [i_2 + 4] [i_5 + 2])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) arr_16 [i_0] [i_1] [(short)9]);
                    var_22 = ((/* implicit */long long int) var_5);
                    var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_1] [i_1] [i_2] [i_0] [i_1])) ? (134213632) : (((/* implicit */int) var_9))))) ? ((-(var_7))) : (((int) var_11))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((var_0) / (((var_0) * (((/* implicit */int) (signed char)-2))))));
}
