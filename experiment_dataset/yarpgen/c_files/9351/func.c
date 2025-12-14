/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9351
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
    var_16 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3 - 1] [i_1] = ((/* implicit */int) (unsigned char)28);
                            var_17 = ((/* implicit */unsigned short) (-((~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))));
                            arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_3] = (~((~(((/* implicit */int) (_Bool)1)))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 454188497U)))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1960503030)))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))));
                            }
                            for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned short) (_Bool)1);
                                var_21 = ((/* implicit */signed char) (~(((((/* implicit */int) (short)28759)) / (((/* implicit */int) (_Bool)1))))));
                            }
                            for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1322581487)) ? ((~(((((/* implicit */int) (short)-1)) / (((/* implicit */int) (short)-6904)))))) : (((/* implicit */int) (_Bool)1))));
                                var_23 = ((/* implicit */int) min((var_23), (((((409974529) != ((~(((/* implicit */int) (short)1)))))) ? (((/* implicit */int) (unsigned char)237)) : ((~(((((/* implicit */int) (short)-1)) & (-12)))))))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) (~((-(2029092577)))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? ((-(18103326876375024869ULL))) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))))));
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1454489102)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)32754))))) && (((/* implicit */_Bool) (+(4682727580807995796ULL))))));
                            }
                            var_26 = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (short)-8))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (unsigned char)254)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3269589727U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)6891))))))) < (((/* implicit */int) var_14))));
    var_28 *= ((/* implicit */unsigned short) (~((-((+(944000322)))))));
}
