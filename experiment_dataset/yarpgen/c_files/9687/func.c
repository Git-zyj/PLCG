/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9687
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4151259442U)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((long long int) 18446744073709551599ULL))));
        var_17 &= ((/* implicit */_Bool) min((((short) 7541666823198052597LL)), (((/* implicit */short) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((min((arr_2 [i_1]), (((/* implicit */long long int) (!((_Bool)0)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max(((short)17231), (((/* implicit */short) var_3)))))))))))));
            arr_5 [i_0] = ((/* implicit */unsigned char) ((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (arr_0 [i_0] [i_1])))))));
        }
    }
    var_19 = ((/* implicit */short) var_7);
    var_20 = var_6;
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) != (max((((/* implicit */int) max((var_8), (var_8)))), (var_9)))));
}
