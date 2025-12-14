/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80141
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3864294744809908907ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3864294744809908898ULL)))))) : (-4177473318576892996LL)))) ? (min((-4177473318576892972LL), (-4177473318576892972LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4177473318576892998LL))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_19 ^= ((/* implicit */signed char) ((3864294744809908907ULL) < (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                            var_20 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((-4177473318576892979LL) < (4177473318576892971LL)))), ((((!(((/* implicit */_Bool) 4177473318576892983LL)))) ? ((-(arr_10 [i_3] [i_3]))) : (min((4177473318576892973LL), (-4177473318576892979LL)))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((~(-9223372036854775807LL)))));
                            var_22 *= ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) min((var_23), (((-4177473318576892995LL) ^ (((/* implicit */long long int) 959416326))))));
                var_24 = ((/* implicit */_Bool) 4177473318576892983LL);
            }
        } 
    } 
    var_25 = ((/* implicit */short) min((var_25), (var_13)));
}
