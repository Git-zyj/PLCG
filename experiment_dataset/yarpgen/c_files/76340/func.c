/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76340
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
    var_15 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        arr_3 [7U] [i_0] = max((max((((/* implicit */unsigned long long int) (unsigned short)0)), (13ULL))), (((/* implicit */unsigned long long int) ((max((arr_1 [i_0]), (arr_1 [0]))) < (max((arr_1 [4ULL]), (((/* implicit */int) arr_2 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0 - 1]) - (max((arr_1 [i_0 - 1]), (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [8U])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 *= ((/* implicit */unsigned short) ((int) max((arr_5 [i_0 + 1]), (((/* implicit */unsigned int) min((arr_9 [i_2] [i_1]), (arr_9 [i_0] [i_2 - 2])))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) ((long long int) arr_8 [11ULL]));
            var_18 = ((/* implicit */_Bool) arr_12 [i_0]);
        }
        arr_15 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_0] [i_0 - 2])) >> (((min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_5 [i_0]))) - (65110081U))))) - (((/* implicit */int) ((((((/* implicit */int) arr_6 [i_0])) - (arr_12 [i_0]))) < (((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0 - 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0])))))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((((unsigned int) arr_16 [(unsigned short)21] [(unsigned short)21])) < (((/* implicit */unsigned int) max((((/* implicit */int) arr_17 [(unsigned short)5])), (arr_16 [i_4] [i_4])))))) || (((/* implicit */_Bool) ((min((arr_16 [i_4] [i_4]), (arr_16 [i_4] [i_4]))) - (arr_16 [i_4] [i_4]))))));
        arr_18 [(_Bool)1] = min((((arr_16 [i_4] [i_4]) - (arr_16 [i_4] [(unsigned char)15]))), (((arr_16 [i_4] [i_4]) | (((/* implicit */int) arr_17 [i_4])))));
    }
    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        arr_21 [i_5] = ((/* implicit */int) max((max((((/* implicit */unsigned int) ((int) arr_11 [i_5] [i_5]))), (((unsigned int) arr_5 [0ULL])))), (((/* implicit */unsigned int) ((_Bool) arr_17 [i_5 + 2])))));
        var_20 = ((/* implicit */unsigned char) ((min((max((arr_7 [i_5 + 2] [i_5 + 1] [18U]), (((/* implicit */unsigned long long int) arr_16 [i_5 + 1] [i_5 - 1])))), (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5])))) - (arr_14 [14] [i_5] [i_5 - 1])));
        arr_22 [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_14 [8U] [i_5 + 2] [i_5 + 2]))), (max((((/* implicit */unsigned int) max((arr_8 [i_5]), (((/* implicit */unsigned short) arr_17 [i_5]))))), (min((arr_5 [i_5 + 2]), (arr_20 [4LL] [i_5])))))));
        arr_23 [i_5 + 1] = ((/* implicit */_Bool) arr_13 [7U]);
    }
}
