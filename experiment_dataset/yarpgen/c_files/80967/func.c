/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80967
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((var_2) - (839002056U)))));
    var_12 = ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_9)))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (arr_1 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_13 -= ((/* implicit */short) ((((/* implicit */int) ((3536894856U) != (3336164934U)))) < (((/* implicit */int) arr_5 [i_0]))));
            var_14 -= ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_1]);
        }
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) arr_0 [i_2]);
        arr_12 [i_2] = ((/* implicit */unsigned int) ((13066387646000746364ULL) - (5380356427708805253ULL)));
        var_15 += ((/* implicit */short) (+(5380356427708805256ULL)));
        var_16 = ((/* implicit */unsigned long long int) arr_2 [i_2]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (arr_13 [i_3] [i_2] [i_2]))))) * (13066387646000746366ULL)));
            arr_15 [i_2] [i_2] [i_3] = ((unsigned int) arr_5 [i_2]);
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) 13066387646000746351ULL);
            var_19 = ((/* implicit */unsigned short) (((~(13066387646000746338ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_20 += ((/* implicit */short) (~(13066387646000746355ULL)));
                var_21 |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_4 - 1])) >= (((/* implicit */int) var_5)))))));
                var_22 = ((/* implicit */unsigned short) arr_0 [i_2]);
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(5380356427708805254ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) : (arr_8 [i_2] [i_4 + 1])));
            }
            /* LoopSeq 1 */
            for (signed char i_6 = 1; i_6 < 20; i_6 += 1) 
            {
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) % ((+(13066387646000746368ULL))))))));
                var_25 = ((/* implicit */_Bool) arr_21 [i_4] [i_4 - 1] [i_4] [i_4 + 1]);
            }
        }
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        arr_30 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5380356427708805257ULL)) ? (((/* implicit */int) arr_17 [i_7])) : (((/* implicit */int) arr_17 [i_7]))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 2; i_8 < 11; i_8 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 13066387646000746380ULL)) ? (13066387646000746373ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_7]))))));
            var_27 = ((/* implicit */unsigned int) ((13066387646000746349ULL) % (13066387646000746365ULL)));
        }
        var_28 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_29 [i_7])) - (13066387646000746368ULL)));
    }
    var_29 = ((/* implicit */long long int) ((unsigned char) 5380356427708805234ULL));
}
