/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91116
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_10);
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_2 + 2]))) : ((+(var_7)))))) && (((/* implicit */_Bool) (+(arr_1 [i_1 + 4]))))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_8)))))) ? (min(((~(var_5))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) (unsigned short)65530)))))))))));
                }
            } 
        } 
        arr_10 [i_0] = ((((/* implicit */_Bool) max((max((arr_1 [i_0]), (((/* implicit */int) var_4)))), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_2)));
    }
    for (signed char i_3 = 3; i_3 < 8; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 3) 
        {
            arr_15 [i_3 - 3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3])))))));
            var_13 = ((/* implicit */_Bool) var_6);
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_3] [i_4])) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_3])) >= (((/* implicit */int) var_9))))), (((long long int) var_5)))))));
        }
        arr_16 [i_3] = ((/* implicit */_Bool) (unsigned char)214);
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_3 + 2] [i_3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3 + 2] [i_3] [i_3 + 2]))))) : (((/* implicit */int) arr_0 [i_3 + 2] [i_3 - 1]))));
    }
    var_16 -= ((/* implicit */long long int) var_9);
}
