/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69637
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
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) min((var_2), (((/* implicit */short) (signed char)-17))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)8951))))))) : (((((/* implicit */_Bool) max((var_8), ((unsigned short)47873)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-31487)), (var_13)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))));
    var_20 = ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */short) (!((_Bool)1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_3 [i_0 + 1])) & (1364276381355716445LL)))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) var_17)) : (arr_3 [i_0 + 1]))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0 + 1])))));
                arr_5 [i_0] = ((int) min((arr_0 [i_0 + 1] [i_0 - 1]), (arr_0 [i_1] [i_0 + 1])));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) -1479097754);
                                var_23 = ((unsigned short) ((((/* implicit */_Bool) (short)-14875)) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) arr_4 [(unsigned short)2] [i_0]))))))) ? (min((((unsigned int) (short)-20076)), (((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16383)))));
                                var_25 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)-16167))) / (6211608086239179201LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_0 - 1])) ? (arr_0 [i_4 - 1] [i_0 + 1]) : (((/* implicit */int) var_14)))))));
                                var_26 = max((((unsigned int) (unsigned char)38)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned short)29261)) : (((/* implicit */int) (unsigned short)32288))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) var_17))), (-2970772715216342290LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (((unsigned short) -1350459737)))))) : (min((min((((/* implicit */long long int) var_4)), (1364276381355716445LL))), (min((var_3), (((/* implicit */long long int) (_Bool)1))))))));
}
