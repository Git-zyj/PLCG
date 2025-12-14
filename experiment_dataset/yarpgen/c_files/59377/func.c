/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59377
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1]));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_0 [i_0])))) ? ((+(((/* implicit */int) (signed char)-15)))) : ((~(((/* implicit */int) var_15))))));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))))));
        }
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7756493296551511437ULL)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)31)) > (((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */int) ((unsigned char) arr_3 [i_0 + 2])))));
        var_23 = ((/* implicit */unsigned int) ((short) (unsigned char)0));
    }
    /* vectorizable */
    for (short i_2 = 2; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_1 [i_2] [i_2 + 2])))));
        arr_8 [i_2] = ((/* implicit */unsigned char) ((arr_7 [i_2]) ? (arr_0 [i_2 + 2]) : (arr_0 [i_2 + 2])));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))) ? (((((/* implicit */int) arr_7 [i_2])) * (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_6 [i_2]))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7756493296551511449ULL)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_7 [i_2]))))) ? (((((/* implicit */_Bool) 12786657867581357067ULL)) ? (((/* implicit */int) (unsigned short)33057)) : (((/* implicit */int) (signed char)0)))) : ((~(((/* implicit */int) (short)32583))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) arr_2 [i_2]))))) > (((/* implicit */int) arr_7 [i_2]))));
    }
    var_27 = ((/* implicit */short) (-(max((((12786657867581357067ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))), (((/* implicit */unsigned long long int) (signed char)12))))));
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 8; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 4; i_4 < 6; i_4 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 4; i_6 < 7; i_6 += 4) 
                    {
                        for (short i_7 = 1; i_7 < 7; i_7 += 3) 
                        {
                            {
                                arr_24 [i_3] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */short) (unsigned char)87)), (arr_15 [i_7] [i_3]))), (((/* implicit */short) (unsigned char)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) | (((/* implicit */int) (unsigned char)5))))) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_10 [i_3] [(short)1])) : (((/* implicit */int) (short)-31216))))))) : ((+(17655963720455858794ULL)))));
                                arr_25 [9ULL] [9ULL] [i_3] [i_6] [i_6] [i_7] = ((/* implicit */int) ((arr_22 [i_6] [i_6 + 3] [i_6] [i_6 - 2] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 13615177964932661940ULL))))))));
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((366620433) >= (((/* implicit */int) (unsigned short)3733)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)14))))) : (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_4] [i_5] [i_5] [i_4]))) : (arr_19 [i_5] [i_6])))))))))));
                            }
                        } 
                    } 
                } 
                arr_26 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (-((~(((/* implicit */int) ((1944187481U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))))))))));
            }
        } 
    } 
}
