/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82234
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
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
    var_12 = var_1;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */short) min((min(((-(726595339553333300LL))), (3939127474091401612LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) (short)(-32767 - 1)))) : (((/* implicit */int) var_5)))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 14; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_5 [i_1] [(short)4]))));
                    var_14 = arr_1 [i_2 + 1] [(unsigned char)14];
                    arr_12 [11LL] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned int) (+(arr_4 [i_2 + 3] [i_2 + 1]))));
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2]))))), (arr_7 [i_2 - 1] [i_3])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    arr_18 [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) arr_16 [i_4] [i_4]);
                    arr_19 [i_5] [i_4] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (short)-32765);
                    arr_20 [i_1] [i_1] [10] [i_5] = ((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4] [i_4]);
                }
            } 
        } 
    }
    var_16 *= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
}
