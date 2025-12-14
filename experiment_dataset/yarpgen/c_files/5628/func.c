/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5628
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)39159)))))) : (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (short)11666)) : (((/* implicit */int) arr_2 [i_2])))))))));
                arr_8 [i_0] [(unsigned short)11] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [(signed char)7] [i_1] [i_2] [i_0 + 2]))));
            }
            for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)255))) : (17592186044415LL)));
                var_21 = ((/* implicit */unsigned short) arr_4 [i_0 - 2]);
                arr_13 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_3 [i_3] [i_1] [i_0])))) ? (arr_3 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-273)))));
                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (short)255))));
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0 + 2] [i_0 + 2] [i_4] [i_5])) << (((((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_5] [i_5])) - (63)))));
                        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0] [i_4])) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_6 = 3; i_6 < 14; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_6] [i_1]))) : (arr_16 [i_0 + 4] [i_0] [i_0] [i_1])));
                        var_26 -= arr_17 [i_0] [8U] [8U] [i_7] [i_7] [i_1];
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((unsigned short) arr_3 [i_0] [i_0 + 3] [i_0 + 3])))));
                    }
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    {
                        arr_32 [(unsigned short)4] [i_8] [(signed char)4] [i_8] [i_8] [(unsigned short)4] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-34))));
                        var_28 = ((/* implicit */int) 7266456745501607987ULL);
                        var_29 = ((/* implicit */unsigned char) var_3);
                    }
                } 
            } 
            var_30 &= ((/* implicit */long long int) var_0);
            var_31 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        }
        var_32 += ((arr_21 [(short)6]) - (arr_21 [(unsigned short)4]));
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        arr_36 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2031616LL)) ? (8975144377163005012LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-40)))));
        arr_37 [i_11] [i_11] = ((/* implicit */unsigned short) (+(arr_9 [i_11] [i_11])));
    }
}
