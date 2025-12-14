/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91979
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (4294967287U)))));
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_0)), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)155)), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)129))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((unsigned long long int) var_15)))))));
                    var_20 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_1] [i_2 + 3])), (var_8)))), (max((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) arr_6 [i_2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))))));
                    var_21 = ((/* implicit */short) (((+(min((var_14), (((/* implicit */int) (short)32766)))))) == (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned short)1])))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            {
                arr_13 [i_3] [i_4 + 1] [i_4] = ((/* implicit */signed char) ((_Bool) var_3));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_4 + 3] [i_4 - 1]))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) >= (((unsigned long long int) (unsigned char)233))))) : (max(((~(((/* implicit */int) var_5)))), ((~(((/* implicit */int) arr_8 [i_3]))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((2264105807U) >= (((/* implicit */unsigned int) 536464769)))))))) ? (((1550245473U) + (((/* implicit */unsigned int) ((var_14) ^ (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_10)))))))));
}
