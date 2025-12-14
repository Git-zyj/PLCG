/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59815
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((min(((~(var_6))), (((/* implicit */unsigned int) (unsigned char)195)))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (((((/* implicit */_Bool) 1357992431)) ? (10578683815026599107ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))))))) - (7868060258682952644ULL))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_19 += ((/* implicit */short) (+(-2207232964310257435LL)));
                    var_20 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))) : (2225867656U)))) < (((((/* implicit */_Bool) ((var_17) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)151)), (var_16))) : (((/* implicit */unsigned long long int) var_14))))));
                    var_21 -= ((/* implicit */signed char) (((~(var_4))) & (((/* implicit */int) min((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_0] [i_0]))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_2)))) ? ((~(min((((/* implicit */long long int) arr_0 [i_0])), (var_1))))) : (((/* implicit */long long int) arr_2 [i_1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            arr_14 [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)59))));
            arr_15 [i_3] [(_Bool)1] |= ((/* implicit */_Bool) ((int) 8105250024804809994ULL));
            var_22 = ((/* implicit */unsigned long long int) var_13);
            var_23 = ((/* implicit */signed char) ((((arr_9 [10U]) ? (arr_13 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))) : (arr_10 [i_3]))))));
            arr_16 [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_3])) >= (var_12))))));
        }
        var_24 = ((/* implicit */_Bool) arr_13 [i_3]);
        var_25 *= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 583483479)) : (-2207232964310257435LL)));
        var_26 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    }
    var_27 = ((/* implicit */unsigned int) 207826341965075278ULL);
}
