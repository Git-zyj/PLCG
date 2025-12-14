/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81546
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)53)) ? (-1540140750) : (((/* implicit */int) (signed char)69)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 3])) ? (((/* implicit */int) max(((short)16383), (((/* implicit */short) var_12))))) : (((/* implicit */int) (short)32752))))));
            var_16 = ((/* implicit */unsigned short) 18446744073709551602ULL);
            var_17 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_11)), ((signed char)69)))), (arr_4 [i_1 - 2] [i_1 - 2])))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (signed char i_3 = 4; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (signed char)-64))));
                            var_19 = ((/* implicit */_Bool) (~(var_2)));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (arr_10 [i_5] [i_5] [i_5] [i_5])))) || (((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [1U]))));
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((+(arr_7 [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))))))));
        }
        var_22 += ((/* implicit */short) var_1);
    }
    var_23 = ((/* implicit */long long int) var_12);
}
