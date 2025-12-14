/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69006
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_1 [i_0 + 1]) == (arr_1 [i_0 + 1])))), (((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) var_8))))) | (5)))));
        var_11 = ((/* implicit */unsigned short) ((short) ((((((/* implicit */int) var_8)) <= (((/* implicit */int) var_5)))) || (((/* implicit */_Bool) (~(arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        var_12 = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) (~(1040187392U)))) ^ (((arr_5 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) var_2);
    }
    var_13 = ((/* implicit */unsigned short) var_2);
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (4990632190109298852ULL))))));
    var_15 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(-4666710944794713424LL))))))));
}
