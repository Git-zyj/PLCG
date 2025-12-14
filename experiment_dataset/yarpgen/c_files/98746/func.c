/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98746
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = -1;
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-8882588347532223472LL)))) : (min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1] [i_1] [i_2])))));
                    var_17 -= ((/* implicit */int) ((unsigned short) -1929939603));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (-((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (1929939602) : (((/* implicit */int) var_7))))) : ((+(var_11)))))));
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_19 = ((/* implicit */int) (signed char)-1);
        var_20 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_0 [i_3 + 1] [i_3 + 1]))) * (((/* implicit */unsigned long long int) (~(4294967295U))))));
    }
    var_21 = ((/* implicit */signed char) min((var_11), (((/* implicit */long long int) var_14))));
}
