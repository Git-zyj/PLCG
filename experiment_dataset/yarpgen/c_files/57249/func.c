/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57249
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (max((-87695732), (((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_2 + 2])))) : (((/* implicit */int) ((short) arr_2 [i_0 + 4] [i_0 + 1])))));
                    arr_8 [11] [i_1] [11] = ((/* implicit */short) (((((+(((/* implicit */int) (_Bool)0)))) > (arr_0 [6U] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12168182692474176438ULL))))) : (((/* implicit */int) ((87695700) > (2041557252))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) 87695748)) - (6278561381235375178ULL))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 2) 
    {
        arr_13 [i_3] [8] = ((/* implicit */unsigned short) (unsigned char)0);
        var_21 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [(unsigned char)3] [(short)5] [(unsigned char)3] [(unsigned short)5]))));
    }
    var_22 = ((((/* implicit */_Bool) max((((/* implicit */int) ((1629162859) > (((/* implicit */int) (short)-15068))))), (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)43019))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)43639)) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-23)))))))) : (((/* implicit */int) (unsigned char)71)));
}
