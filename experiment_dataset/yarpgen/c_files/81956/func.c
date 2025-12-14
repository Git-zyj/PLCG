/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81956
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
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) 3999776043U));
                    arr_8 [9ULL] [9ULL] [i_2] = ((/* implicit */_Bool) ((unsigned short) max((5401612524816677524ULL), (((/* implicit */unsigned long long int) 507935285U)))));
                }
            } 
        } 
        var_17 = ((/* implicit */short) ((int) max((((/* implicit */unsigned long long int) arr_6 [i_0 - 3])), (arr_5 [i_0] [i_0 - 2] [i_0 - 3]))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
    {
        arr_13 [4LL] = ((/* implicit */unsigned char) 3787032029U);
        arr_14 [(short)20] [i_3 - 1] = ((/* implicit */signed char) ((short) ((unsigned short) max((arr_10 [(short)19]), (arr_10 [i_3])))));
        arr_15 [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((3787032011U), (507935273U)))), (min((((/* implicit */unsigned long long int) arr_10 [i_3 - 1])), (max((((/* implicit */unsigned long long int) arr_9 [i_3] [16ULL])), (23103078957253677ULL)))))));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) min((3787032003U), (((/* implicit */unsigned int) (signed char)-39)))))) ? (((((/* implicit */_Bool) max((3787031996U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60960))) : (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_1))))) : (min((max((((/* implicit */unsigned long long int) (short)27053)), (var_16))), (((/* implicit */unsigned long long int) var_11))))));
    var_19 = ((/* implicit */_Bool) ((short) var_9));
    var_20 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (4069680366U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62161)))))), (((unsigned long long int) 507935290U)))), (((/* implicit */unsigned long long int) ((_Bool) min((10747703666559095462ULL), (((/* implicit */unsigned long long int) (unsigned short)65513))))))));
}
