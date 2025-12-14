/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91338
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
    var_20 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) max((((/* implicit */signed char) var_11)), ((signed char)127)))))));
    var_21 = ((/* implicit */short) max((((/* implicit */int) var_12)), (var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_12 [i_0]);
                                arr_17 [i_0] [i_1] [i_1] [i_2] [(unsigned short)12] [i_3 - 3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] [(signed char)8]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 112U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */int) ((((unsigned long long int) arr_3 [7U])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-23092))))))) : (((arr_13 [i_0] [i_1] [i_2] [i_3]) ? (arr_6 [(unsigned char)3] [i_4] [i_2]) : (((var_6) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) (unsigned short)4088))))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (short)-23088);
            }
        } 
    } 
}
