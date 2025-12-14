/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78147
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
    var_10 = ((/* implicit */int) 10448142312326091827ULL);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) arr_9 [i_1] [i_1] [i_1]);
                    var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2]))))) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)6])))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) != (((/* implicit */int) arr_6 [i_1])))))) : (max((var_8), (((/* implicit */unsigned long long int) arr_2 [i_2]))))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 30064771072ULL)) ? (var_8) : (((/* implicit */unsigned long long int) arr_7 [i_0])))), (((/* implicit */unsigned long long int) (-(1642236833U))))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_3 [i_1]))) : (arr_3 [i_0])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3])) || (((/* implicit */_Bool) arr_11 [i_4])))));
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) arr_10 [i_3]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3])))))));
                            var_17 = ((/* implicit */unsigned long long int) min((min((arr_13 [i_3] [i_4] [i_5]), (arr_13 [i_3] [i_4] [4ULL]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_3] [i_3] [i_5])) > (((/* implicit */int) arr_13 [i_3] [i_3] [i_6])))))));
                        }
                    } 
                } 
                arr_22 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [i_3] [i_4]), (arr_12 [i_3] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_3] [i_3])), (arr_20 [i_3] [(_Bool)1] [i_3] [i_3] [i_4] [i_3]))))) : (min((((/* implicit */unsigned long long int) arr_15 [i_4])), (var_8)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_18 = ((/* implicit */short) (-((-(30064771072ULL)))));
        arr_25 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_24 [i_7])))));
        var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)163)) ? (18446744043644780557ULL) : (2199023255551ULL)))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_6))));
    }
}
