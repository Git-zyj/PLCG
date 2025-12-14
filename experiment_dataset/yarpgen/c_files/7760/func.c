/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7760
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
    var_19 = ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28509))) < (var_0))))) > (var_4)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_17))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_0 + 2] [i_0 + 1] [i_0]))) ? (((((((/* implicit */_Bool) -3103451971499295973LL)) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (var_16)))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) (unsigned short)28509)))))))))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((0U), (4194303U)))), (arr_1 [i_0 + 1]))), (((/* implicit */long long int) ((int) ((signed char) (unsigned short)1)))))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (int i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) arr_17 [i_0 - 2] [i_3] [i_4] [i_5 + 1])), ((~(arr_1 [i_5])))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            arr_22 [i_4] [i_3] [i_4] [i_5] [i_5] = max((((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_10 [i_4])) & (arr_6 [i_4])))) + (max((var_0), (((/* implicit */long long int) (unsigned short)65535)))))), (((/* implicit */long long int) arr_9 [i_0 - 2] [i_4] [(unsigned char)3])));
                            arr_23 [i_0 + 2] [i_0] [i_4] [i_4] [i_0] [i_0 + 2] = ((/* implicit */short) (-(((/* implicit */int) var_8))));
                            arr_24 [i_6] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_18 [i_6] [i_6] [i_4] [i_6] [i_6] [i_6]), (arr_18 [i_0 + 2] [i_0 + 2] [i_4] [i_5] [i_6] [i_6])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 2] [i_0 - 2] [i_4] [i_4] [i_5 - 1] [i_6]))) >= (var_6)))) : ((~(((/* implicit */int) arr_18 [i_0] [i_3] [i_4] [1LL] [5U] [i_6]))))));
                            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                        var_25 += ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (unsigned short)28509)))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((arr_10 [i_5]) >= (((/* implicit */int) arr_21 [i_5] [i_5] [i_5 + 2] [i_4] [i_3] [(short)8] [i_0 - 1])))))) >> (((var_3) + (8618111888302528216LL)))));
                        var_27 = ((/* implicit */signed char) (unsigned short)28509);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        var_28 = ((/* implicit */unsigned short) max((((/* implicit */short) ((signed char) ((signed char) (short)574)))), ((short)-575)));
        arr_29 [i_7] [i_7] = (~(((/* implicit */int) ((unsigned short) arr_3 [i_7]))));
    }
    var_29 = ((/* implicit */short) min((3595304585U), (((/* implicit */unsigned int) (unsigned short)37026))));
}
