/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68407
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1 - 1] [0] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) 10270742257414927962ULL)))));
                    var_17 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((unsigned long long int) 798451917U)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((long long int) ((unsigned long long int) 3496515379U))) & (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (arr_2 [i_0] [i_0])))))))));
                        var_19 = ((_Bool) (!(((((/* implicit */unsigned long long int) 798451910U)) < (675163744922177947ULL)))));
                        var_20 += ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_3] [i_3 - 1] [i_3] [(_Bool)0] [i_3 - 1] [i_0]) == (8236990455120565292ULL))))) == (3496515368U));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) var_13);
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_5 [(short)4] [i_5] [i_5] [i_5]))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_3);
    var_24 = ((/* implicit */_Bool) ((((long long int) var_1)) - ((+(max((((/* implicit */long long int) var_12)), (-3383894689408650047LL)))))));
}
