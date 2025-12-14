/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89669
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2448510103U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)126))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 3; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [8U] [8U] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_3 - 1]))));
                            var_12 = ((/* implicit */unsigned long long int) arr_13 [i_3] [0U] [(_Bool)1] [i_3 + 2] [i_3 + 1]);
                        }
                        arr_17 [i_0] [i_3] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_14 [i_3 + 2] [i_3 + 2] [(short)15] [i_3]))))));
                        var_13 -= ((/* implicit */int) arr_9 [i_2] [i_2] [i_1] [i_2]);
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_14 = (!(((/* implicit */_Bool) (signed char)-45)));
                            var_15 = ((/* implicit */signed char) ((_Bool) arr_18 [i_5] [i_3 + 1] [i_2] [i_1] [i_0]));
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */signed char) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_0)))));
                            arr_26 [i_0] [i_1] [i_2] [i_0] [3ULL] = (signed char)-96;
                            arr_27 [i_0] [i_0] [i_0] [i_0] [15LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 - 3] [(_Bool)1])) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_10 [i_3 - 2] [i_3]))));
                            var_16 = ((/* implicit */unsigned long long int) var_8);
                        }
                        arr_28 [i_0] [i_0] [i_1] [(short)11] [i_1] = ((/* implicit */unsigned long long int) (~(576320014815068160LL)));
                    }
                } 
            } 
        } 
        arr_29 [i_0] = ((/* implicit */unsigned char) ((short) var_2));
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (_Bool)0))));
        var_19 = ((/* implicit */short) (signed char)95);
    }
    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
    {
        arr_34 [i_8] [i_8] = ((/* implicit */short) arr_18 [i_8 + 2] [i_8 + 1] [i_8] [i_8] [i_8]);
        var_20 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) (unsigned short)65525)) ? (-554759200321872835LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_21 = ((/* implicit */short) (signed char)-18);
    }
    /* LoopNest 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (unsigned int i_10 = 2; i_10 < 18; i_10 += 2) 
        {
            {
                var_22 += ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (arr_37 [i_9 - 1])))) ? (((/* implicit */int) max(((_Bool)1), (arr_18 [i_9] [i_10] [(unsigned char)21] [i_10] [i_9 - 1])))) : (((/* implicit */int) var_3)))));
                arr_39 [i_9] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_9 [i_10] [i_10] [i_10] [i_10]))))));
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)65))));
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) var_10))), ((~((~(var_10))))))))));
}
