/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/900
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
    var_20 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (-((~(var_16))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [4LL] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_2]))) != (((((/* implicit */_Bool) var_18)) ? (var_8) : (((/* implicit */long long int) var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_1] [i_1]) : (0U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (((unsigned int) var_0))));
                            var_21 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (signed char)77)) > (((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_1] [i_1])) : (((/* implicit */int) var_2)))))))));
                            arr_13 [i_3 + 2] [i_1] [11LL] [i_1] [i_0] = ((/* implicit */short) (~(1243711083U)));
                            arr_14 [(unsigned char)0] [i_2] [i_2] [i_1] [i_2] [i_0] &= (((-((((_Bool)1) ? (var_6) : (var_16))))) - (((/* implicit */long long int) ((/* implicit */int) var_15))));
                            var_22 = ((/* implicit */short) var_10);
                        }
                    } 
                } 
                arr_15 [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((1418958076157419217LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (((((/* implicit */_Bool) var_18)) ? (var_10) : (var_10)))))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 576460752303423488ULL)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (short)5526))))) ? (var_16) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-90))))))) - (((((((/* implicit */_Bool) var_8)) ? (var_18) : (((/* implicit */long long int) var_13)))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6))))))));
    var_24 *= ((/* implicit */unsigned int) var_4);
}
