/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86931
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
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 2]))))) ? (((/* implicit */int) ((((int) (signed char)19)) < ((~(var_7)))))) : (((/* implicit */int) arr_2 [i_1] [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_1] [i_3] = ((/* implicit */short) ((signed char) max((((/* implicit */short) (unsigned char)104)), ((short)0))));
                                var_19 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [18ULL] [i_1])) >= (((/* implicit */int) arr_4 [i_0 - 1] [i_2] [20U] [i_3])))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_2] [i_4])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_21 [(unsigned char)1] [i_0] [i_0] [i_0] [(unsigned char)19] [i_0] [8ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_1 [(short)6] [i_0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)1))))), (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0])) ? (536739840U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_5] [i_7])))))))) ? (((((/* implicit */_Bool) max(((unsigned short)41175), (((/* implicit */unsigned short) var_4))))) ? (((int) (unsigned short)22032)) : ((+(((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 129024ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [(unsigned short)17]))) : (var_15)))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_6] [i_6] [(unsigned short)12] [i_0]))) : (((/* implicit */int) ((_Bool) var_1)))))));
                                arr_22 [i_5] [i_1] [(unsigned char)20] [i_1] [(short)14] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_17 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0]))) <= ((+(((/* implicit */int) (short)-11))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (_Bool)1);
}
