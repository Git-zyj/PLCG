/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5941
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0]))))));
                                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((unsigned short)42561), ((unsigned short)62677))))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((var_8), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (unsigned short)42561)) : (((/* implicit */int) (unsigned short)22960)))))))))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_4))));
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned long long int) var_10)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) var_6);
                    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((1634341342U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    var_18 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 299177481003585254ULL))))) : (((int) (unsigned char)255)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_2);
}
