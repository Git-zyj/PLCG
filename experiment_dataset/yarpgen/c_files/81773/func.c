/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81773
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 2438281501U)) : (((((/* implicit */_Bool) 1245676542U)) ? (((/* implicit */unsigned long long int) ((long long int) var_8))) : (max((2932935641258253344ULL), (((/* implicit */unsigned long long int) -2693828679340986777LL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) | (var_7))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)65522);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                arr_10 [(short)4] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) <= (((/* implicit */int) (unsigned short)40856)))))) : ((+(11336646095845731837ULL)))));
                var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 6877739823226429299ULL)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_1))))));
            }
            arr_11 [(_Bool)1] [(short)10] [(_Bool)1] |= ((var_6) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (var_7) : (((/* implicit */int) var_4))))));
        }
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32764)) > (((/* implicit */int) var_1))));
            var_17 *= ((/* implicit */unsigned int) var_2);
        }
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_18 += ((/* implicit */int) (~(((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))));
        var_19 |= ((/* implicit */unsigned int) var_5);
    }
    var_20 |= ((/* implicit */unsigned long long int) var_8);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)146)) >= (((/* implicit */int) (short)32754))));
    var_22 = ((((18307659854015501500ULL) <= (18307659854015501494ULL))) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32754))))));
}
