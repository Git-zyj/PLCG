/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84793
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) * (((/* implicit */int) var_3)))) == (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_14))))) % (((/* implicit */int) min(((short)4931), ((short)954))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (short)1349)))), (((/* implicit */int) max((((/* implicit */short) ((unsigned char) (_Bool)1))), (max((((/* implicit */short) (unsigned char)238)), ((short)-16969))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))) ? (((int) 1329703246)) : (((/* implicit */int) (_Bool)0)))) & (((int) (unsigned char)234))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) min(((short)-486), (((/* implicit */short) (unsigned char)215)))))));
                            arr_15 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((int) (unsigned char)215)) / (((/* implicit */int) (short)18227))));
                            var_18 = ((/* implicit */short) ((((((/* implicit */int) (short)-13993)) | (((/* implicit */int) (_Bool)1)))) / ((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                            {
                                var_19 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)30897)) : (((/* implicit */int) (unsigned char)238)))) % (((/* implicit */int) (unsigned char)217))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (short)7230))));
                                var_21 = ((/* implicit */_Bool) ((short) (_Bool)1));
                            }
                            /* vectorizable */
                            for (short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                            {
                                arr_22 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-18250)) + ((((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)191))))));
                                arr_23 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)18198)) ? (((/* implicit */int) var_3)) : (-1809242209))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (-1122749957)))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)186))) ? (((((/* implicit */int) (unsigned char)31)) / (-1680975597))) : (((((/* implicit */_Bool) (unsigned short)42279)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)8))))))) ? (((/* implicit */int) min(((unsigned short)65058), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */int) (unsigned short)23368)) / (150219941))))))));
                                arr_27 [i_6] [i_3] [i_3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)-7223), (((/* implicit */short) (_Bool)1))))) ? (((int) (short)-13993)) : (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)200)) > (((/* implicit */int) (short)-7223))))), (min((var_13), ((unsigned char)240))))))));
                            }
                        }
                    } 
                } 
                arr_28 [i_0] = ((/* implicit */unsigned char) ((short) max((min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)53879))), (((/* implicit */unsigned short) (_Bool)1)))));
            }
        } 
    } 
}
