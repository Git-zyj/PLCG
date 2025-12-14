/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97751
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
    var_12 = ((/* implicit */signed char) (+(max((12715628472643956197ULL), (((/* implicit */unsigned long long int) 1073741822))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 &= ((((/* implicit */unsigned long long int) ((-1073741823) / (((/* implicit */int) arr_1 [(_Bool)1] [i_0 + 4]))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (-1073741819) : (var_1)))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) min((var_1), (-1073741822)))))));
                var_14 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 1])), (max((-1073741822), (((/* implicit */int) arr_1 [i_0] [i_1])))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [(short)5])) ^ (1073741822)))) < (((((/* implicit */_Bool) -1073741823)) ? (((/* implicit */unsigned long long int) 189104535)) : (18446744073709551608ULL))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_3 [i_1] [i_1] [i_0 + 1]))) - (((unsigned long long int) var_10))))) ? (((((((/* implicit */_Bool) var_9)) ? (var_9) : (var_7))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) -1073741822))))) + (((unsigned long long int) arr_3 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
