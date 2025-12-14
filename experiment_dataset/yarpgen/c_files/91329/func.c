/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91329
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_8))));
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (-103256211))) : (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_8)) - (36))))))) << (((var_4) - (1602970275)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_13 *= ((/* implicit */signed char) ((((((/* implicit */int) var_0)) <= (((/* implicit */int) var_6)))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [5U])) + (2147483647))) >> (((var_9) + (3841127861958357037LL))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        arr_4 [i_0 - 2] [i_0] = ((/* implicit */short) ((var_3) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (54043195528445952LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (var_4))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (arr_0 [i_0 + 1] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)8] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_1 [(unsigned short)4] [i_1])) : (7583373052650260350ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [7U] [i_1 - 2])) ? (arr_5 [(unsigned short)9] [(unsigned short)9]) : (((/* implicit */int) arr_2 [i_1]))))) : (var_2)));
        var_16 = ((/* implicit */unsigned int) var_0);
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) arr_8 [i_2] [i_1]);
            arr_11 [i_2] [i_1] = ((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1])) ? (arr_7 [i_1]) : (var_10))))));
            var_18 |= ((/* implicit */signed char) ((arr_8 [i_1 + 1] [i_1 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        }
    }
    var_19 = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 4294967286U)) : (var_10))) < (min((((/* implicit */long long int) var_7)), (54043195528445969LL))))))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (max((((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (var_2))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_6)) & (((/* implicit */int) var_5))))))), ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_1)))))))));
}
