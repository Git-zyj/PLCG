/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77076
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) (unsigned char)113);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_11);
                arr_8 [i_0] = ((/* implicit */int) min((var_1), (((((/* implicit */unsigned long long int) min((261452505U), (((/* implicit */unsigned int) (unsigned char)102))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (12217218360252305569ULL)))))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)227)), (1310015292216471752LL)))), (min((((/* implicit */unsigned long long int) 3553672042U)), (16804328489029262354ULL)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */_Bool) min((max((var_15), (arr_11 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_2 - 1]))), (min((arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2 + 1]), (16858274108933420121ULL)))));
                                var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)245)) == (((/* implicit */int) (short)26726))))), (((unsigned long long int) arr_13 [i_4] [i_3] [i_4 + 1] [i_3] [i_3] [i_1 + 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_12);
}
