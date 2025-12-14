/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70075
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) (signed char)-61)))), (max((((/* implicit */int) (signed char)61)), ((~(((/* implicit */int) (_Bool)0))))))));
        var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            {
                var_13 = ((/* implicit */short) arr_3 [i_1]);
                var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_2])) && (((/* implicit */_Bool) var_2)))) ? ((~(((/* implicit */int) (signed char)61)))) : (((((/* implicit */_Bool) 1688615804373256193ULL)) ? (min((-1090238918), (((/* implicit */int) (signed char)81)))) : (((/* implicit */int) (signed char)-60))))));
            }
        } 
    } 
}
