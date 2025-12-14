/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66080
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
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) (signed char)-76);
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (signed char)24))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
        var_16 = ((/* implicit */short) (signed char)-16);
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */short) (_Bool)1);
            var_17 += ((/* implicit */_Bool) (signed char)-12);
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (_Bool)1))));
        }
        for (short i_3 = 2; i_3 < 18; i_3 += 2) /* same iter space */
        {
            arr_13 [i_1 - 1] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)21);
            var_19 = ((/* implicit */unsigned long long int) (signed char)127);
        }
        for (short i_4 = 2; i_4 < 18; i_4 += 2) /* same iter space */
        {
            arr_16 [i_1] [i_1] = (signed char)-68;
            var_20 = ((/* implicit */unsigned char) (unsigned short)14274);
            arr_17 [i_1] [i_4 - 2] = ((/* implicit */signed char) (short)-18113);
        }
        arr_18 [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)-30);
    }
    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 2) 
    {
        var_21 = ((/* implicit */short) (_Bool)1);
        arr_21 [5U] = ((/* implicit */unsigned short) 9223372036854775807LL);
        arr_22 [i_5 + 1] = ((/* implicit */int) (short)4032);
        var_22 -= ((/* implicit */long long int) (unsigned short)65520);
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        arr_25 [i_6] = -2767405544643544186LL;
        var_23 = ((/* implicit */signed char) -2767405544643544158LL);
        var_24 = (signed char)88;
    }
    var_25 = ((/* implicit */short) var_3);
    var_26 = ((/* implicit */long long int) var_0);
}
