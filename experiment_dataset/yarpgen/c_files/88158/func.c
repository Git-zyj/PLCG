/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88158
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
    var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((7195538337197272645LL) - (7195538337197272641LL)))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2] = arr_5 [i_2 - 2] [i_2] [i_2 - 2];
                    arr_7 [i_0] [i_0] [(signed char)10] = ((/* implicit */unsigned short) ((signed char) 3061007894614827764ULL));
                }
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    arr_10 [i_1] [i_1] [(short)2] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((3061007894614827764ULL), (8193985406486685857ULL)))));
                    arr_11 [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)23200)) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_5 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535)))))));
                }
                arr_12 [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) && ((((!(((/* implicit */_Bool) -7331920861604717460LL)))) && (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) 3061007894614827764ULL))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_13)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) var_0)))) ? (min((var_12), (var_8))) : (var_12))))));
    var_16 = ((/* implicit */long long int) var_0);
}
