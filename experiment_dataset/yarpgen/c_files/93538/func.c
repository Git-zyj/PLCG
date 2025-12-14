/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93538
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
    var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) << ((((~(-5340540101404492878LL))) - (5340540101404492869LL)))));
    var_11 = ((/* implicit */short) var_1);
    var_12 |= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)-19255)) ? (max((-6777765693455665119LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)125))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_9))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            var_13 = ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]);
            var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2] [i_1 + 1])) & (((((/* implicit */int) min((var_5), (var_9)))) & (((/* implicit */int) (unsigned short)64551))))));
        }
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_0))));
            arr_9 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(-1086534384))))));
            var_16 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])), (((unsigned int) (_Bool)1)))));
        }
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_17 &= ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (signed char)127)))), (var_2)));
        var_18 = var_4;
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_12 [i_3] [i_4])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((/* implicit */int) (signed char)-104))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                arr_16 [i_3] [4LL] [i_5 - 1] &= ((/* implicit */long long int) ((short) var_3));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(unsigned char)8] [i_3] [i_5 - 1] [i_5 - 1])) ? (arr_12 [i_5 - 1] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            }
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))))) : ((+(((((/* implicit */int) var_5)) & (((/* implicit */int) var_0))))))));
                        var_22 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_6))))))));
                    }
                } 
            } 
            arr_21 [i_3] = ((/* implicit */long long int) ((min((((/* implicit */int) ((((/* implicit */int) (signed char)-116)) >= (((/* implicit */int) arr_15 [i_3] [i_4] [i_4] [i_4]))))), ((-(((/* implicit */int) (short)26762)))))) == (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_8))) == (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1))))))))));
            arr_22 [i_3] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_20 [i_3] [i_3] [i_3])))));
        }
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        var_23 = ((/* implicit */short) (unsigned short)50421);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    arr_30 [(signed char)6] [i_9] [i_8] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-512))));
                    arr_31 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-114)) || (((/* implicit */_Bool) var_8))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) -4LL);
        /* LoopSeq 1 */
        for (unsigned char i_11 = 1; i_11 < 10; i_11 += 4) 
        {
            var_25 = arr_32 [i_8] [i_11] [i_8];
            var_26 = (~((-(var_8))));
        }
    }
}
