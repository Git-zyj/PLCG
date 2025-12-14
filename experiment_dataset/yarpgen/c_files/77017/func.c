/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77017
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((short) ((signed char) arr_1 [i_0] [i_0])));
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_1] [i_0])));
        }
        arr_8 [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (11256006833464882995ULL))));
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (unsigned short)6800)) : (((/* implicit */int) (unsigned char)78)))) | (((/* implicit */int) ((unsigned short) 131071LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_2]), (arr_9 [i_2]))))) : (-7175927281703865429LL)));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((int) ((_Bool) arr_11 [i_2])));
        var_16 = ((unsigned short) arr_10 [i_2]);
        arr_13 [17U] = ((/* implicit */_Bool) max((7175927281703865419LL), (((/* implicit */long long int) ((((/* implicit */_Bool) -131072LL)) ? (((((/* implicit */int) arr_11 [i_2])) ^ (((/* implicit */int) (unsigned char)235)))) : (((/* implicit */int) arr_10 [i_2])))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_17 [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3])) ^ (((/* implicit */int) arr_11 [i_3]))))) ? (9843389293043542089ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))));
        arr_18 [i_3] = ((131072LL) > (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_3]), (arr_3 [i_3]))))));
    }
    var_17 -= ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) ((_Bool) (unsigned char)177)))));
    var_18 = ((/* implicit */int) ((((unsigned long long int) var_0)) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (131063LL)))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        arr_22 [(unsigned char)6] = ((/* implicit */unsigned char) ((long long int) arr_11 [i_4]));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_4]), (arr_10 [i_5]))))) + (min((((/* implicit */long long int) arr_21 [i_4])), (9223372036854775807LL)))));
            /* LoopSeq 3 */
            for (int i_6 = 4; i_6 < 23; i_6 += 2) 
            {
                var_20 &= ((/* implicit */signed char) arr_20 [i_4]);
                var_21 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_11 [i_6 - 4])) * (((/* implicit */int) arr_11 [i_6 - 1])))));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    arr_32 [i_4] [i_5] [i_6 - 4] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_33 [i_4] [i_5] [(signed char)15] = ((/* implicit */unsigned short) arr_11 [i_4]);
                }
            }
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                arr_36 [i_4] [i_5] [i_8] = ((/* implicit */int) arr_28 [i_4] [i_5] [i_5] [i_8] [12ULL]);
                arr_37 [i_4] [0U] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_8]))) ? (((unsigned long long int) arr_24 [i_8] [i_4])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_35 [i_4] [i_5] [i_8] [i_4]), (arr_35 [i_8] [i_5] [i_4] [i_4])))))));
                arr_38 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) 4316624171960670915ULL))) ^ (-116750897)));
            }
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                arr_42 [i_9] [i_5] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)6800)), (((arr_30 [i_9] [i_9] [i_5] [i_4]) ? (((/* implicit */int) arr_30 [i_5] [i_5] [i_9] [i_9])) : (((/* implicit */int) (signed char)20))))));
                arr_43 [i_4] [(signed char)12] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -131072LL)) || (((/* implicit */_Bool) -7323883990348220918LL)))))) ^ (7175927281703865413LL)));
                arr_44 [i_5] = ((/* implicit */_Bool) ((arr_34 [i_4] [i_5]) ? (((long long int) arr_34 [i_5] [i_9])) : (((/* implicit */long long int) ((int) arr_34 [i_4] [i_4])))));
            }
        }
        /* vectorizable */
        for (short i_10 = 1; i_10 < 21; i_10 += 3) 
        {
            var_22 = ((/* implicit */long long int) arr_9 [i_10 - 1]);
            arr_47 [i_4] [i_10] [i_10 + 1] = ((/* implicit */unsigned long long int) 131064LL);
            var_23 = ((/* implicit */_Bool) -1907426938);
            var_24 -= ((/* implicit */unsigned int) ((unsigned long long int) arr_40 [i_10 - 1] [i_4]));
        }
        arr_48 [i_4] = ((/* implicit */signed char) 131082LL);
    }
}
