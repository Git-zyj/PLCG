/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87981
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
    var_17 |= ((((/* implicit */_Bool) (unsigned char)28)) ? (min((((/* implicit */long long int) max((-862189733), (((/* implicit */int) var_12))))), ((-(17944029765304320LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 17944029765304320LL))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (short)10056)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((long long int) min((-17944029765304320LL), (((/* implicit */long long int) arr_12 [i_0] [i_1] [17] [i_3] [i_4]))));
                            var_19 *= max((((/* implicit */unsigned long long int) min((max((-17944029765304320LL), (17944029765304320LL))), (((/* implicit */long long int) var_7))))), (max((((/* implicit */unsigned long long int) (unsigned short)47075)), (var_14))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_13 [i_0] [i_1] [i_1] [(signed char)15] [7U] [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [14U])))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_4 [i_0] [i_4]))) && (((/* implicit */_Bool) 2147483631)))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned short)1] [(short)7] [i_0])) & (var_1)));
                            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3] [i_5])) ? (-17944029765304320LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(unsigned short)2] [8])) ? (arr_1 [4ULL] [i_1]) : (arr_1 [i_0] [i_2])));
                        }
                        var_24 &= ((/* implicit */_Bool) -457347004712994487LL);
                        arr_20 [i_3] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) arr_1 [i_0] [i_3]);
                    }
                    arr_21 [i_1] [i_1] [(unsigned short)3] = min((min((arr_6 [i_0] [i_1]), (arr_6 [i_0] [i_2]))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_6 [i_0] [i_1]) : (arr_6 [i_1] [i_2]))));
                    arr_22 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (+(-8394828959563701043LL)));
                }
            } 
        } 
    } 
    var_25 *= ((/* implicit */unsigned short) (~(-5969578712466114982LL)));
}
