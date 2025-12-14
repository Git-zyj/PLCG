/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64245
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
    var_13 |= ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38614))))) + (((/* implicit */int) (signed char)47)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_11 [(unsigned char)9] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) (signed char)-4)) >= (((/* implicit */int) (short)-19710))))) | ((+(((/* implicit */int) arr_0 [i_0])))))) << (((/* implicit */int) (((+(((/* implicit */int) var_5)))) >= ((+(((/* implicit */int) var_12)))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        arr_15 [i_3] [i_1] [i_1] [(short)21] = ((/* implicit */signed char) max((((/* implicit */unsigned short) arr_0 [i_3 - 3])), (max((min((var_10), ((unsigned short)63766))), (((/* implicit */unsigned short) min((arr_10 [(unsigned char)14] [i_1]), (var_9))))))));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((arr_5 [i_0] [i_3 + 2]) ? (((((/* implicit */_Bool) ((short) var_2))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : (((((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */int) ((short) (unsigned char)167))) : ((+(((/* implicit */int) var_0)))))))))));
                        arr_16 [i_1] = ((/* implicit */unsigned char) var_6);
                    }
                    for (unsigned char i_4 = 3; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [(unsigned short)7] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)21])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1] [(short)8]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_9)))))) | (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-18)) + (((/* implicit */int) (unsigned short)63058))))) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (unsigned short)759))))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((signed char) arr_17 [i_0 + 2] [i_0] [i_0] [i_2] [i_4]))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_1] [(unsigned short)16]))))))))));
                        arr_20 [i_0] [i_0] [i_0] [i_1] [(short)16] = ((unsigned char) (+(((((/* implicit */_Bool) arr_18 [i_0 + 3] [i_0] [i_0] [(signed char)4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_1] [i_2]))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? ((+(((/* implicit */int) arr_17 [(short)2] [i_4] [i_0] [(unsigned char)14] [i_2])))) : (((/* implicit */int) (unsigned char)118))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_2 [(unsigned char)13])) + (((/* implicit */int) var_2))))))));
                    }
                    for (unsigned char i_5 = 3; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) arr_10 [(unsigned short)3] [(unsigned short)5])) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [(_Bool)1] [i_1] [(unsigned short)17] [i_5])) > (((/* implicit */int) arr_14 [i_1] [(_Bool)1] [i_2] [(unsigned short)13]))))) : ((+(((/* implicit */int) arr_6 [i_1] [i_5])))))) : (((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)1)))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_0)))))))));
                        arr_24 [i_1] [i_1] [i_1] [i_5 + 1] = var_0;
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_2]))));
                    }
                    arr_25 [i_0] [i_1] [(unsigned short)8] [i_2] = ((unsigned short) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)98))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_4))))))));
}
