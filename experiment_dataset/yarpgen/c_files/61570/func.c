/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61570
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)2302)) : (((/* implicit */int) (unsigned char)163))))), (arr_7 [i_0] [i_2] [i_1] [i_0]))))))));
                            var_13 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_1 [i_1]))))));
                            arr_11 [(signed char)2] [(signed char)2] [i_2] [i_2] = ((/* implicit */short) max((max((((((/* implicit */int) (signed char)-119)) ^ (((/* implicit */int) var_0)))), (((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) var_5)))))), (((/* implicit */int) (unsigned char)93))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [(unsigned char)2] = ((/* implicit */short) (signed char)15);
                    arr_17 [i_0] [(unsigned short)0] [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-125))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(signed char)0])))))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    arr_20 [i_0] = (!(((/* implicit */_Bool) (unsigned short)63238)));
                    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_5] [i_5])) ? (((/* implicit */int) arr_12 [0LL] [i_1] [i_0])) : (((/* implicit */int) var_7)))))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)233)) >= (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */int) (unsigned short)63238)) | (((/* implicit */int) arr_6 [i_5] [i_1] [i_0]))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_5] [i_0] [i_0]))));
                    var_17 = ((/* implicit */unsigned int) var_3);
                }
                arr_21 [i_0] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_1])) - (((/* implicit */int) (_Bool)0))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) (signed char)-125)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2297)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (_Bool)0)))))));
                var_19 = ((/* implicit */signed char) ((((unsigned long long int) ((signed char) var_7))) << (((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */_Bool) arr_19 [(signed char)11] [11] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_3))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 4; i_6 < 15; i_6 += 3) 
    {
        for (long long int i_7 = 1; i_7 < 13; i_7 += 4) 
        {
            {
                var_20 *= ((/* implicit */signed char) ((((18446744073709551606ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10544))))) ? (((((((/* implicit */int) arr_25 [i_6 - 3] [(_Bool)1] [i_6])) << (((((/* implicit */int) arr_22 [i_6] [i_7 + 2])) - (117))))) | (((((/* implicit */_Bool) arr_24 [i_6 - 4])) ? (((/* implicit */int) (unsigned short)63233)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7] [i_7]))))) == (var_8))))));
                arr_27 [(unsigned char)7] = ((int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_6] [i_6] [i_7])) << (((((((/* implicit */int) var_0)) + (4985))) - (9)))))) : (((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
            }
        } 
    } 
    var_21 -= max((var_0), (var_10));
}
