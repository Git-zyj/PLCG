/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62205
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((int) arr_6 [i_0]))) ? (((arr_6 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))))) : (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)85))))))));
                            arr_11 [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_3])) != (((/* implicit */int) arr_8 [i_2] [i_2] [2] [i_2])))))) * (arr_10 [i_0] [i_0] [i_0] [i_2] [i_3])))) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [10])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_3]))))) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0])))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned short)7])) : (arr_0 [i_0]))));
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)63892))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_15)))) : (((((/* implicit */_Bool) (~(var_7)))) ? (var_17) : (max((((/* implicit */long long int) var_6)), (var_7)))))));
    /* LoopNest 3 */
    for (unsigned char i_4 = 2; i_4 < 18; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_21 -= ((long long int) min((((/* implicit */unsigned int) min((arr_21 [(unsigned short)0] [i_5]), (arr_21 [i_4] [i_5])))), (min((((/* implicit */unsigned int) arr_21 [i_5] [1LL])), (arr_15 [i_4])))));
                    var_22 ^= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_19 [20LL] [i_5] [i_5]))) >= (((long long int) arr_13 [i_6] [i_4 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6])) ? (((/* implicit */int) arr_13 [(_Bool)0] [i_5 - 1])) : (((/* implicit */int) arr_16 [i_5]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [(unsigned short)20] [(unsigned short)20] [(unsigned short)8])) >> (((/* implicit */int) (unsigned short)14))))) : (((arr_16 [(unsigned char)9]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 + 3] [i_6]))) : (arr_15 [i_5])))))) : (((long long int) (unsigned short)42113))));
                }
            } 
        } 
    } 
}
