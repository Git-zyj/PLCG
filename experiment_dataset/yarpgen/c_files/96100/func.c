/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96100
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
    var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3637388761U), (657578534U)))) ? (((var_15) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33868))))) : (((var_5) ? (var_15) : (((/* implicit */unsigned long long int) 3987999925U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_14)))))))) : (((var_15) & (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-16509)), (var_0))))))));
    var_19 -= ((/* implicit */short) max((var_6), (((/* implicit */int) ((unsigned short) (short)-5292)))));
    var_20 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) (-(((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3])))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_22 ^= ((/* implicit */int) arr_3 [i_0] [i_1] [i_3]);
                        arr_11 [i_0] [i_0] [i_2 - 1] [i_3 + 1] = ((/* implicit */short) arr_5 [i_3] [i_2 - 1] [i_1] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */long long int) (+(510)))) <= (7309826125222904027LL))))));
                            var_24 ^= ((/* implicit */unsigned short) arr_10 [i_4] [i_1] [i_1] [i_0]);
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_13 [(unsigned short)0] [0] [i_3 + 2] [13U] [0]), (arr_13 [12ULL] [12ULL] [i_3 + 1] [i_3 + 1] [i_3])))) ? (max((((/* implicit */long long int) arr_13 [i_3] [(_Bool)1] [i_3 + 2] [i_3] [13ULL])), (7309826125222904038LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3 + 1] [i_3] [10U])) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_3 + 2] [i_3] [i_3]))))))))));
                            var_26 = ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0 + 2] [i_4])))))) ? (arr_6 [i_0] [i_1] [i_3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))));
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_4] [i_3 - 1] = ((/* implicit */unsigned short) (short)-16657);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 8; i_5 += 3) 
    {
        var_27 = 657578533U;
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11989))) < (var_17))))));
        var_28 = ((/* implicit */short) (+(arr_6 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5])));
    }
}
