/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63653
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)54))))) << (((max((((/* implicit */int) var_12)), (var_0))) - (1819676709)))))));
    var_15 = ((/* implicit */unsigned long long int) var_7);
    var_16 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) arr_11 [i_0]);
                        var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_6 [i_2] [i_2])) * (((/* implicit */int) var_4))))));
                        arr_12 [i_0] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */long long int) arr_9 [(_Bool)1] [12ULL] [i_1] [i_2] [i_2] [i_3]);
                    }
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_1] [i_2])), ((-(var_10))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 3; i_4 < 14; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) var_12);
                        var_21 = ((/* implicit */long long int) min((((((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_2])) >> (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -1634746513287780253LL)) : (arr_13 [i_1 + 1]))) - (16811997560421771354ULL))))), (((/* implicit */int) arr_1 [i_0]))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))))))) && (((/* implicit */_Bool) var_4))));
                    }
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_10))) != (((/* implicit */int) var_8)))))) : (min((((var_1) / (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
}
