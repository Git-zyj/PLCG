/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88722
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
    var_10 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) | (min((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) (unsigned short)11278)), (var_4)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 += (-(arr_0 [i_0]));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_7))))));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8952093486770920985LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21855))) : (3938998015418636658ULL)));
        arr_6 [i_1] = ((/* implicit */short) arr_4 [i_1]);
    }
    var_13 = ((/* implicit */unsigned int) var_0);
    var_14 = (-(((/* implicit */int) var_6)));
}
