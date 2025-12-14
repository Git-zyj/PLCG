/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97841
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
    var_19 = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8)))) ? (var_15) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
    var_20 ^= ((/* implicit */unsigned short) (+(var_7)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_0] [i_1] [(short)2] [4U] [(_Bool)0])), (((((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [4U] [i_3] [i_4]))) : (arr_8 [i_0] [i_0] [i_0] [i_0]))) / (((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_4] [6LL] [(_Bool)1] [i_0] [i_0])), (996475706))))))));
                                var_22 ^= ((/* implicit */unsigned int) (!((_Bool)1)));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */_Bool) (~(((((arr_6 [i_0] [i_0] [i_1]) | (((/* implicit */unsigned long long int) 877847265)))) & ((~(var_15)))))));
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 3; i_7 < 13; i_7 += 3) 
                {
                    for (unsigned int i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        {
                            arr_24 [i_5] [i_5] [i_7 + 1] [i_5] = ((/* implicit */unsigned int) ((int) arr_22 [i_5] [11] [i_6] [i_5] [(unsigned short)8]));
                            arr_25 [i_5] [i_6] = ((/* implicit */short) (((((+(((/* implicit */int) arr_23 [i_7 + 1] [i_7 - 1] [i_8 + 2] [i_8])))) + (2147483647))) >> (((7629151643798891931LL) - (7629151643798891905LL)))));
                            var_24 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_20 [i_5] [i_6] [(unsigned short)6])) ? (-877847265) : (((/* implicit */int) var_17)))))))));
                            var_25 = ((/* implicit */unsigned int) arr_16 [i_5]);
                            arr_26 [i_6] [i_5] [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(arr_19 [i_5])));
                        }
                    } 
                } 
                arr_27 [i_5] = ((/* implicit */short) max((877847265), (((/* implicit */int) (unsigned char)171))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        {
                            var_26 ^= ((/* implicit */short) var_15);
                            var_27 = ((/* implicit */unsigned short) max((((7995363361883680305ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_10]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_6] [i_6])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
