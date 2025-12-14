/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92207
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)12)) & (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) arr_5 [i_0] [i_1]))));
            var_12 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0]))) : (arr_5 [i_0] [i_1]));
            arr_6 [i_1] [i_1] = ((/* implicit */int) arr_2 [i_0]);
            arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (18446744073709551615ULL)));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_5 [i_0] [i_1]);
        }
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))));
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) -156234216)) ? (((/* implicit */unsigned long long int) 0U)) : (15204957859398116940ULL)));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -156234216)) ? (3093363867U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30116)))));
        arr_13 [(unsigned char)5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_11 [i_2] [i_2]) : (((/* implicit */int) (short)-24500))))) ? (((/* implicit */long long int) ((3093511365U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2]))) * (1023LL))))) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2])))));
        var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 421021875U)) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_9)))) : ((((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((arr_10 [i_2]), (((/* implicit */unsigned char) var_4)))))))));
    }
    for (unsigned int i_3 = 4; i_3 < 19; i_3 += 2) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_15 [i_3])))) : (((((/* implicit */int) arr_15 [i_3])) ^ (((/* implicit */int) arr_14 [i_3] [i_3]))))))) : (-5737178635112664356LL)));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) 13245802703916922276ULL);
        var_17 *= ((/* implicit */unsigned char) var_1);
    }
    var_18 += ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_19 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 156234224)) ? (((/* implicit */int) arr_19 [i_4] [17U])) : (((/* implicit */int) arr_19 [i_4] [(signed char)14])))) + (2147483647))) << (((((((/* implicit */int) var_7)) + (99))) - (6)))));
        arr_20 [i_4] = ((/* implicit */unsigned int) arr_14 [i_4] [i_4]);
    }
}
