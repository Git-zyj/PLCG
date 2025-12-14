/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64620
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_12 [i_0] = ((/* implicit */unsigned short) ((unsigned char) max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (short)29098)))));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_0 [i_0 + 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    for (int i_6 = 2; i_6 < 23; i_6 += 3) 
                    {
                        {
                            arr_19 [i_1] [i_5] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_0]))));
                            var_17 = ((/* implicit */_Bool) (-(max((((((/* implicit */int) (unsigned short)4796)) ^ (((/* implicit */int) (short)29098)))), (((/* implicit */int) (short)5559))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 3) 
    {
        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 2; i_10 < 21; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 2) 
                        {
                            {
                                arr_35 [i_11] [i_7] [i_7] [i_8 - 1] [i_7] = ((/* implicit */short) 2173974840U);
                                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    for (int i_13 = 2; i_13 < 20; i_13 += 4) 
                    {
                        {
                            arr_42 [i_7] [i_7] [i_13] = ((/* implicit */short) max((arr_22 [i_7]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)163)))))));
                            arr_43 [i_7] [i_7] [i_12] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_14)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29101)) ? (((/* implicit */int) (short)-29101)) : (((/* implicit */int) var_8)))))))) ? ((-(((/* implicit */int) (signed char)-74)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_12] [i_12] [i_12]))))) ? (((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_3))))))));
                            var_20 = ((/* implicit */long long int) (~(((unsigned long long int) var_4))));
                            arr_44 [i_7] [i_7] [i_8] [i_7] [i_7] [i_13] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (short)19807))))) ? (((/* implicit */int) max(((short)29112), ((short)-29110)))) : ((~(((/* implicit */int) arr_33 [i_7] [i_8] [i_7])))))), (max(((~(((/* implicit */int) (short)29070)))), (((/* implicit */int) ((((/* implicit */int) arr_36 [i_7] [i_8 + 1] [i_7])) < (((/* implicit */int) (short)-29101)))))))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned int) ((arr_10 [i_7] [i_7] [i_7] [(_Bool)1] [i_8]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-64)))));
            }
        } 
    } 
}
