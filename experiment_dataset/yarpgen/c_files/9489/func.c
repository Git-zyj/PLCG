/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9489
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (max((var_8), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_18))))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (766927496252680898ULL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_16)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) var_7)))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
                            var_20 -= ((/* implicit */int) ((((/* implicit */long long int) (((~(((/* implicit */int) var_1)))) - ((+(((/* implicit */int) var_12))))))) >= (max((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) var_4))))), (var_0)))));
                            var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (((((/* implicit */int) var_12)) % (((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (max((var_2), (((/* implicit */unsigned long long int) var_18))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (var_2)));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) var_1)), (max((((/* implicit */long long int) var_10)), (var_0))))), (((/* implicit */long long int) (+(((/* implicit */int) max((var_1), (var_17)))))))));
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            {
                var_24 ^= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_9))))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        {
                            arr_22 [i_5] [(signed char)15] [i_6] [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) & (var_0)))), (var_3)))));
                            var_25 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) / (8191)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_4)) : (var_9))))))));
                            var_26 = ((/* implicit */int) (((+(var_8))) > (((/* implicit */unsigned long long int) min((var_4), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_11)))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) (-(max((max((var_2), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) var_13))))));
            }
        } 
    } 
    var_28 += ((/* implicit */short) ((var_2) >> (((((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_5))))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) - (14377654719146235594ULL)))));
}
