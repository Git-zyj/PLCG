/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63459
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
    var_13 = ((/* implicit */int) ((short) (+(((/* implicit */int) var_12)))));
    var_14 = (~(var_4));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)34068))) ? ((+(arr_5 [i_0] [i_0 + 1] [i_0 + 3]))) : ((+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)43390))))))));
                var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : ((-(((/* implicit */int) var_11))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43411))) * (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [5U] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_6))))) : ((+(8313117731576804892LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                arr_12 [i_3] [i_3] [i_2] = ((((/* implicit */int) ((_Bool) ((arr_5 [i_3] [i_3] [i_3]) * (((/* implicit */int) arr_4 [i_3] [i_3] [i_3])))))) | (((/* implicit */int) (_Bool)1)));
                var_17 = ((/* implicit */short) (((+(((/* implicit */int) arr_4 [i_3] [i_3] [(signed char)12])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3])) && (((/* implicit */_Bool) -8791811804393580375LL)))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_16 [i_5] [3U] [i_5] [i_5 + 1])), (max((arr_9 [i_5] [i_4] [i_2]), (((/* implicit */int) (signed char)-1))))))), (max((arr_15 [i_5] [(_Bool)1]), (((/* implicit */unsigned int) ((arr_6 [i_2] [i_2]) / (((/* implicit */int) var_12)))))))));
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)43416))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_8 [i_4]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
