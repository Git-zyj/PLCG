/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80376
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
    var_11 = ((/* implicit */signed char) var_3);
    var_12 |= ((/* implicit */short) var_1);
    var_13 = ((/* implicit */int) ((min((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_9)))))) == (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] |= ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] |= (-(((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_1 [2LL]))))) + (arr_0 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((+(1165968601318781759ULL))))))));
                                var_14 += ((/* implicit */long long int) ((((858500043769717375LL) << (((((/* implicit */int) (unsigned short)65533)) - (65532))))) == (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (unsigned short)65533))))))));
                                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_2 + 3])), (858500043769717396LL)))) ? (((/* implicit */unsigned long long int) 858500043769717396LL)) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_3] [i_1] [8LL]))))) ? (((((/* implicit */unsigned long long int) 294530445676356538LL)) | (arr_6 [i_3] [i_1] [i_3]))) : (((((/* implicit */_Bool) arr_10 [i_0] [5LL] [5LL] [(short)3] [(short)3] [(short)3])) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 + 3] [i_3] [i_3] [i_3])))))))));
                                arr_17 [i_0] [i_4] [i_2] [(_Bool)1] [i_4] [i_4] = (+(((((/* implicit */_Bool) arr_4 [i_4 - 3])) ? (arr_0 [i_3]) : (((((/* implicit */_Bool) -4157662457996931695LL)) ? (858500043769717396LL) : (arr_10 [(_Bool)1] [i_4] [i_3] [i_0] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0 + 3] [5] [i_2] = ((/* implicit */short) min((((/* implicit */int) (!((_Bool)0)))), (max((arr_2 [(unsigned char)6]), (arr_2 [(unsigned short)0])))));
                    arr_19 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_14 [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0 + 3] [i_2 + 3] [i_2 - 1]), (((/* implicit */unsigned short) (unsigned char)244))))), (max((((/* implicit */unsigned long long int) arr_14 [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2 + 2] [i_2 + 1])), (6893375474317937365ULL)))));
                    arr_20 [i_2] [i_0] = (+(((/* implicit */int) (unsigned short)41352)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    var_16 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_0] [i_0])) | (((/* implicit */int) arr_23 [i_6] [i_6] [i_6] [i_6]))))));
                    var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_25 [i_0] [i_5] [i_6])) : (((/* implicit */int) ((signed char) (_Bool)0)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)52))) / (-1395754573051200393LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)2)))))));
                }
            } 
        } 
    }
    for (signed char i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
    {
        var_18 ^= ((/* implicit */signed char) min((1165968601318781759ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_23 [i_7] [i_7] [i_7] [i_7])) | (((/* implicit */int) (unsigned char)157)))))))));
        arr_28 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_7])) == (max((((/* implicit */int) arr_7 [i_7 + 1])), (((((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) + (((/* implicit */int) (_Bool)0))))))));
    }
}
