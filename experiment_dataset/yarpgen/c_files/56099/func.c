/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56099
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
    var_14 += ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)3227)), (4294967295U)))), (max((var_13), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) min((max((var_12), (var_4))), (max(((unsigned short)59817), (var_8))))))));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_9)), (var_8)))), (max((((/* implicit */unsigned long long int) var_4)), (8274247685657879643ULL))))), (max((max((((/* implicit */unsigned long long int) var_11)), (var_7))), (max((var_13), (((/* implicit */unsigned long long int) var_4)))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17644)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [0U] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((min(((unsigned short)21617), (((/* implicit */unsigned short) (_Bool)0)))), (max((var_8), (((/* implicit */unsigned short) arr_5 [i_0 + 3]))))))), (min((max((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_2] [(unsigned short)4])))), (((/* implicit */unsigned long long int) max((arr_7 [i_2] [(unsigned short)15] [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                    var_17 = ((/* implicit */unsigned short) max((max((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (0ULL))), (((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_1] [i_0] [i_2]), (((/* implicit */unsigned short) var_9))))))), (max((((/* implicit */unsigned long long int) (unsigned short)56027)), (10172496388051671972ULL)))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((unsigned short)10103), (var_0)))), (min((var_11), (((/* implicit */unsigned int) var_10))))))), (max((((/* implicit */unsigned long long int) max((var_8), (var_10)))), (max((((/* implicit */unsigned long long int) var_8)), (18446744073709551615ULL)))))));
}
