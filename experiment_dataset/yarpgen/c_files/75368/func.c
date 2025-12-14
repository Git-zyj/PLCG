/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75368
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
    var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58985)) || (((/* implicit */_Bool) var_7))))), (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6))) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    var_16 = ((/* implicit */unsigned long long int) (unsigned short)6551);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max(((-(var_6))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)6551))))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_19 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 + 4] [10ULL]))))), (max((((/* implicit */long long int) var_10)), (arr_3 [i_0] [i_1 + 4] [i_1])))));
            arr_5 [(signed char)9] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned long long int) (unsigned short)58984)), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))) ? (((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) + (arr_3 [i_1 + 3] [i_1] [i_1 + 4]))) : (((/* implicit */long long int) (((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) * (max((-2068509032), (((/* implicit */int) var_0)))))))));
            var_20 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_1)))), (max((arr_3 [i_1] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0])))))));
        }
        /* vectorizable */
        for (signed char i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_4 [i_2] [i_0] [i_0]))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (((unsigned long long int) arr_8 [i_0] [i_0] [i_0])))))));
            arr_9 [i_0] [i_2] [(short)14] = ((/* implicit */unsigned long long int) var_14);
        }
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            arr_12 [i_3] = ((/* implicit */short) (-(((min((((/* implicit */unsigned long long int) -1731520165)), (arr_10 [i_0]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16204)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58985)))))))));
            var_23 ^= var_7;
            arr_13 [i_0] = ((/* implicit */unsigned char) (unsigned short)6525);
        }
        var_24 = ((/* implicit */signed char) arr_8 [i_0] [18ULL] [i_0]);
    }
}
