/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8584
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7295325527413530767LL)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (unsigned short)27421))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (min((arr_0 [i_0]), (arr_0 [i_0 + 3])))))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0 + 2]) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (arr_1 [i_0 - 2] [i_0])))))) : (((((/* implicit */unsigned long long int) min((arr_1 [i_0 + 3] [i_0 + 1]), (((/* implicit */int) (signed char)-78))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15163))) - (2014311794224384844ULL)))))));
        arr_3 [i_0] = ((/* implicit */short) min((((unsigned int) var_14)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 126941580422393339LL)) || (((/* implicit */_Bool) (unsigned short)65529)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [(short)11]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0 - 1])))) : (((/* implicit */int) arr_2 [i_0 + 1]))))), (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((int) (short)-15164)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14)))) || (((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])))) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)73)), ((unsigned short)1200))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned short) (short)15163);
                                var_19 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) min((arr_1 [i_0 + 2] [i_0 - 2]), (((/* implicit */int) var_10))))) % (((((/* implicit */_Bool) var_13)) ? (arr_10 [(unsigned char)8] [i_3 - 1] [14ULL] [i_2] [i_1] [12]) : (3012383826U))))));
                                arr_15 [i_0] [(short)0] [(short)0] [i_3] [(short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90)))))) ? (((var_4) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)17] [i_2] [i_3 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [10] [i_3 - 2])))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */unsigned short) max((min((((var_14) >> (((arr_1 [(unsigned char)16] [i_1]) + (1994538547))))), (((/* implicit */unsigned long long int) min((877982012U), (((/* implicit */unsigned int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_9 [i_0 - 1] [i_1] [i_1] [(_Bool)1] [i_2]), (((/* implicit */unsigned long long int) var_4))))) && ((!(((/* implicit */_Bool) (signed char)89)))))))));
                    var_21 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)4645))))), (((arr_13 [i_0] [i_1] [i_0 - 3] [i_0 - 3] [i_2] [i_2]) | (((/* implicit */unsigned long long int) 877982012U))))));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */short) arr_9 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0]);
    }
    var_22 = ((/* implicit */short) (unsigned char)236);
}
