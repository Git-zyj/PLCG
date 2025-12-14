/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91311
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
    var_11 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+((((+(((/* implicit */int) (short)-3638)))) - ((+(((/* implicit */int) (short)-3869))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61207)) > (((/* implicit */int) arr_7 [i_0]))));
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_12 = arr_15 [i_4 + 2] [i_3] [i_2] [i_1] [6] [i_0];
                                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_6);
                                var_13 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_4 - 2] [i_2])) << ((((((-(((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_13 [i_1])))))) + (46850))) - (18)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_2))));
}
