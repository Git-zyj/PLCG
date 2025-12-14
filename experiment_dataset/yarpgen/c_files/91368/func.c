/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91368
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
    var_10 = ((/* implicit */int) ((651980414269521678ULL) << (((((/* implicit */int) (unsigned short)15551)) - (15517)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (unsigned short)37954))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_9);
    }
    for (int i_1 = 3; i_1 < 24; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_5 [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 3]))))));
        var_12 = ((/* implicit */int) ((_Bool) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) arr_7 [i_1])))));
        var_13 = ((/* implicit */_Bool) min((min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) >= (-5012332785115896537LL)))), (1512830546))), (((/* implicit */int) var_0))));
        arr_9 [i_1] = ((/* implicit */long long int) arr_6 [i_1]);
        var_14 = ((/* implicit */long long int) (~((+(((/* implicit */int) min((arr_6 [5LL]), (((/* implicit */signed char) var_0)))))))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (0U))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_2] [i_2]))) && (((/* implicit */_Bool) -1512830538))));
        arr_14 [i_2] = ((/* implicit */unsigned long long int) -17);
        arr_15 [i_2] = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_13 [i_2] [(unsigned char)5])) : (((/* implicit */int) arr_13 [i_2] [i_2])))) : (((/* implicit */int) arr_7 [i_2])));
    }
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
    {
        arr_18 [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1512830546)))))) : (var_4)));
        /* LoopSeq 1 */
        for (long long int i_4 = 3; i_4 < 13; i_4 += 4) 
        {
            arr_21 [i_3] = ((/* implicit */int) ((unsigned long long int) var_4));
            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_3 + 1]))));
            arr_22 [(unsigned char)8] &= ((/* implicit */_Bool) arr_19 [i_3]);
            var_18 = ((/* implicit */long long int) arr_5 [10U]);
        }
        var_19 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_9))))));
    }
}
