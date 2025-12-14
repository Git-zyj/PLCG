/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9439
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
    var_18 ^= (~(((((/* implicit */_Bool) 1488525485371139246LL)) ? (10072836142497026035ULL) : (((/* implicit */unsigned long long int) -1LL)))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (var_1)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((unsigned long long int) arr_1 [i_0])) : (((((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [18LL])))) * (((/* implicit */unsigned long long int) -1342360137663146086LL))))));
        var_20 += ((9635036987649536760ULL) ^ (7616103811478603243ULL));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_6 [i_1] = max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (6614337988391202559ULL));
        var_21 *= ((/* implicit */unsigned long long int) 9223372036854775807LL);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_9 [i_1] [i_3]))) || (((/* implicit */_Bool) (~((+(arr_8 [i_1]))))))));
                    arr_11 [i_2] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((unsigned long long int) 0ULL))))) ? (((long long int) arr_7 [10ULL] [5ULL] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        arr_14 [2LL] [i_2] [i_2] [i_2] = arr_0 [4LL];
                        var_23 = ((/* implicit */long long int) ((var_16) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11287104056254250943ULL))))))));
                        arr_15 [i_1] [i_2] [7ULL] [i_2] [i_3] [15LL] = arr_3 [i_2] [i_3];
                    }
                    arr_16 [i_3] [i_2] [i_2] [8LL] = ((/* implicit */long long int) arr_10 [i_1] [i_2] [i_2] [i_1]);
                    arr_17 [i_2] [i_2] = ((/* implicit */long long int) (((~(arr_13 [i_3] [i_2] [i_1]))) > (((((/* implicit */_Bool) (~(arr_10 [i_1] [i_1] [19LL] [5ULL])))) ? ((-(arr_9 [i_1] [i_2]))) : (((/* implicit */unsigned long long int) arr_3 [10LL] [0LL]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_1])))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_25 -= ((/* implicit */unsigned long long int) ((11832406085318349047ULL) == (((/* implicit */unsigned long long int) 2305842734335787008LL))));
        arr_20 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_5]))) ? (((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_0 [i_5]) : (10830640262230948375ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1717313979740665853ULL) == (6614337988391202556ULL)))))));
    }
    var_26 = max((((((/* implicit */_Bool) var_0)) ? (var_8) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) var_3)));
}
