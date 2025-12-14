/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7483
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
    var_15 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (min(((~(2685143568846677142ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2402400143U)) == (var_2))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((min((((/* implicit */long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_0 [i_0]))))), (8898107228804266634LL))), (((/* implicit */long long int) min((((528482304) / (arr_1 [i_0] [i_0]))), ((+(((/* implicit */int) (unsigned short)21657)))))))));
        arr_3 [(unsigned char)5] [(unsigned char)5] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (((!((_Bool)1))) ? (1903282076078967412ULL) : (max((((/* implicit */unsigned long long int) (short)768)), (2685143568846677142ULL))))))));
        var_17 += ((/* implicit */long long int) 1700443229);
    }
}
