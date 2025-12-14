/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70529
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
    var_18 *= ((/* implicit */long long int) ((var_17) != (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (signed char)124)))), ((~(((/* implicit */int) var_14)))))))));
    var_19 = ((/* implicit */short) var_0);
    var_20 = ((/* implicit */short) ((signed char) var_10));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_21 |= ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) (unsigned char)255)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_22 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) (~(-2088442179)))) != (((((/* implicit */_Bool) -5134597450788080211LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_2 [i_2 - 2] [(unsigned char)11]))))))));
                            arr_10 [i_0] [i_0] [i_2] [i_3] |= ((/* implicit */long long int) ((131071) * (((/* implicit */int) (short)0))));
                        }
                    } 
                } 
                var_23 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_3 [i_0]))))));
                var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) -131072))))), ((+(((/* implicit */int) (unsigned short)16368))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_25 = ((min((131070), (arr_17 [i_5] [i_5] [i_5] [(_Bool)1] [(_Bool)1]))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)37237)))) == (((((/* implicit */_Bool) var_16)) ? (254U) : (((/* implicit */unsigned int) 131045))))))));
                            arr_18 [i_5] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-664)) ? (((/* implicit */int) (unsigned char)65)) : (-1998955817)))) ^ (2906146501U))) * (((/* implicit */unsigned int) min((((/* implicit */int) ((short) var_1))), (var_8))))));
                            arr_19 [i_0] [i_1] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5] [i_5] [23U])) ? (((/* implicit */int) arr_16 [i_5] [i_5] [i_4] [i_5] [i_4])) : (-131063))), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))));
                            arr_20 [i_4] [i_1] [i_5] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 131071)) ? (((/* implicit */unsigned int) 131072)) : (598111995U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 -= ((/* implicit */unsigned int) var_13);
}
