/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62878
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 += ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_1 [i_0]))));
        var_19 -= ((/* implicit */unsigned short) var_8);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_7)))));
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(unsigned char)10]))))) != (((var_15) * (33488896U)))));
            var_21 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) var_15)))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [(unsigned short)2]);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((((long long int) var_1)) - (((/* implicit */long long int) ((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_6))));
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */int) arr_2 [(unsigned char)2] [i_3] [i_3])) / (((/* implicit */int) var_13)))))) > (min((((((/* implicit */int) (unsigned short)65533)) + (((/* implicit */int) (signed char)-26)))), (((/* implicit */int) min((arr_9 [i_3]), (((/* implicit */unsigned short) var_1)))))))));
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) | (4261478403U)));
    }
    var_24 = ((/* implicit */unsigned char) ((short) ((long long int) ((549739036672ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13332)))))));
}
