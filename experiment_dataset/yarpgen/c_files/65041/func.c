/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65041
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_6)))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)126))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_13 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_14 = (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) >= (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0]))))));
                            arr_12 [i_0] [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)2])) ? (((/* implicit */int) arr_6 [i_3] [i_2] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? ((((_Bool)1) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) (unsigned char)141))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_20 [i_6] [i_0] [i_4] [i_1] [i_0] |= ((/* implicit */signed char) var_9);
                                arr_21 [i_1] = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(signed char)11] [(signed char)11] [(_Bool)1]))) * (var_7)))) + (arr_4 [i_0])));
                                var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((arr_9 [i_4] [(unsigned char)4] [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))))) > (((((/* implicit */int) (short)32756)) + (((/* implicit */int) arr_3 [i_0] [i_6 + 1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_4 + 3] [i_4 + 3])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((arr_14 [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(unsigned char)3] [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3))))))))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_15 [i_1] [i_0] [i_0] [i_0]), (arr_15 [i_1] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) (short)-18559)) ? (17892411153615479798ULL) : (((/* implicit */unsigned long long int) -1584684537045612338LL))))));
            }
        } 
    } 
}
