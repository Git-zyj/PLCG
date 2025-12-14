/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58065
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
    var_11 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) 17592186044415LL);
                arr_7 [(unsigned char)4] [i_1] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)46)) || (((/* implicit */_Bool) 3452104195U))))))), (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_13 = max((((/* implicit */unsigned int) var_3)), (var_6));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_24 [i_5 + 1] [i_4] [i_5] [(signed char)2] [i_3 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (2815387267U) : (595584134U))))))), (var_0)));
                                arr_25 [i_2] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */short) min(((unsigned char)181), ((unsigned char)255)));
                                var_14 = ((/* implicit */int) ((((unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)1))))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2]))) : (min((var_2), (((/* implicit */unsigned long long int) arr_4 [i_3 - 3] [i_3 - 1]))))));
                arr_26 [i_2] [i_3 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 842863101U)) ? (arr_16 [i_2] [i_2] [i_2]) : (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_3 + 1] [i_2])) ? (((((/* implicit */int) arr_1 [i_2])) + (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_5 [i_2]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    arr_29 [i_2] [i_3 - 3] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((((/* implicit */int) var_0)) + (((/* implicit */int) (short)26427)))), (((/* implicit */int) ((short) (short)29897)))))) - (842863101U)));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 8; i_9 += 4) 
                        {
                            {
                                arr_38 [i_2] [i_3] [i_3] [i_9] = ((/* implicit */signed char) max((((unsigned long long int) ((((/* implicit */int) arr_12 [i_2] [i_3])) / (((/* implicit */int) arr_5 [i_9]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [1LL]))))))))));
                                arr_39 [i_2] [i_9] [i_2] [i_2] [i_2] = (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */long long int) 1494230246U)), (arr_11 [i_7]))))));
                            }
                        } 
                    } 
                    arr_40 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_5 [i_2]);
                }
            }
        } 
    } 
}
