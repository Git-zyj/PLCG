/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61836
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = min((469762048), (((/* implicit */int) ((min((((/* implicit */unsigned int) (signed char)-36)), (3717576885U))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) > (((/* implicit */long long int) 577390416U)))))) <= (3717576879U)))) < (((/* implicit */int) ((max((var_18), (((/* implicit */unsigned long long int) -4183830880881440322LL)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) == (4160973024U))))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) > (min((((/* implicit */long long int) var_12)), (arr_1 [i_0] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 577390416U)) ? (((/* implicit */long long int) 577390411U)) : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */signed char) ((1071584747706977797ULL) >= (((/* implicit */unsigned long long int) arr_1 [i_1] [(unsigned char)16])))))));
        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_17)))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_1])) <= (0ULL)))))))) != (min((((/* implicit */long long int) (+(4095)))), (min((((/* implicit */long long int) arr_5 [(_Bool)1])), (arr_6 [i_1])))))));
        var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (((arr_0 [i_1]) & (arr_0 [i_1])))));
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 24; i_2 += 3) 
        {
            var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_1)), (arr_8 [(unsigned char)19])));
            arr_10 [14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 - 1])) ? (max((((/* implicit */unsigned int) arr_4 [i_2 + 1] [i_2 - 2])), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2 + 1])))));
        }
        var_24 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) arr_4 [i_1] [i_1])), (1014311021059003248LL))))), (min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (2277949517U)))), (arr_0 [i_1])))));
    }
    var_25 = ((/* implicit */signed char) max((2147483648U), (((/* implicit */unsigned int) (_Bool)1))));
}
