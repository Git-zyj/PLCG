/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88916
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
    var_11 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (short)32767);
                var_12 = ((/* implicit */unsigned char) ((int) ((((/* implicit */long long int) min((((/* implicit */int) (short)32766)), (33554431)))) % (-7364507470835346497LL))));
                var_13 = ((/* implicit */short) ((long long int) 625560374));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_3 [i_2]);
                            var_14 = ((/* implicit */_Bool) arr_3 [i_1]);
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (511U)));
                            arr_15 [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_0 + 1] = (signed char)-46;
                            var_16 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_3] [i_0] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_17 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) (short)28600)))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_5 [(short)1] [(short)1] [i_4]))) | (((/* implicit */int) ((arr_17 [i_4]) && (((/* implicit */_Bool) 3081719349U)))))));
        var_19 = ((/* implicit */unsigned int) arr_16 [i_4]);
    }
    var_20 = ((/* implicit */unsigned int) 3857714274375716821LL);
    var_21 = ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)168))))) | (var_8));
}
