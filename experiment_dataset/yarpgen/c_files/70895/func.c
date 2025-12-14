/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70895
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))))));
    var_13 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1350131619)) ^ (5167183069579229191LL)))) ^ (var_1))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12785)))));
    var_14 &= ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [5] [(short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138))) : (4294967295U))), (((/* implicit */unsigned int) ((unsigned char) arr_6 [12] [i_1])))))) ? (((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_2 - 1])) ? (-727865342) : (((int) (_Bool)1)))) : ((+(((/* implicit */int) arr_1 [i_1]))))));
                    arr_9 [i_0] [i_0] [9] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (9223372036854775807LL) : (((/* implicit */long long int) (+(2323925297U))))));
                    arr_10 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1])) < (((/* implicit */int) arr_3 [i_0] [i_1] [i_0 + 1]))))), (1603955287U)));
                    var_15 = ((/* implicit */int) ((short) (-((-(((/* implicit */int) (signed char)98)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)91)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21886)))))) || (((/* implicit */_Bool) (unsigned char)23))));
                var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (short)1023)))))));
                var_18 += (_Bool)0;
            }
        } 
    } 
}
