/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95178
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 |= ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) : (((long long int) ((var_0) + (-849553539))))));
                var_15 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])))))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((int) var_13))) ? (((((/* implicit */_Bool) -849553539)) ? (var_4) : (arr_2 [(_Bool)1]))) : (min((var_0), (arr_2 [(_Bool)1]))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 4; i_2 < 20; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */_Bool) 849553548);
        var_17 = ((/* implicit */signed char) (((~(var_6))) ^ ((~(((/* implicit */int) var_7))))));
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (7221703732419155073LL)));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [(_Bool)1])) ? (((/* implicit */int) var_8)) : (-849553544)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_14 [(_Bool)1] [i_4] [(_Bool)1]))) + (var_10))))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((-(((var_12) * (((/* implicit */long long int) ((/* implicit */int) var_3))))))) >= (var_2))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((((((/* implicit */int) var_1)) % (var_0))) - ((~(var_6))))), (((/* implicit */int) (signed char)-21)))))));
            }
        } 
    } 
}
