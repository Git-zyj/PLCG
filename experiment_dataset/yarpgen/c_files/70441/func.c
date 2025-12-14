/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70441
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
    var_10 |= ((/* implicit */long long int) var_5);
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */signed char) (~(((unsigned long long int) arr_1 [i_0]))));
        var_11 = ((/* implicit */signed char) max((var_11), (arr_2 [i_0])));
    }
    for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((long long int) (-(0)))) + (arr_4 [i_1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)49)) && (((/* implicit */_Bool) 17083817580935227230ULL)))))));
            var_14 = (+((+(arr_4 [i_1]))));
        }
        arr_9 [i_1] = ((/* implicit */short) (-(-2962244410766522355LL)));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((min((arr_10 [i_3]), (((/* implicit */int) var_4)))) - ((~(((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775780LL)) && (((/* implicit */_Bool) 890201485)))))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) * (9223372036854775807LL)))) ? (((/* implicit */long long int) 20)) : (4716182071948804303LL)))));
    }
    for (short i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 17083817580935227230ULL))) ? (((var_6) ? (((var_2) ? (arr_6 [i_4] [i_4]) : (((/* implicit */long long int) arr_8 [i_4] [i_4 - 2] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0)))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 + 1] [i_4 - 3])))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) (!(arr_12 [i_4 - 2] [i_4])))) > ((~(((/* implicit */int) ((9558156030425747663ULL) != (8888588043283803954ULL))))))));
        var_18 += var_3;
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                var_20 += ((/* implicit */long long int) ((-4) != (((/* implicit */int) (_Bool)1))));
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) -3031727124746346170LL)))));
            }
        } 
    } 
}
