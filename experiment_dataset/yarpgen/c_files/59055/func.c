/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59055
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
    var_12 = ((/* implicit */unsigned long long int) min((((-808106002380816154LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) (short)6052)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (_Bool)1))));
    var_13 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (max((8342311730546616677ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) (unsigned char)22)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (short)-18999);
                    var_17 ^= ((/* implicit */int) (((+(((/* implicit */int) arr_4 [i_2] [i_0] [i_2])))) > (((/* implicit */int) ((short) arr_3 [i_0])))));
                    arr_10 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1552971595)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)51765)))))) & (min(((~(((/* implicit */int) arr_1 [12ULL])))), (((/* implicit */int) (unsigned short)65535))))));
                }
            } 
        } 
    }
    var_18 = var_4;
}
