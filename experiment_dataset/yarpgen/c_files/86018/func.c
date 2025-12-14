/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86018
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
    var_13 = max((((((/* implicit */_Bool) 2107269168321251201ULL)) ? (max((((/* implicit */unsigned int) var_7)), (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (-1203752551) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) 1203752550)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)65535);
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((+(arr_7 [i_1] [i_1] [i_2] [i_1]))) / (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_2])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) 3851816760U))))));
                    arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) -1004073374025408839LL);
                }
            } 
        } 
    } 
}
