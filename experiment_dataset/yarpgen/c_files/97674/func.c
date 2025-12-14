/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97674
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned int) -187655445)), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3072))) <= (-5713346086305643733LL))))) + (((var_12) ? (var_3) : (var_3))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_3 [21LL] = ((/* implicit */unsigned char) (((+(((long long int) arr_2 [i_0] [i_0])))) > (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))), (((((/* implicit */_Bool) 5866213270168347871ULL)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_1 [i_0] [i_0 - 3])))))))));
        var_21 = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_2 [i_0 - 4] [i_0 - 2]))))))));
    }
}
