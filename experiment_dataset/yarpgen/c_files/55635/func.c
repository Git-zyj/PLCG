/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55635
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_12)), (16382ULL)));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-1))))))) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned short) var_8)), (var_10))), (((/* implicit */unsigned short) var_18)))))));
        var_21 = ((/* implicit */signed char) min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned char) (signed char)48))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((var_11), (((/* implicit */signed char) ((min(((-2147483647 - 1)), ((-2147483647 - 1)))) >= (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))))))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), ((signed char)-113)));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2444482666163860378LL)) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))), (((((/* implicit */_Bool) 13106797434530938865ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44414))) : (2557593019792454509ULL)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((1068936563U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16059)))))), (0U))))));
    }
    var_25 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) < (var_4))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            {
                var_26 = min((((((/* implicit */_Bool) arr_13 [i_3 + 1])) ? (-9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((unsigned int) arr_13 [i_3 + 1]))));
                /* LoopNest 2 */
                for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775801LL)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) var_12))));
                            var_28 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                            var_29 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_4] [i_6])))))))), (((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) : ((+(2557593019792454509ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
