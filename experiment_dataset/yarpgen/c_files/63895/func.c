/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63895
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) min((var_13), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) (~(4272051479U)))) : (var_11))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */unsigned short) (~(min((6124736002468058702ULL), (((/* implicit */unsigned long long int) 4294967295U))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) && (((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2] [i_0])))))) <= (min((((/* implicit */unsigned long long int) (_Bool)1)), (12495122671461159706ULL)))));
                }
            } 
        } 
        arr_11 [i_0 + 2] [i_0] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)146)) % (arr_3 [i_0] [i_0 - 2] [i_0])))), (min((arr_1 [i_0 + 2] [i_0]), (((/* implicit */unsigned int) var_8)))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1])))));
        var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_0 - 2] [i_0 - 2]))), (max((((/* implicit */unsigned long long int) var_9)), (arr_4 [i_0 + 2])))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((9223372036854775807LL), (-9223372036854775792LL))))));
        arr_12 [8] = min((((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(signed char)18] [i_0 - 1]))) : (1099511627775ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))));
    }
}
