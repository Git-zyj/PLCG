/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80499
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) min((var_0), (((/* implicit */unsigned char) (signed char)51))));
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (signed char)31))));
                var_13 *= ((/* implicit */_Bool) max(((unsigned short)7544), (((/* implicit */unsigned short) (signed char)127))));
                var_14 = ((/* implicit */long long int) (!(((_Bool) (~(((/* implicit */int) (unsigned char)188)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((int) ((long long int) 1622789396U)));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_8 [i_2]), (((/* implicit */unsigned char) arr_7 [i_2]))))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_2]))) : (((((/* implicit */int) (signed char)52)) - (((/* implicit */int) arr_7 [i_2]))))));
    }
    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-57))) : (var_10))) + (((((/* implicit */long long int) var_2)) - (9223372036854775807LL)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_0 [i_3 + 1]))))) : (((/* implicit */int) var_0))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((int) arr_4 [i_3] [i_3 - 1])))))));
    }
    var_17 += ((/* implicit */unsigned char) var_10);
}
