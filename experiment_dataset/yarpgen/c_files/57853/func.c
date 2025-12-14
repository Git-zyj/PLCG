/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57853
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-59)) || ((_Bool)1))))) * (((((/* implicit */_Bool) 151549417U)) ? (((/* implicit */unsigned int) 159866200)) : (4156676111U))))));
                    var_15 = ((/* implicit */int) ((unsigned int) (short)-11452));
                    var_16 = ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31656))) : (((unsigned int) (+(arr_2 [i_2] [i_1 - 2] [i_0])))));
                    arr_7 [i_1] [i_1 - 2] [i_1] = ((/* implicit */int) (~(min((((arr_4 [i_0] [i_1] [i_1] [i_1]) << (((3784593599U) - (3784593599U))))), (((/* implicit */unsigned int) ((unsigned char) -17LL)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */short) ((221021400U) != (((/* implicit */unsigned int) ((int) max((arr_10 [(_Bool)1]), (((/* implicit */unsigned int) var_2))))))));
        arr_12 [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */int) ((signed char) arr_5 [i_3] [13U] [i_3]))) - (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_5 [16U] [16U] [i_3])) : (((/* implicit */int) (signed char)-69))))))));
    }
    var_17 *= (-(((/* implicit */int) ((signed char) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_13)))))));
    var_18 = ((/* implicit */unsigned int) var_7);
    var_19 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) min((var_1), (((/* implicit */unsigned char) (signed char)69)))))))));
}
