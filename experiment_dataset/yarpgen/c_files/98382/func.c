/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98382
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_13);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            var_17 &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))))), (((unsigned char) (unsigned short)46084))));
            arr_5 [(signed char)14] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65521)) && (((((/* implicit */int) (unsigned short)19449)) >= (arr_0 [i_1 - 2] [i_1 - 2])))));
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_18 ^= ((/* implicit */short) arr_12 [i_0] [i_3]);
                            arr_15 [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_4);
                            arr_16 [i_0] [i_3] [i_0] [i_0] &= (short)5832;
                            var_19 &= (+(((((/* implicit */int) arr_9 [i_2 + 3] [(signed char)10] [i_2 - 1] [i_3])) + (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_3])))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_20 -= ((/* implicit */unsigned char) (short)0);
                            var_21 = ((/* implicit */_Bool) ((short) (~(min((((/* implicit */unsigned long long int) (unsigned short)64760)), (11906348627910927545ULL))))));
                        }
                        var_22 = ((/* implicit */signed char) arr_6 [i_1] [i_1] [i_1] [i_1]);
                        var_23 = ((/* implicit */long long int) ((short) ((797950102) | (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)64754))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            var_24 *= ((/* implicit */unsigned long long int) var_5);
                            arr_22 [i_0] [i_1] [i_0] [i_1] [i_2] [16] [i_6] = (~((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (2LL)))))));
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)43690)) & (((/* implicit */int) (unsigned char)1)))) >> (((/* implicit */int) (!((_Bool)0))))))) ? (((int) min((((/* implicit */long long int) arr_21 [i_0])), (var_12)))) : (((((/* implicit */_Bool) arr_7 [(short)16] [i_0] [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_0)))) : ((~(((/* implicit */int) var_1))))))));
            var_26 -= ((/* implicit */long long int) (unsigned short)776);
        }
        arr_23 [i_0] [i_0] = ((/* implicit */short) (((((~(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (short)18854)))) & (((/* implicit */int) var_14))));
    }
    var_27 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))));
}
