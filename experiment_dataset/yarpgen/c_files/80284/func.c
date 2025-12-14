/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80284
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = max((max((max((((/* implicit */long long int) var_1)), (3677253454993010403LL))), ((~(3677253454993010403LL))))), (((/* implicit */long long int) ((((((/* implicit */int) (short)32767)) | (((/* implicit */int) (short)26029)))) | (((/* implicit */int) ((_Bool) var_12)))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)3)))) ? (((((/* implicit */unsigned long long int) var_8)) % (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)77)), (var_7)))))))) ? (max((arr_5 [i_0 + 2]), (arr_5 [i_0 - 1]))) : (((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */signed char) max((var_6), (arr_2 [i_0])))))))));
                var_15 = ((/* implicit */short) -442464624);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) (+(var_8)))) : (min((((/* implicit */unsigned long long int) arr_9 [(short)9])), (var_4))))))));
                arr_13 [(_Bool)1] [i_3] [i_3] = ((/* implicit */_Bool) (unsigned char)43);
                var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)-52))))) || (((/* implicit */_Bool) (+(var_13))))));
            }
        } 
    } 
}
