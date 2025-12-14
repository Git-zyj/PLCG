/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95989
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
    var_12 = ((/* implicit */unsigned long long int) (signed char)126);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_2] = (unsigned short)32640;
                    var_13 = (!(((/* implicit */_Bool) ((short) arr_1 [i_0] [i_1]))));
                    arr_9 [i_0] [18U] [i_2] [i_1] = ((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned short)24520)) || (((/* implicit */_Bool) (unsigned char)159))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    arr_12 [i_0] [(short)14] [(unsigned char)14] = ((/* implicit */short) ((-1558520319) > (((((/* implicit */_Bool) (unsigned short)32895)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)32895))))));
                    var_14 = ((/* implicit */long long int) arr_1 [i_1] [i_0]);
                }
                for (unsigned short i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)1815)))) ? (((/* implicit */int) (unsigned short)32640)) : (((/* implicit */int) (_Bool)0)))))));
                    arr_16 [i_4] [(signed char)18] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((376275379U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) (unsigned short)32915))))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)238)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32895)) ? (((/* implicit */int) (short)(-32767 - 1))) : (-1558520319)))))))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_13 [i_0] [i_5])) : ((((_Bool)1) ? (((/* implicit */int) arr_7 [(unsigned char)14] [i_1] [i_0])) : (((/* implicit */int) (short)-32753))))));
                    var_17 = ((/* implicit */unsigned int) arr_18 [i_0] [i_1] [(unsigned short)18] [i_0]);
                }
                var_18 *= ((/* implicit */unsigned int) (unsigned short)47072);
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
}
