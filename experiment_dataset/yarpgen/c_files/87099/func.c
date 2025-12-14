/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87099
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned int) var_16)), (arr_2 [i_0])))))));
        var_18 = ((unsigned int) ((unsigned short) (+(((/* implicit */int) (short)16584)))));
    }
    for (int i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        arr_7 [i_1] = (+((-(max((3278198946U), (((/* implicit */unsigned int) arr_6 [i_1])))))));
        var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)62))));
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 1])) >= (((/* implicit */int) arr_5 [i_1 + 1]))));
        arr_9 [i_1] [i_1 - 1] &= ((/* implicit */unsigned int) ((arr_5 [i_1 + 2]) ? (-808991693016685675LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                arr_16 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) var_4);
                arr_17 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-20413))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    var_20 = ((/* implicit */unsigned int) 18446744073709551594ULL);
                    arr_20 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                    var_21 = ((/* implicit */int) var_2);
                }
                arr_21 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)241))));
            }
        } 
    } 
}
