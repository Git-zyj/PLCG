/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56241
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
    var_17 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57775)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57775)))))))) % (8203436307744050819LL)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)50713)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            var_19 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)50713)) ? (((/* implicit */int) arr_3 [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) (unsigned short)7772))))));
                            arr_13 [i_0] [(unsigned char)3] [i_2 - 1] [i_1] [i_4 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_6)))));
                            arr_14 [(short)11] [(short)11] [i_0] |= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_6 [i_4 - 2] [i_1] [i_2 - 1]) : (((((/* implicit */_Bool) (unsigned short)14842)) ? (arr_6 [i_4 - 1] [7ULL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63479)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)3] [i_3]))) : (((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2 - 1] [i_4 + 1])) : (6946376173523032140ULL)))))));
                        }
                        var_21 ^= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)22832))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (((+(((/* implicit */int) ((short) (unsigned short)14846))))) * ((-(((/* implicit */int) (unsigned short)57776)))))))));
                    }
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */unsigned char) max(((+((+(((/* implicit */int) var_13)))))), (((((/* implicit */int) var_11)) + (((/* implicit */int) var_0))))));
}
