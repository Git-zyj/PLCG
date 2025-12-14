/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79850
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4323455642275676160LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)113))))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1]))))) : (min((((/* implicit */long long int) arr_5 [i_1] [i_0])), (var_9))));
                arr_8 [i_1] [i_1] = ((/* implicit */signed char) min((min((((long long int) arr_6 [i_1])), (((/* implicit */long long int) ((((/* implicit */_Bool) -8814905130640266679LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))))), ((-(min((var_2), (var_0)))))));
                var_20 |= min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((arr_0 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (3595389369617272937LL))), (((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)-95))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_21 = (signed char)5;
                    var_22 = min(((-(arr_9 [i_3 + 1]))), (min((((/* implicit */long long int) ((signed char) arr_1 [i_4]))), (((long long int) (signed char)-125)))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_18 [i_5] [i_5] [i_3 - 1] [i_5] [i_2] = ((/* implicit */signed char) (~((~((-9223372036854775807LL - 1LL))))));
                        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)96)) ? (-13LL) : (-3079615716443209560LL))) / (433762359593272877LL)));
                        arr_19 [16LL] [16LL] &= min((((signed char) min((arr_15 [i_3]), (((/* implicit */long long int) (signed char)-104))))), (((/* implicit */signed char) ((8422528606063469819LL) == (((/* implicit */long long int) ((/* implicit */int) ((403656529266402845LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)113)))))))))));
                    }
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((((long long int) ((long long int) (signed char)113))), (((/* implicit */long long int) (-(((/* implicit */int) min((var_17), ((signed char)-105))))))))))));
                }
            } 
        } 
    } 
}
