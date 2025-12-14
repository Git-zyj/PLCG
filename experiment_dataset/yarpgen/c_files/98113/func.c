/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98113
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
    var_16 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((signed char) var_12))) : (-1))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)32762))))));
        var_18 = ((/* implicit */unsigned char) var_9);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_3 - 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned short)54044)))), (((/* implicit */int) (((+(((/* implicit */int) (unsigned char)224)))) > (((((/* implicit */int) (short)9475)) >> (((/* implicit */int) var_7)))))))));
                        arr_12 [i_0] [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned short) (+(var_0)));
                    }
                    var_19 -= ((/* implicit */unsigned char) max((max((((/* implicit */short) (unsigned char)231)), ((short)1018))), (((/* implicit */short) var_12))));
                    var_20 = ((/* implicit */signed char) arr_7 [i_0] [i_1]);
                    arr_13 [i_0] [i_0] [(unsigned short)12] [i_0] = ((/* implicit */int) (-(((arr_1 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_2]);
                }
            } 
        } 
    }
}
