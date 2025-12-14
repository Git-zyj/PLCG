/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86911
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((int) min((8402236831736196349ULL), (((/* implicit */unsigned long long int) var_13)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) min((1466423551U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */int) (unsigned short)62087))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28761)) && (((/* implicit */_Bool) arr_7 [i_2] [i_2]))))) : (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0])))))))));
                        arr_10 [i_2] = ((/* implicit */unsigned long long int) (unsigned short)6039);
                    }
                    for (long long int i_4 = 2; i_4 < 9; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0 + 4])) : (((/* implicit */int) arr_0 [i_0 - 2])))))));
                            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(arr_11 [i_2])))) + ((~(((/* implicit */int) (unsigned short)36775)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_12 [(signed char)9] [11U] [i_2] [i_4] [i_5] [i_2]) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_4]))))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            arr_18 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2] [2] [i_0 + 2] = ((/* implicit */signed char) (!((_Bool)0)));
                            var_21 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            arr_23 [(unsigned short)0] [i_1] [(unsigned short)0] [(unsigned short)6] [i_2] = arr_19 [i_0] [i_1] [i_1] [i_1] [i_4 - 2] [i_4] [i_2];
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (short)32767))))))));
                        }
                        arr_24 [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_4] = (+(max((arr_12 [i_0 + 2] [i_2] [i_2] [i_2] [i_4 + 3] [i_4 + 2]), ((+(((/* implicit */int) arr_15 [i_0] [i_0])))))));
                        var_23 = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_4 - 2])) ? (arr_21 [(short)3] [i_2] [(short)3] [i_2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0 - 4] [i_4] [(_Bool)1] [i_4 + 1]))))) >> (((((((/* implicit */_Bool) arr_20 [i_0] [i_0 + 4] [6] [(unsigned short)7] [i_4 - 1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_4] [i_4] [i_4 + 1])))) - (32750)))))) : (((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_20 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_4 - 2])) ? (arr_21 [(short)3] [i_2] [(short)3] [i_2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0 - 4] [i_4] [(_Bool)1] [i_4 + 1]))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_20 [i_0] [i_0 + 4] [6] [(unsigned short)7] [i_4 - 1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_4] [i_4] [i_4 + 1])))) - (32750))))));
                    }
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-79)) > (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) (short)-32752)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))) != (var_8)))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */int) min((min((var_9), (((/* implicit */long long int) ((short) var_12))))), (((/* implicit */long long int) ((signed char) var_7)))));
    var_26 = ((/* implicit */int) (_Bool)1);
    var_27 = ((/* implicit */int) var_14);
    var_28 = ((/* implicit */unsigned short) var_12);
}
