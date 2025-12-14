/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99168
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)0))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_8 [i_0] [i_0] [i_1] [i_0] [10] = ((/* implicit */short) max((arr_1 [i_1]), (((/* implicit */unsigned char) arr_5 [i_3] [i_2] [i_1]))));
                        arr_9 [i_3] = arr_3 [i_1] [i_1];
                        arr_10 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (short)-10720)))), (((/* implicit */int) min((arr_7 [i_0]), (((/* implicit */short) arr_4 [i_0] [7LL] [i_2])))))))) ? (arr_6 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_2 [i_3] [i_1]))));
                        var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */short) max((arr_0 [i_2] [i_1]), (arr_0 [i_3] [i_3])))), (arr_7 [i_0])))), (min((arr_6 [i_3] [i_3] [8LL] [i_3]), (((/* implicit */int) arr_7 [i_0]))))));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) min((min((((var_9) ? (((/* implicit */int) var_6)) : (var_0))), (((/* implicit */int) min((var_6), (var_2)))))), (((/* implicit */int) var_10))));
    var_15 = ((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_11)))) ? (min((((/* implicit */int) var_9)), (var_1))) : (min((((/* implicit */int) var_2)), (var_8))))))));
}
