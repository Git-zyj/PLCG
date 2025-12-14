/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92089
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (signed char)-123))));
        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (((arr_1 [i_0]) ^ (((/* implicit */long long int) 2163428740U))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) (+(min((((/* implicit */long long int) ((((/* implicit */long long int) arr_2 [i_1] [i_1])) < (arr_3 [i_1] [i_1])))), (min(((-9223372036854775807LL - 1LL)), (9223372036854775807LL)))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) max((min((((/* implicit */long long int) arr_6 [i_1] [i_2] [i_2])), (-4377449594716075036LL))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)213)), (arr_6 [i_1] [i_1] [i_2]))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                var_19 = ((/* implicit */signed char) ((((((arr_5 [i_1]) | (-3269229412793564482LL))) - (min((arr_5 [i_1]), (((/* implicit */long long int) var_11)))))) - (((((/* implicit */long long int) arr_7 [i_1])) - (arr_3 [i_1] [i_3])))));
                var_20 = 7733606637582481083LL;
                arr_11 [i_1] [i_2] [i_3] = ((/* implicit */signed char) (+((+(524280LL)))));
                arr_12 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_4) - (arr_3 [i_2] [i_1]))) ^ (arr_5 [i_3])))) ? ((~(arr_10 [i_1] [i_1] [i_3]))) : (var_3)));
            }
            for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((arr_9 [i_4 + 1] [i_2] [i_4]) / (arr_9 [i_4 - 1] [i_1] [i_2]))) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_4 + 1] [i_2] [i_4])))))))));
                var_22 = ((((/* implicit */_Bool) ((arr_4 [i_4 - 1]) / (arr_4 [i_4 - 1])))) ? (((((/* implicit */_Bool) arr_2 [i_4 + 1] [i_4 + 1])) ? (-3817250605235001048LL) : (((/* implicit */long long int) arr_2 [i_4 + 1] [i_4 + 1])))) : (((/* implicit */long long int) 2768415457U)));
            }
        }
        for (signed char i_5 = 2; i_5 < 22; i_5 += 4) 
        {
            var_23 *= ((/* implicit */unsigned char) arr_7 [i_5]);
            var_24 = (~(((/* implicit */int) (unsigned char)29)));
            var_25 *= ((/* implicit */signed char) ((524286LL) <= (11LL)));
            var_26 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((arr_2 [i_1] [i_1]), (var_3)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-6))) / (arr_9 [i_5] [i_1] [i_1]))) : (((524280LL) ^ (arr_4 [i_1])))))));
        }
    }
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
    {
        arr_19 [i_6] [i_6] = var_8;
        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))) <= (3LL))))));
    }
    var_28 = ((/* implicit */long long int) var_2);
}
