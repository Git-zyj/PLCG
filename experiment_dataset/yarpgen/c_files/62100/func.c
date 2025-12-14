/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62100
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
    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_5)) : (var_11)))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) ((3582293539194120044LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */int) var_9))));
    var_15 |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_7 [24U] [(_Bool)1] [i_2]) ? (var_6) : (((/* implicit */int) arr_0 [i_0])))) / (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (signed char)15))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_12))))) : (((((arr_3 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [17ULL] [17ULL] [8]))))) ? (arr_3 [i_0]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_1 [i_0])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (-(((var_13) ? (1342467688U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9)))))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_0 [(short)4]))));
                        var_20 |= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_9 [i_1] [i_1 - 1] [8]))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-3582293539194120042LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-18)))))) || (((/* implicit */_Bool) arr_8 [i_0] [i_2]))));
                    }
                    arr_13 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */int) arr_9 [i_0] [i_1] [i_0])), (var_6))), (((/* implicit */int) max((((/* implicit */signed char) var_13)), (arr_0 [i_0]))))))) ? (var_6) : (((/* implicit */int) (_Bool)1))));
                    arr_14 [2ULL] [i_0] [i_1] [15U] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_1 + 1] [9LL] [(signed char)4] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
    {
        arr_17 [i_4] |= arr_4 [18U];
        var_22 |= ((/* implicit */_Bool) arr_1 [12ULL]);
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */signed char) var_13)), (arr_8 [(signed char)10] [(signed char)10]))))));
    }
}
