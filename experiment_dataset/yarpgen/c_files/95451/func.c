/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95451
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) var_8)))))))), (((unsigned long long int) (~(var_1))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(2803915701519967319ULL)))) ? (((/* implicit */int) (((~(arr_4 [(short)4] [(short)4] [i_1]))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) (short)32762)) <= (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_7)))))))));
                            arr_11 [i_0 + 1] [7ULL] [7ULL] [i_0] &= ((/* implicit */int) 9840688757652857260ULL);
                            var_14 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (+(((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_12)) : (arr_8 [i_1] [i_0] [(short)0] [i_0] [i_0])))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) / (((/* implicit */int) var_11)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((min((min((9840688757652857254ULL), (((/* implicit */unsigned long long int) (short)-14802)))), ((-(9840688757652857261ULL))))), (((/* implicit */unsigned long long int) max((min((var_6), (var_2))), (((/* implicit */long long int) var_10)))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (_Bool)1))));
    var_18 *= ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) ^ (var_0))))), (((/* implicit */unsigned long long int) (_Bool)1))));
    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9840688757652857247ULL)) ? ((~(((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))) : (15642828372189584292ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (short)159)))) : (((/* implicit */int) ((unsigned char) var_8))))))));
}
