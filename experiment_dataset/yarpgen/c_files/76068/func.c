/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76068
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
    var_14 = (~(((((/* implicit */_Bool) -8827975648163679725LL)) ? (((/* implicit */long long int) var_4)) : (max((var_1), (var_11))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 = arr_0 [i_0];
        var_16 += ((/* implicit */signed char) (+((~(arr_1 [i_0] [i_0])))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((/* implicit */long long int) (+(arr_1 [i_0] [i_0])))), (-9223372036854775804LL))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_18 = ((/* implicit */int) max((var_18), ((-(min((arr_1 [17LL] [i_1]), (arr_1 [i_0] [17])))))));
            var_19 = (-((+(-1294119674052694097LL))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_8 [(signed char)13] [i_2] [9ULL] [(signed char)13] = ((/* implicit */int) ((((/* implicit */_Bool) 8973832960973935493ULL)) ? ((~(((((/* implicit */unsigned long long int) 6943094411561098010LL)) ^ (7050106065265648153ULL))))) : (((/* implicit */unsigned long long int) (+(469749111))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((var_6), (((/* implicit */long long int) (signed char)-90)))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (arr_6 [i_3] [i_0] [i_1] [16ULL] [i_0])))))) ? (((arr_7 [i_2] [i_2] [i_2]) >> (((((((((/* implicit */_Bool) (signed char)89)) ? ((-9223372036854775807LL - 1LL)) : ((-9223372036854775807LL - 1LL)))) - (-9223372036854775781LL))) + (54LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((11509261496753661319ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))))))))));
                    }
                } 
            } 
        }
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)126)), (-9223372036854775782LL)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [(signed char)1] [i_4])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -367407438))))) ? ((~(-840462988976397128LL))) : (((((/* implicit */_Bool) arr_7 [i_4] [4LL] [i_4])) ? (arr_2 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-90))))))))));
        arr_13 [3LL] [i_4] = ((/* implicit */signed char) (+(arr_12 [i_4])));
    }
    var_22 = ((/* implicit */int) var_6);
    var_23 = ((/* implicit */int) (signed char)81);
    var_24 = ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_4)), (var_6)))))) ? (((((/* implicit */_Bool) var_1)) ? (max((var_11), (var_6))) : (-9223372036854775798LL))) : (((/* implicit */long long int) ((int) (~(var_4))))));
}
