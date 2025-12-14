/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90232
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)65508)), (var_0)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_0] [i_1]));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [(unsigned char)0] [i_3] [i_3] [i_0] = arr_7 [i_0];
                                var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) -2097779073))) ? (((unsigned int) 1073741823LL)) : (((/* implicit */unsigned int) ((arr_2 [i_2] [(short)5]) ? (2136291931) : (((/* implicit */int) (unsigned short)17)))))))), (((arr_10 [i_0] [i_3] [i_3 + 2] [i_3 + 2]) << (((((/* implicit */int) (short)-32766)) + (32770)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) 2136291930);
            }
        } 
    } 
    var_20 &= ((/* implicit */signed char) (short)18851);
}
