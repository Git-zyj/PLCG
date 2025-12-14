/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57955
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
    var_14 &= ((/* implicit */signed char) min(((-((+(((/* implicit */int) var_9)))))), ((+(((/* implicit */int) (_Bool)0))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2 + 1])), (3802686319323205877LL))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned short) var_12);
                            arr_15 [18U] [(short)14] [i_2] [i_2] [i_2] [18U] [(_Bool)1] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) var_4)) : (1128563137U))) : (((/* implicit */unsigned int) (-2147483647 - 1))))), (max((((/* implicit */unsigned int) arr_11 [7ULL] [(_Bool)1] [i_0] [i_0] [i_0] [(_Bool)1])), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3166404159U)))))));
                            var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || ((_Bool)1)))), (max((472187072), ((-2147483647 - 1))))))) || ((!(((/* implicit */_Bool) (unsigned short)11055))))));
                            arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (arr_10 [i_0] [i_1] [i_4] [i_3] [i_0])))) ? ((+(arr_0 [(_Bool)1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2543818653U)) ? (3676225503385636403ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (1355933890) : (var_13)))))))) : (((((/* implicit */_Bool) (-(1083296650U)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_12 [(signed char)20] [i_1] [i_2] [i_3] [i_4]))))) : (((long long int) (signed char)-87))))));
                            var_18 &= ((/* implicit */unsigned short) (+(1717749774)));
                        }
                        var_19 = ((/* implicit */int) (-(((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_12))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-7105))))))))));
                    }
                    for (short i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        var_20 = var_5;
                        var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) / ((-2147483647 - 1))))) ? (arr_7 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) 0))))));
                        var_22 |= ((/* implicit */signed char) (-(var_4)));
                        var_23 = ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (max((((/* implicit */unsigned int) var_2)), (arr_10 [i_0] [i_2 + 1] [i_2 + 1] [9U] [i_0]))))) < (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_11 [7LL] [7LL] [i_1] [i_2] [i_5] [i_5])), ((unsigned short)417)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_10 [i_0] [i_1] [i_5] [i_5 + 1] [i_0]) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))));
                        arr_19 [i_0] [(short)1] [i_2] [i_2] [i_0] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-12244))) / (9223372036854775807LL))))))));
                    }
                    for (short i_6 = 1; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_6 - 1] [i_2] &= ((/* implicit */unsigned int) (_Bool)1);
                        arr_23 [i_0] [i_1] [15LL] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -7777165546819935472LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 307973707)) ? (7777165546819935472LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
}
