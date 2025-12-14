/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6288
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
    var_18 = ((/* implicit */unsigned short) min((min((((long long int) var_0)), (min((((/* implicit */long long int) var_7)), (var_3))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_16) ^ (var_11)))))))));
    var_19 = ((/* implicit */unsigned char) ((var_6) >= (max((max((var_16), (var_15))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_5))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_20 |= ((/* implicit */unsigned char) (-(max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1])))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((max((((/* implicit */unsigned long long int) arr_0 [i_0] [2U])), (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0]))))), ((+(max((arr_1 [i_0]), (arr_1 [i_0 - 1])))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (~(min((arr_2 [i_1] [i_1 + 1]), (arr_2 [2LL] [i_1 - 1])))));
        var_22 |= ((/* implicit */unsigned char) min(((+((-(arr_0 [(unsigned short)6] [i_1 - 1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 - 1]))))))))));
        arr_5 [i_1] [i_1] = min((((((arr_2 [i_1] [(unsigned short)9]) ^ (((/* implicit */long long int) arr_0 [(signed char)12] [(signed char)12])))) & (arr_3 [i_1 + 2]))), (max((((/* implicit */long long int) (unsigned char)178)), (-30LL))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_8 [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))))), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_6 [i_2] [(unsigned short)6]), (((/* implicit */unsigned short) arr_7 [i_2] [(signed char)14]))))) && (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) || (((/* implicit */_Bool) arr_6 [i_2] [i_2])))))))));
        arr_9 [i_2] [i_2] |= ((/* implicit */long long int) ((4767290025412530649LL) > (((/* implicit */long long int) 511U))));
    }
}
