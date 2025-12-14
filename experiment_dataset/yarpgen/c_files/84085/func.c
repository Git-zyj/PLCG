/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84085
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) var_4))));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (_Bool)1)), (var_4))), (((/* implicit */unsigned int) ((-154271115) + (((/* implicit */int) (_Bool)1)))))))) ? (var_4) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((signed char) (signed char)-33))), (-6475592807303126898LL))), (((/* implicit */long long int) -1024919169))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)14507)))))));
                    arr_9 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_0] [i_1]))), ((+(((((/* implicit */_Bool) (short)-17479)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-1))))))));
                    arr_10 [i_0] [i_0] [11U] [i_2] = ((/* implicit */unsigned int) (short)-3771);
                    arr_11 [(unsigned short)4] [i_1] [(unsigned short)4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)0)) >> (((var_4) - (967631473U))))), (arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((-1) * (((/* implicit */int) (signed char)-100))))) : (max((max((var_3), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) arr_1 [i_2]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_13 &= ((/* implicit */unsigned int) ((unsigned short) max((max((var_3), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) var_6))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_16 [i_5 + 1] [i_5] [i_5 - 3] [i_5 - 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_3] [i_0])))))))));
                                arr_22 [i_0] [i_3] [i_3] [i_4] [i_5] [i_6] = arr_5 [i_0] [i_0] [17] [i_5];
                                arr_23 [i_5] [i_5] [i_0] [i_5] [i_6] [(short)22] = ((/* implicit */_Bool) max((min((-1), (((/* implicit */int) ((short) var_5))))), (((int) min(((short)-3771), (((/* implicit */short) (signed char)117)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (1073739776) : (((/* implicit */int) arr_7 [i_0] [i_0])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_13 [(signed char)10]))))))) ? (((min((((/* implicit */int) (signed char)100)), (-1073739776))) - (((/* implicit */int) ((signed char) arr_7 [i_0] [i_0]))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
    }
}
