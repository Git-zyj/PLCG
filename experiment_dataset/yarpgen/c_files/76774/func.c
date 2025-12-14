/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76774
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [5U] [i_0] [i_2] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                            arr_12 [i_0] [i_0] [i_1] [i_0] [4] [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) ((_Bool) (signed char)-26))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((366928205U), (((/* implicit */unsigned int) (signed char)-39))))))) ? ((~(arr_0 [i_0]))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (918795850U)))) ? (((/* implicit */unsigned long long int) var_5)) : ((~(var_15))))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) (short)26903);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (short i_5 = 2; i_5 < 24; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    arr_21 [i_6] [(unsigned char)20] [i_6] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_22 [i_4] [i_4] [i_4] |= (~(((long long int) (_Bool)1)));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 3; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_6] [i_6] = ((/* implicit */unsigned char) (signed char)-39);
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((arr_15 [i_7]) + (arr_15 [i_5 - 2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14614)) ? (1541803329U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) : (var_14))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) : (var_11)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 3; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8] [i_6] [i_5]))) == (arr_15 [i_5]))) ? (arr_20 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))) : (arr_24 [i_4] [16ULL] [i_5] [i_5] [i_6] [i_8 - 2])));
                    }
                    arr_29 [i_6] [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_15 [i_4]) << (((1257894843) - (1257894815)))))))) ? (((((/* implicit */_Bool) arr_28 [i_4] [i_5 - 2] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(3140939391U))))) : (max((((/* implicit */unsigned int) arr_16 [i_5 + 1] [i_5 + 1])), (2753163976U)))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) 16563170843883942104ULL);
}
