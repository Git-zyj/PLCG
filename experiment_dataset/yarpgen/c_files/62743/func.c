/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62743
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 |= ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1] [i_0]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_0])))))));
            var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [(unsigned char)1] [i_0] [i_0]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))) ? ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : (((((/* implicit */int) arr_10 [i_0] [i_2] [i_3])) << (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                arr_12 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((arr_0 [i_3]), (((/* implicit */unsigned short) arr_10 [i_0] [i_2] [i_3]))))) ? (((((/* implicit */int) (unsigned char)108)) + (((/* implicit */int) arr_1 [(unsigned char)19] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2]))))))), ((~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_2])) >= (((/* implicit */int) arr_9 [i_3] [i_0] [i_0])))))))));
            }
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_2 [i_0] [(unsigned char)12])) - (64511))))) < (((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_1 [(unsigned char)7] [i_2])))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))));
        }
        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (unsigned char i_6 = 3; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) (((((((~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])))) + (2147483647))) >> ((((+(((/* implicit */int) arr_5 [i_4] [i_5] [i_6])))) - (72))))) + ((+(((/* implicit */int) arr_19 [i_6] [i_6 + 1] [i_6 - 3] [i_0]))))));
                        arr_23 [i_0] [i_4] [i_4 + 3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)247))));
                    }
                } 
            } 
            arr_24 [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)24)) == (((/* implicit */int) (unsigned short)31)))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        arr_30 [(unsigned short)1] [i_4] [(unsigned short)15] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0] [i_0] [i_8]))))) ? ((~(((/* implicit */int) arr_17 [i_0] [(unsigned short)1] [i_0] [(unsigned char)20])))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_7] [i_7] [i_8])) >= (((/* implicit */int) arr_21 [i_0] [i_4] [(unsigned char)8] [i_4] [(unsigned char)8] [i_0])))))))));
                        var_20 ^= ((/* implicit */unsigned short) (((~((+(((/* implicit */int) arr_0 [i_0])))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned char)60))))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_2 [i_4 + 2] [i_4 + 2])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_28 [i_0] [i_4] [i_4] [i_0] [i_4] [(unsigned char)4])) - (175)))))))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_9 = 3; i_9 < 16; i_9 += 1) 
    {
        var_22 ^= arr_20 [(unsigned char)7] [i_9] [i_9] [i_9];
        arr_35 [i_9] = ((/* implicit */unsigned char) arr_0 [i_9 - 1]);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_9] [i_9])) < (((/* implicit */int) arr_25 [i_9] [i_9] [i_9] [(unsigned char)2]))))) | (((/* implicit */int) arr_2 [i_9] [i_9 - 1]))));
    }
    var_24 = ((/* implicit */unsigned short) max(((-((+(((/* implicit */int) (unsigned char)130)))))), (((/* implicit */int) var_15))));
    var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_13))))) >= (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_4)))))))));
    var_26 = var_14;
}
