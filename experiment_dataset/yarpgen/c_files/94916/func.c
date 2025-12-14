/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94916
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_0 [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned int) (short)8128)))))));
        arr_4 [i_0] &= (unsigned char)178;
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)189)) ? (arr_0 [i_0 - 2] [(signed char)6]) : (arr_0 [i_0 - 2] [i_0])))) / (arr_2 [10LL])));
    }
    var_20 = ((/* implicit */unsigned short) var_17);
    var_21 = var_10;
}
