/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83596
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_16 = max((((((/* implicit */_Bool) ((long long int) (unsigned char)97))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_3 [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_8 [i_0] [(unsigned char)9] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (signed char)-114))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_6 [i_0]))));
                            arr_20 [i_0] [i_4] [i_2 - 1] [i_3] [i_4] [i_0 + 3] [(_Bool)1] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) (((((~(arr_12 [i_0] [i_1] [i_0]))) + (9223372036854775807LL))) << ((((-(arr_1 [i_0]))) - (10843892244371932279ULL)))))) : (((/* implicit */unsigned short) (((((~(arr_12 [i_0] [i_1] [i_0]))) + (9223372036854775807LL))) << ((((((-(arr_1 [i_0]))) - (10843892244371932279ULL))) - (13205386997653237913ULL))))));
                            arr_21 [i_0] = ((/* implicit */_Bool) var_14);
                        }
                    } 
                } 
            } 
        }
        arr_22 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (((~(((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))) == (max((arr_9 [i_0]), (((/* implicit */int) var_1))))))) << (((2944596143U) - (2944596123U)))));
        arr_23 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-1815788151)))) && (((/* implicit */_Bool) (signed char)-101))))), (max((((unsigned long long int) arr_18 [i_0] [5] [i_0] [5] [i_0] [i_0])), (((/* implicit */unsigned long long int) ((70368744177660LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)17762))))))))));
        arr_24 [i_0] = max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))), (arr_7 [i_0] [i_0] [i_0]));
    }
    var_18 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) / (23ULL))) < ((((_Bool)1) ? (23ULL) : (var_11))))))));
}
