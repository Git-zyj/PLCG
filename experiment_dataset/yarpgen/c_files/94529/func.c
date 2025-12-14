/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94529
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
    var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) (short)8802)))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)0))))))) + (2147483647))) >> (((-6156845980160960870LL) + (6156845980160960870LL)))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 2]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((((/* implicit */_Bool) ((arr_8 [i_2 - 3] [(_Bool)1] [i_2] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [12] [i_1] [i_1])))))) && ((!((_Bool)1))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_6 [i_3 - 1]))));
                        var_23 ^= ((/* implicit */unsigned char) 5615455655548547353LL);
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (((arr_7 [i_0] [i_1] [(_Bool)1] [i_3]) ? (12808355718395253989ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                    var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned short)2969))))));
                    var_26 = (_Bool)1;
                    var_27 = ((/* implicit */short) arr_2 [i_0 + 1] [13U]);
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (((+(min((5615455655548547329LL), (((/* implicit */long long int) (_Bool)0)))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))))))));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (max(((~(-9161109583613607605LL))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1200605439U)))) ? (((var_17) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned short)8)))) : (-2147483644))))));
        var_29 = ((/* implicit */int) (_Bool)0);
    }
}
