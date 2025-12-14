/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96681
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32749))) : (var_0))), (((/* implicit */unsigned int) arr_2 [(_Bool)0] [i_1] [i_0])))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_11)), (var_15))), (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)32765)) & (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((_Bool) var_6))) : ((~(((/* implicit */int) (short)32744)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) >= (max((((/* implicit */unsigned long long int) var_7)), (var_15))))))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_11 [i_3] = ((_Bool) (~(((/* implicit */int) arr_2 [i_2] [i_3] [i_4]))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */int) var_15);
                                arr_18 [i_3] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */_Bool) arr_8 [i_3]);
                                var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)81)), ((short)32767))))))));
                                arr_19 [i_3] [i_3] [i_3] [i_4] [i_3] [i_2] [i_5] = ((/* implicit */unsigned long long int) arr_14 [i_2] [i_3] [i_4] [i_5 - 2] [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) min((var_0), (var_11)))) || (((/* implicit */_Bool) var_12)))))));
}
