/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95328
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
    var_13 += var_12;
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_3] [i_1] = arr_6 [i_3] [i_2] [i_1 - 1] [(unsigned char)13];
                        arr_11 [i_3] [i_1] [(unsigned char)21] [i_3] = ((/* implicit */long long int) (unsigned short)15);
                        var_14 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) * (max((arr_0 [(signed char)4]), (arr_0 [i_1]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) var_6);
                        var_16 = ((/* implicit */int) arr_6 [(_Bool)1] [14U] [18LL] [14U]);
                    }
                    arr_14 [i_2 + 3] [i_0 + 3] [(signed char)14] [(unsigned char)6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14336)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [(signed char)0] [i_1] [i_0 + 2] [0U] [(signed char)0])) ? (((/* implicit */int) (unsigned short)2517)) : (((/* implicit */int) arr_3 [(unsigned short)10] [(unsigned short)10]))))) : (max((arr_0 [i_2]), (((/* implicit */unsigned int) (_Bool)1))))))) ? ((~(arr_4 [(short)18] [(short)18]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0 + 1] [(_Bool)1]), (arr_3 [i_0 - 1] [(unsigned char)8])))))));
                    arr_15 [i_1] = min((((((/* implicit */_Bool) arr_0 [i_0])) ? (min((134217727ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)60420)) * (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_3 [i_0] [i_1])), (var_2))), (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_3 [i_0] [i_1])))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (unsigned short)41810);
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+(786090916U))))));
}
