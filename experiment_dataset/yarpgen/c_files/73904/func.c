/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73904
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
    var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -2088037093)) / (11373007719154019379ULL)))) ? (11373007719154019379ULL) : (((/* implicit */unsigned long long int) -7364750123403560691LL)))), (((/* implicit */unsigned long long int) 2147483625))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [i_0 - 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) min((arr_8 [i_0 - 2] [i_2] [i_2]), ((unsigned char)65)))) : (max(((-(((/* implicit */int) var_15)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)71)))))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_4 [i_1 + 1] [i_0])))) ? (max((arr_4 [i_1 - 1] [i_0]), (arr_4 [i_1 + 1] [i_0]))) : ((+(arr_4 [i_1 - 1] [i_0])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_5);
    var_21 = ((/* implicit */unsigned char) min((7073736354555532224ULL), (((/* implicit */unsigned long long int) (unsigned char)97))));
}
