/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76045
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1 + 2] [i_1 - 2] = ((/* implicit */unsigned int) max(((((+(((/* implicit */int) (unsigned char)174)))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)195)), ((unsigned short)32946)))) - (32928))))), (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) ((signed char) 1530654369))) : (((/* implicit */int) (unsigned char)57))))));
                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))))), (max((((/* implicit */unsigned long long int) (unsigned char)57)), (7706200151141336692ULL)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_15 += ((/* implicit */signed char) (unsigned char)174);
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned char)219))));
        var_17 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_2] [(unsigned char)14])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [3ULL]))))));
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [(unsigned char)6]))) <= (arr_9 [i_2])));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) var_8);
    }
    var_19 = ((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned char) 1530654353)))))));
}
