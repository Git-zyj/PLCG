/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78539
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [(unsigned char)3]))))) * (arr_1 [i_0]))), (((/* implicit */unsigned long long int) var_3))));
        var_12 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)124))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) arr_0 [i_0])), (arr_3 [i_0])));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)135), ((unsigned char)253)))))))), ((-(((/* implicit */int) ((unsigned char) (unsigned short)64906)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)120))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_12 [i_1] = ((/* implicit */long long int) ((short) (short)2250));
            var_13 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (signed char)6)) >= (((/* implicit */int) arr_11 [i_2] [i_1] [i_1])))));
            var_14 = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_2]);
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741792LL)) ? (((/* implicit */int) arr_18 [i_1] [i_4 + 1] [i_4 + 2] [i_4])) : (((/* implicit */int) (unsigned char)142))));
                        arr_19 [i_1] [i_3] [(unsigned char)10] [i_1] = ((/* implicit */short) ((590071711U) & (((/* implicit */unsigned int) 2147483647))));
                    }
                } 
            } 
        }
    }
    for (short i_5 = 1; i_5 < 16; i_5 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) 2147483647);
        arr_23 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((int) -2147483627))))) ? (((/* implicit */int) (unsigned char)136)) : ((+(((/* implicit */int) arr_21 [i_5]))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_6]))))) : (((/* implicit */int) min((arr_25 [i_6]), (arr_25 [i_6])))))))));
        arr_27 [i_6] = ((/* implicit */unsigned short) (-((-(arr_26 [i_6])))));
    }
    var_18 |= ((/* implicit */short) (~(((/* implicit */int) var_3))));
    var_19 = ((/* implicit */unsigned int) var_5);
    var_20 *= ((/* implicit */unsigned int) var_1);
}
