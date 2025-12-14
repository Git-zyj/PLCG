/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79407
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_8 [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) arr_3 [i_1]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1807273464)))))))) : ((((!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1] [3])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)63232))))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) min((((8444249301319680ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))))), (((/* implicit */unsigned long long int) ((((int) arr_1 [(signed char)11])) / (((((/* implicit */int) (signed char)2)) + (1800735343))))))));
                    arr_10 [i_2] [(unsigned short)14] [i_2] [i_2] = min((49152), (((/* implicit */int) var_15)));
                }
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 14; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_17)))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                            {
                                var_21 &= ((((((/* implicit */int) arr_11 [i_0])) & (-1800735324))) >> ((((~(((/* implicit */int) (signed char)63)))) + (86))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)210)) % (((/* implicit */int) (unsigned short)65532))));
                            }
                            var_23 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) var_15)) ? (-1154929407) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) arr_12 [i_3] [i_1 - 1] [i_0])))))))));
                            arr_18 [i_4] = ((/* implicit */unsigned short) 1800735343);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */int) var_12)) > ((+(((/* implicit */int) (signed char)-10))))));
}
