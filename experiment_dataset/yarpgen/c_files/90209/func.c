/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90209
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
    var_12 = ((/* implicit */_Bool) var_9);
    var_13 = ((/* implicit */unsigned int) 140187732541440LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 |= ((/* implicit */_Bool) arr_0 [i_0]);
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) min(((unsigned short)23560), (((/* implicit */unsigned short) (signed char)117)))))))) ? (min((((((/* implicit */_Bool) (short)-5490)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [(signed char)6])))), (max((((/* implicit */int) (short)5507)), (-470805295))))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) 130023424U))));
                }
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_17 = ((/* implicit */unsigned long long int) -831328578);
                    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                }
                var_19 = arr_8 [i_1 + 3] [i_1 - 2] [i_1] [i_1];
                arr_10 [i_0] [i_1] |= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_11)))) != (min((((/* implicit */int) arr_0 [i_1])), (max((((/* implicit */int) (short)-5490)), (831328566)))))));
                var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (-831328578) : (((/* implicit */int) (short)-7763))))) ? (-831328578) : (((/* implicit */int) (unsigned char)16))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_0])) % (((/* implicit */int) (unsigned short)36482))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), ((signed char)-125))))) : (max((var_7), (((/* implicit */long long int) var_9))))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (_Bool)1))))));
    var_22 |= var_5;
}
