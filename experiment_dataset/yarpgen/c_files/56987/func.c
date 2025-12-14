/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56987
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)60403)))))));
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)60403))))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) == (var_4))))) : (var_1)))));
    var_12 &= (((_Bool)1) ? ((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((var_3) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_2)))) + (21))) - (20))))) : (((((((((/* implicit */int) (_Bool)1)) - (var_5))) + (2147483647))) << (((var_8) - (3519400550U))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        arr_14 [i_0 + 1] [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0 + 2]);
                        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_7))));
                    }
                    var_14 = ((/* implicit */short) ((2147483647) | (1610079330)));
                }
            } 
        } 
    } 
}
