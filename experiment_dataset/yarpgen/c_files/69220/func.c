/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69220
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((long long int) arr_0 [i_0 + 1])) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))))));
        var_15 = ((/* implicit */_Bool) ((signed char) ((long long int) arr_1 [i_0] [i_0 - 1])));
    }
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_1] [i_1 - 2])), (arr_3 [(unsigned short)13])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_1 + 2] [i_1 + 2])), (arr_3 [16])))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))))))) ? (min((((/* implicit */int) max((arr_2 [i_1] [i_1 + 1]), (((/* implicit */unsigned short) arr_3 [i_1 + 2]))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [(signed char)8])) : (((/* implicit */int) arr_1 [i_1] [i_1])))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_1 + 1])), (arr_3 [i_1 + 1]))))));
        arr_4 [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1])), (max((arr_2 [i_1] [i_1 + 1]), (((/* implicit */unsigned short) arr_3 [i_1]))))))) > (max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1])))), (((/* implicit */int) arr_0 [i_1]))))));
    }
    var_17 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) -4941210449735822949LL)) ? (((((/* implicit */_Bool) 3908806874285366739LL)) ? (1635208810U) : (1635208796U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120)))))))), (2659758493U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        arr_7 [i_2] = (((!(((/* implicit */_Bool) (short)13390)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 3] [i_2 - 1]))) : (((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_2])) ? (arr_6 [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_6 [(unsigned short)9]))) ? (((arr_8 [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 1]))))) : (((((/* implicit */_Bool) arr_2 [i_2] [i_3])) ? (arr_8 [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 3] [i_3])))))));
            var_19 = ((/* implicit */_Bool) arr_1 [i_2] [i_2]);
            var_20 += ((/* implicit */_Bool) arr_5 [i_3] [i_2 - 2]);
        }
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_8 [i_2 + 1])) % (arr_6 [i_2])))) ? (((arr_8 [i_2]) | (arr_5 [i_2] [i_2]))) : (arr_8 [i_2])));
    }
    var_22 = ((/* implicit */signed char) var_1);
    var_23 = ((/* implicit */_Bool) max((((max((((/* implicit */unsigned long long int) var_11)), (var_2))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((((/* implicit */_Bool) min((((/* implicit */short) var_9)), (var_13)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_2))) : (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) var_9)))))))));
}
