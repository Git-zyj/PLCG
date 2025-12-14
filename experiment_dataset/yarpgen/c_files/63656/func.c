/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63656
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
    var_18 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) - (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_11))))))), ((-(((/* implicit */int) ((_Bool) var_8)))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) var_11);
                arr_7 [i_0] = ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)53817))))), (arr_0 [i_1]))) % (((/* implicit */unsigned long long int) var_14)));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_0] [i_0]);
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 2]))) > (((((/* implicit */_Bool) (unsigned short)877)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))))))) : (min((-12), (((/* implicit */int) (short)-30344))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_11)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)877))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_16 [13] [i_2] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_2 - 3] [i_3] [i_2]))));
                    arr_17 [i_2] = ((/* implicit */short) (+(arr_3 [i_2 - 3] [i_2 - 1])));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_13);
}
