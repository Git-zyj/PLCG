/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84083
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
    var_12 = ((/* implicit */unsigned char) var_2);
    var_13 = ((/* implicit */signed char) max((((/* implicit */int) var_3)), ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_1 [i_1]), (arr_1 [i_1])))))))));
                var_15 |= ((/* implicit */signed char) ((((/* implicit */int) min((((short) arr_1 [i_1])), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [(signed char)10])) <= (((/* implicit */int) (short)-27138)))))))) >= (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), (arr_2 [i_1] [i_1] [i_1])))) : (((/* implicit */int) max(((unsigned char)111), (((/* implicit */unsigned char) (_Bool)1)))))))));
                var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-59))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) (unsigned char)81))))))) & ((~(((/* implicit */int) arr_2 [i_1] [i_1] [i_1])))))))));
                    var_18 *= ((/* implicit */unsigned int) arr_8 [i_2]);
                    var_19 |= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-113)) - (((/* implicit */int) (signed char)(-127 - 1)))))) + (((((/* implicit */_Bool) (unsigned char)9)) ? (var_11) : (var_11)))))));
                    var_20 -= ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_8 [i_2]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_11)))))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_4 [i_0] [i_0 - 2]))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    arr_13 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_0 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 - 2] [i_0 + 4]))) : (var_11)));
                    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1771348593U)) ? ((+(((/* implicit */int) (short)-13057)))) : ((+(((/* implicit */int) arr_7 [i_1]))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) var_3);
                                arr_22 [i_0] [i_0] [i_3] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) arr_21 [i_5] [i_1] [i_3]))))) : (((/* implicit */int) arr_10 [i_0] [i_1] [(short)12]))));
                            }
                        } 
                    } 
                }
                for (signed char i_6 = 3; i_6 < 13; i_6 += 1) 
                {
                    var_23 = ((/* implicit */short) max((min(((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_6])))), (((/* implicit */int) arr_24 [i_0 + 3])))), ((((+(((/* implicit */int) (unsigned char)255)))) * (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_15 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0] [i_1] [(_Bool)1]))))))));
                    var_24 ^= ((/* implicit */signed char) arr_16 [i_1] [i_6 - 2] [i_6 - 3]);
                }
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_2);
}
