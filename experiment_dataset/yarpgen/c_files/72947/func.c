/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72947
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [(_Bool)1] [i_0] = 70171705;
                            arr_15 [22ULL] [i_1 + 2] [i_0] [i_1] [1ULL] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_11 [i_0]), (arr_11 [i_0])))) && (((/* implicit */_Bool) arr_11 [i_0]))));
                        }
                        var_11 = min((arr_7 [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) (unsigned char)152)) ? (arr_7 [i_3] [i_2] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
                        var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((long long int) var_3))))));
                    }
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned int) arr_3 [i_1] [i_5]);
                        var_14 = ((/* implicit */unsigned long long int) (unsigned short)40729);
                    }
                    arr_18 [i_0] [i_1 - 2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_5)), (13975721437114162863ULL))), (var_8))))));
                    var_15 = max((((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) min((arr_11 [i_0]), (((/* implicit */unsigned short) var_10))))) : (((/* implicit */int) ((arr_10 [i_0] [i_0] [i_1] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))))))))), (max((arr_13 [i_1 - 2] [i_1 + 2] [i_1 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -244735581)) ? (var_5) : (var_5)))))));
                    var_16 = ((/* implicit */unsigned long long int) (unsigned char)103);
                    var_17 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_2] [i_1 - 2] [i_1] [i_1]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) (~(16083620914472371746ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (((var_2) - (16804290344764909359ULL))))), (((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned char) var_7)), ((unsigned char)144)))))));
}
