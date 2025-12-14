/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9107
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)4]))))) % (((/* implicit */int) min((arr_0 [i_0]), (min((arr_0 [i_0]), (((/* implicit */unsigned short) (short)11924)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) (short)11924)) & (((((/* implicit */_Bool) (-(((/* implicit */int) (short)11924))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))));
                    var_13 = var_2;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)48852)) <= (((/* implicit */int) (short)11924))))) & (((/* implicit */int) ((((/* implicit */int) (short)-23214)) <= (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1023)) & (((/* implicit */int) (unsigned short)64512))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned short)844))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2 + 1] [i_3] [i_4]))))) ? (((/* implicit */int) min(((short)30949), ((short)32767)))) : (((/* implicit */int) (!((_Bool)1))))))));
                                arr_12 [i_1] [i_3] [i_2 - 1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) arr_1 [(_Bool)1] [i_4]);
                                var_16 &= ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_5 [i_3] [i_1 + 1] [(unsigned short)4])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43394))))))))));
                                arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16683)) ? (((/* implicit */int) (unsigned short)23732)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-19468)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_2 + 2])) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) max((arr_5 [(short)10] [(_Bool)1] [(short)6]), ((unsigned short)2048)))), ((-(((/* implicit */int) (_Bool)1))))))) ? ((-(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)65535))))))) : (min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_3 [i_0] [(_Bool)1] [(_Bool)1]))))))));
        var_17 = ((/* implicit */_Bool) (unsigned short)0);
    }
    for (short i_5 = 3; i_5 < 13; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) 
            {
                {
                    arr_22 [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)28610)) <= (((/* implicit */int) arr_20 [9LL] [i_7]))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)1004)) ? (((/* implicit */int) arr_9 [(short)20] [i_6] [(unsigned short)6] [i_7 + 1])) : (((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7 + 1])))), (((/* implicit */int) min((arr_10 [i_5] [i_6] [i_7 + 1] [i_6] [i_6]), (((/* implicit */unsigned short) var_1))))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)44350)) : (((/* implicit */int) arr_8 [i_5] [i_5 + 1] [i_5] [i_5] [16LL])))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_8))))))));
    }
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+((-(((/* implicit */int) var_4)))))))));
}
