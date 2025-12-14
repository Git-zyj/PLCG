/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65715
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_11), (var_11)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) : (262143ULL))) : (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_2] [i_1] [i_0])))))) << ((((((~(var_4))) + ((~(5807669469506575234ULL))))) - (6342750413783488272ULL)))));
                        arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] [i_0] = (~((~(arr_6 [i_1 + 2] [i_2] [i_2] [(signed char)3] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_2] [i_1] [i_0]))) : (var_10))) << (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_0 [i_4]))))))), (((/* implicit */long long int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
                                var_14 = ((/* implicit */unsigned int) max(((((~(12639074604202976381ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0])))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))) : (var_0))) == (((((/* implicit */_Bool) arr_5 [i_0] [i_5] [i_5] [i_0])) ? (8988370775897720092ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [7ULL] [7ULL] [7ULL] [7ULL] [i_5]))))))))));
                                arr_17 [i_5] [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) arr_3 [i_5 + 3]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) 179593506U)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */int) ((short) var_9));
}
