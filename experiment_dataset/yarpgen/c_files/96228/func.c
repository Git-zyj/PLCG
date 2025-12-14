/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96228
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) ((((arr_0 [i_0 - 1]) % (((/* implicit */unsigned long long int) 3848528668175133091LL)))) | (((((((/* implicit */_Bool) 2773522721U)) ? (arr_0 [18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))))) % (((/* implicit */unsigned long long int) (~(arr_1 [0LL]))))))));
        var_12 = ((/* implicit */int) ((arr_0 [i_0 + 1]) == (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 + 2])))));
    }
    for (int i_1 = 4; i_1 < 9; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (1521444563U) : (((/* implicit */unsigned int) -1170772338)))) | (((/* implicit */unsigned int) 2147483647))))) || ((!(((/* implicit */_Bool) arr_0 [i_1 + 2]))))));
        arr_5 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((4988349949045662157LL) << (((arr_2 [i_1 - 3] [i_1 - 4]) - (4221471033U))))))));
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(var_1))) * (((/* implicit */int) (signed char)3))))) ? (((unsigned int) 6U)) : (var_9)));
    var_15 = ((/* implicit */int) ((unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1890750047U)) && (((/* implicit */_Bool) 470020179))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-54)) < (var_5)))))));
    var_16 = ((/* implicit */unsigned short) (-((-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) | (1586905925U)))))));
    /* LoopNest 3 */
    for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            for (unsigned int i_4 = 1; i_4 < 23; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (signed char)-13);
                    arr_14 [i_4] [i_2] [0U] [0U] = (-(16777200U));
                    var_18 = ((/* implicit */int) ((unsigned int) (+(-324056295))));
                }
            } 
        } 
    } 
}
