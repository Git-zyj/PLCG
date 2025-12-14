/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79347
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
    var_20 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_8))))) ? (var_7) : (((long long int) (signed char)-104)))));
        arr_4 [i_0] [(_Bool)1] = max((((/* implicit */long long int) max((var_3), (var_14)))), (max((((/* implicit */long long int) max((((/* implicit */int) var_18)), (arr_2 [i_0])))), (((long long int) arr_2 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_1] [i_2] = ((/* implicit */_Bool) (signed char)12);
                        var_22 = ((/* implicit */_Bool) var_0);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned short) ((unsigned int) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (arr_16 [i_4] [i_4]))), (((/* implicit */long long int) (+(((/* implicit */int) var_5))))))));
        var_24 = ((/* implicit */unsigned long long int) max(((+(var_13))), (max((((/* implicit */long long int) (-(((/* implicit */int) var_18))))), (((-3956402816121350483LL) / (3441296146217489607LL)))))));
        arr_19 [i_4] [(unsigned short)19] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)126)) < ((-(var_1)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_19))))) ? (((/* implicit */int) min((var_11), (((/* implicit */short) arr_15 [i_4]))))) : (((/* implicit */int) ((2030577311) != (((/* implicit */int) (signed char)97)))))))));
        arr_20 [i_4] = ((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)127))))));
        arr_21 [i_4] [(unsigned char)8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(765716336U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_4))))) : (((((/* implicit */unsigned int) arr_2 [i_4])) | (var_2)))))));
    }
    var_25 = ((((/* implicit */int) var_8)) & (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_26 = ((/* implicit */signed char) (-(var_1)));
                arr_26 [i_5] = ((/* implicit */long long int) min((((/* implicit */signed char) arr_0 [i_6] [8LL])), ((signed char)113)));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                {
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_3))))) / (((long long int) 1LL))))) && (((/* implicit */_Bool) var_2)));
                    var_28 *= ((/* implicit */_Bool) (-((-(((/* implicit */int) ((unsigned short) 4294967295U)))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                {
                    var_29 &= ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65535)), (((arr_5 [i_5] [(unsigned char)4] [(_Bool)1]) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) var_6))))));
                    var_30 = ((/* implicit */_Bool) min((arr_8 [i_5] [i_5] [i_6] [i_8]), (min((-3956402816121350480LL), (((/* implicit */long long int) (unsigned char)6))))));
                    arr_32 [i_8] [i_6] [i_6] [7ULL] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) (unsigned char)130)) ? ((+(((/* implicit */int) var_14)))) : (((((/* implicit */int) var_18)) << (((var_12) - (2050060440713502161LL)))))))));
                    arr_33 [(signed char)1] [0LL] [(signed char)1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (max((((/* implicit */unsigned short) (signed char)-121)), (var_17)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_5]))));
                }
                arr_34 [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-8635866678736202415LL)))) ? (min((max((var_7), (-1362739561688276887LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1152921504606846975LL))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529)))));
            }
        } 
    } 
}
