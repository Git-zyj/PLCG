/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72932
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
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9774)) ? (((/* implicit */int) (_Bool)1)) : (var_17)))) && ((_Bool)0))), ((_Bool)1)));
    var_19 = ((/* implicit */signed char) ((unsigned long long int) ((signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-5)) : (var_17)))));
    var_20 = ((/* implicit */unsigned short) (+(var_13)));
    var_21 = ((/* implicit */unsigned int) (((+(var_5))) > (max(((+(var_11))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [(unsigned char)8] [1LL] = ((/* implicit */short) (-(((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) % (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_0]))));
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0]))))))));
                }
            } 
        } 
        arr_11 [10U] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
}
