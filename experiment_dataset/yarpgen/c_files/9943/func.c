/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9943
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
    var_11 = ((/* implicit */long long int) var_6);
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((var_2) == (((/* implicit */long long int) var_3)))))));
    var_13 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) -669281273)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3274342735719549011LL))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) 669281287)) | (((unsigned long long int) var_9))))));
                    arr_8 [0U] [i_1] = max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (arr_4 [(unsigned short)13] [(unsigned short)13] [i_2])))) && (((/* implicit */_Bool) ((((-669281253) + (2147483647))) >> (((15395644313923126665ULL) - (15395644313923126664ULL))))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) arr_7 [i_0]))) : ((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) max(((short)4949), (((/* implicit */short) arr_6 [(_Bool)1] [i_1] [i_2] [i_2]))))), (-669281273)))) | ((((~(var_4))) | (((/* implicit */long long int) ((/* implicit */int) ((var_2) == (arr_1 [i_0]))))))))))));
                }
                for (short i_3 = 2; i_3 < 14; i_3 += 1) 
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == ((~(((var_0) ? (3499952374U) : (((/* implicit */unsigned int) 669281280))))))));
                    var_18 = ((/* implicit */short) max(((-(arr_1 [i_0 - 1]))), (var_4)));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((short) (+(arr_4 [i_0 - 3] [i_0] [i_0]))))) < (((/* implicit */int) ((((/* implicit */_Bool) (-(3274342735719549016LL)))) && (((/* implicit */_Bool) max((5271116041977887228ULL), (((/* implicit */unsigned long long int) -669281285))))))))));
                    arr_12 [i_3] [i_3] [i_3] [i_3] = ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3 - 1] [i_3 - 1])), (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) var_9))))));
                }
            }
        } 
    } 
}
