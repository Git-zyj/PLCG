/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/792
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (arr_0 [(short)10] [8])))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) (unsigned char)101))))))) * (((/* implicit */int) arr_1 [(unsigned char)5]))));
        var_14 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)30268)))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_15 &= ((/* implicit */int) var_7);
        var_16 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_1)), (3943536593882549034LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (var_11) : (var_5))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_17 |= (+(((/* implicit */int) var_1)));
                var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-11949))) & (arr_5 [i_2] [i_2])))) ? (((/* implicit */int) (short)11961)) : (((/* implicit */int) arr_1 [i_2]))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 2; i_4 < 16; i_4 += 1) 
                {
                    arr_14 [i_2] [i_3] [i_3] = ((/* implicit */short) var_12);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_19 += (~(((/* implicit */int) var_4)));
                        arr_17 [i_5] [i_3] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_2] [15] [i_2] [i_2])) ? (((/* implicit */unsigned int) var_10)) : (arr_15 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 2])));
                        arr_18 [i_2] [i_2] [i_3] [i_5] = ((((/* implicit */_Bool) (short)-11949)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [(short)1] [(signed char)5] [i_4 - 2])) ? (arr_11 [i_3] [i_4 - 2] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            arr_27 [i_3] [i_3] = ((/* implicit */signed char) arr_23 [i_2]);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_3] [9]))))) > (((/* implicit */int) var_2))));
                        }
                        for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_22 ^= ((/* implicit */unsigned long long int) ((arr_26 [i_2] [i_2] [i_4 - 1]) && (arr_26 [i_6] [i_6] [i_4 - 2])));
                            var_23 = ((/* implicit */_Bool) (short)-2688);
                        }
                        for (unsigned int i_9 = 1; i_9 < 16; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_8)))) ? ((+(2290676856U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
                            arr_34 [i_2] [(_Bool)1] [i_4] [0U] [i_2] |= ((/* implicit */long long int) ((int) arr_4 [i_4 + 1]));
                            var_25 |= (((-(((/* implicit */int) arr_26 [3U] [(unsigned char)16] [i_9])))) & ((-(((/* implicit */int) var_12)))));
                            var_26 = ((/* implicit */unsigned char) var_4);
                        }
                        var_27 = var_5;
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((arr_11 [i_4 + 1] [i_6] [i_6]) & (((/* implicit */unsigned long long int) (+(7894719906041945755LL)))))))));
                    }
                }
            }
        } 
    } 
}
