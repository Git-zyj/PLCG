/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6914
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = (-(arr_2 [i_0] [i_1]));
            arr_5 [3U] [3U] = ((/* implicit */unsigned int) (+((~(-1061631721)))));
            arr_6 [i_0] [5LL] [i_1] = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_1]));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
            {
                arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */long long int) (~(arr_3 [i_2 - 1] [i_1])))) : (var_15)));
                arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) 620819544675740266LL));
            }
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_3] = ((/* implicit */long long int) ((unsigned int) arr_12 [i_3] [i_3] [i_3 - 1] [i_0]));
                arr_14 [i_3] [i_0] [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned long long int) ((long long int) arr_12 [i_1] [12LL] [i_3 - 1] [i_3 - 1]));
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_3] [i_5 - 1] = ((/* implicit */int) (-(arr_17 [i_0] [i_1] [i_3] [i_3] [i_4] [i_3])));
                            arr_22 [i_0] [i_1] [14] [i_3] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_3] [i_4 - 2]))));
                            arr_23 [i_3] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */int) ((arr_17 [i_1] [i_1] [i_5 + 1] [i_3 + 1] [5U] [i_4 + 2]) % (620819544675740266LL)));
                            arr_24 [i_5 + 1] [2LL] [i_4] [i_3] [i_1] [i_1] [7ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1061631721)) ? ((+(arr_16 [16U] [i_1] [i_3] [i_4] [1LL] [i_5 + 1]))) : ((~(arr_16 [i_0] [i_0] [i_1] [i_1] [i_0] [i_5])))));
                        }
                    } 
                } 
                arr_25 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3 - 1]);
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    arr_28 [(unsigned char)4] [8] [i_3] = ((/* implicit */unsigned short) arr_18 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_6 + 1]);
                    arr_29 [i_3] [i_3] = ((/* implicit */unsigned int) ((long long int) var_16));
                    arr_30 [8LL] [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_3 - 1] [i_6]))));
                }
            }
        }
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            arr_34 [i_7] [i_0] = ((/* implicit */unsigned long long int) (((((((+(7980546395511795521LL))) | (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))) + (9223372036854775807LL))) >> ((((~((-(((/* implicit */int) var_10)))))) - (63)))));
            arr_35 [5] [i_7] [i_7] = ((((/* implicit */_Bool) 6442714984463713313ULL)) ? (((/* implicit */int) ((arr_27 [i_0] [i_0] [i_7] [i_7]) != (-620819544675740269LL)))) : (((/* implicit */int) ((((unsigned long long int) -620819544675740267LL)) != (var_19)))));
        }
        arr_36 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
    {
        arr_39 [i_8] = ((/* implicit */long long int) ((862864851U) >= (min((((/* implicit */unsigned int) var_10)), (((unsigned int) var_3))))));
        arr_40 [i_8] = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) var_0)));
        arr_41 [i_8] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_0 [i_8])) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_2)))) ? (min((-5698544978231446150LL), (((/* implicit */long long int) arr_20 [i_8] [i_8] [i_8] [i_8])))) : (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))))));
        arr_42 [i_8] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) arr_8 [i_8] [i_8])), (4294967295U))) == (((/* implicit */unsigned int) min((((/* implicit */int) arr_8 [i_8] [i_8])), (-1061631700))))));
    }
    var_20 = var_8;
}
