/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7144
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
    var_16 = ((/* implicit */_Bool) var_13);
    var_17 = ((/* implicit */short) (-(((((/* implicit */int) var_9)) | (((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (short)13859)) : (((/* implicit */int) (short)32750))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned char) var_9))))) : (max((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (0U))), (((/* implicit */unsigned int) (unsigned short)51925))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_0]);
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_15))));
                    arr_9 [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (short)13859);
                }
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 3; i_5 < 19; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_4] [i_4] [i_4] [i_4] [i_0] [i_5 - 1] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [(signed char)11] [i_4]);
                            var_20 = ((/* implicit */unsigned char) var_10);
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (((+(((((/* implicit */_Bool) (short)-13860)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)13860)))))) % (((/* implicit */int) (short)13845)))))));
                            var_22 = ((/* implicit */short) (-(((((/* implicit */int) arr_16 [i_0] [i_4] [i_3] [i_5 - 1])) / (((((/* implicit */int) arr_6 [i_0] [i_0] [i_3] [i_4])) / (((/* implicit */int) arr_16 [i_0] [i_4] [i_5] [i_4]))))))));
                        }
                        arr_18 [i_4] = ((/* implicit */unsigned char) min((((/* implicit */short) arr_12 [i_0] [i_4])), (arr_0 [i_4])));
                        var_23 = ((/* implicit */unsigned int) (short)13859);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_24 = (_Bool)1;
                        arr_22 [i_0] [i_1] [(unsigned char)14] = ((/* implicit */short) (+(((/* implicit */int) (short)-13860))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_11)))) % (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) (short)16273)))))));
                        var_26 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [i_0])) ? (((((/* implicit */_Bool) (short)-13860)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_0] [i_6])))) : (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (short)13860))))))));
                        var_27 = ((/* implicit */unsigned short) (short)-11692);
                    }
                    var_28 ^= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_21 [i_0])) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) ((short) var_1))))));
                    arr_23 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) (short)-16292);
                    arr_24 [i_0] [3U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned char)19] [(unsigned char)19] [i_0] [i_1])) ? (arr_11 [i_0] [i_0] [i_3] [i_0]) : (arr_11 [i_0] [i_0] [i_1] [i_3])))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) (short)-13858)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)18776)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))));
                    var_29 -= ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_3] [i_1]);
                }
                arr_25 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((arr_11 [i_1] [i_1] [i_1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18)))))));
                var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1])))) % (((((/* implicit */int) var_12)) - (((/* implicit */int) (short)13859))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) - (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1])))) : (((/* implicit */int) arr_7 [(short)0] [i_0] [i_0] [i_1]))));
            }
        } 
    } 
}
