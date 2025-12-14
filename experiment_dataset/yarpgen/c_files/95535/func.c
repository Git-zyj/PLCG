/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95535
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
    var_20 = ((/* implicit */int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >= (var_13)))), (max((2026844251U), (((/* implicit */unsigned int) (unsigned char)10)))))) << (((max((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 6630840176732883272ULL)) || (((/* implicit */_Bool) -9223372036854775801LL))))))) - (7683836351678101421LL)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_12 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_4 [(unsigned char)1] [i_1])))))) / (arr_1 [i_0 + 1]))) < (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_14 [i_0 + 1] [(_Bool)1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (var_13))))))));
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (-((+(((/* implicit */int) arr_2 [i_1 + 2]))))));
                                var_22 = ((/* implicit */long long int) ((((arr_3 [i_0 + 1]) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_3])) << (((((/* implicit */int) arr_2 [i_3])) - (71)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))))) : (arr_1 [i_0]))) + (5956761119990695209LL)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) (-(((((((var_15) * (((/* implicit */int) var_14)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_2]))))) - (1)))))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((6630840176732883272ULL) << ((((((-2147483647 - 1)) - (-2147483615))) + (68))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)11231)))))));
        /* LoopNest 3 */
        for (long long int i_5 = 4; i_5 < 12; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_27 [i_0] [i_5 - 4] [6] [i_6] [(_Bool)1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((arr_8 [11LL] [i_6 + 1] [i_0 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 1] [i_5 - 4] [6LL] [6LL])))))) ? (((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (arr_16 [i_5] [i_7]) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_26 [3U] [i_7] [i_6 + 1] [9] [i_5] [11LL])), (var_0)))))))));
                        var_25 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_5 + 2] [i_0 + 1] [i_6 + 1])) << (((var_15) + (1011509999)))))) ? (((((/* implicit */int) var_6)) * ((-(((/* implicit */int) arr_9 [i_5 - 4])))))) : (((/* implicit */int) arr_15 [i_5 - 3] [i_5] [(short)11] [i_5 + 1])));
                    }
                } 
            } 
        } 
    }
}
