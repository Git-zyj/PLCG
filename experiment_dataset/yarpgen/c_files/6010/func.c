/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6010
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
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((var_15), ((short)14943)));
                                var_16 = ((/* implicit */unsigned int) (short)-14949);
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (short)-14913);
                                var_19 = ((/* implicit */short) (unsigned short)65535);
                                var_20 += ((/* implicit */unsigned char) (unsigned short)0);
                                var_21 -= ((/* implicit */int) (unsigned short)17);
                            }
                        } 
                    } 
                    arr_18 [i_0 - 2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (short)24140);
                    arr_19 [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (short)0);
                }
            } 
        } 
    } 
}
