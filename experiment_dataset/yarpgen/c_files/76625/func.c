/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76625
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)114)))))))))))));
    var_11 = ((/* implicit */unsigned short) (((~(var_6))) | (max((((/* implicit */int) var_5)), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)142)))))))) ? (((int) max((((/* implicit */int) (unsigned short)65535)), (arr_3 [i_0] [(unsigned short)5])))) : (((int) arr_3 [i_1 - 1] [i_0 + 1]))));
                arr_5 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-17715))))) : (3860360606U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) arr_0 [i_0 - 2] [i_0 - 1])));
            }
        } 
    } 
}
