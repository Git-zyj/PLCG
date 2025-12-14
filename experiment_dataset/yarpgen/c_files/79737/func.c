/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79737
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
    var_10 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [(signed char)6] [i_1] = ((/* implicit */unsigned int) (!((_Bool)1)));
                var_11 = ((/* implicit */long long int) (((!(((18446744073709551604ULL) > (var_5))))) ? (((((((/* implicit */unsigned long long int) var_4)) == (var_9))) ? (12ULL) : (((((/* implicit */_Bool) var_9)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : ((+((+(var_6)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((max((((/* implicit */signed char) arr_5 [i_2])), (var_0))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1U)) > (var_2)))))))));
        var_12 = min((((/* implicit */signed char) (_Bool)0)), (max((var_0), (arr_6 [i_2 + 3]))));
    }
}
