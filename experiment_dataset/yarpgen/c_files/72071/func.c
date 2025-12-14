/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72071
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_3))))) / (-5789827676945755449LL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 |= (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (5789827676945755448LL) : (arr_3 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -56457581)) || (((/* implicit */_Bool) (unsigned char)255)))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((arr_1 [(short)10]), (((/* implicit */int) (((+(5789827676945755472LL))) >= (-5789827676945755450LL)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [i_1] = (+(((((/* implicit */_Bool) ((56457581) / (((/* implicit */int) (signed char)26))))) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1])) : (max((((/* implicit */int) (unsigned char)3)), (56457583))))));
                            var_17 = arr_3 [i_0] [i_0];
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((56457575) ^ (((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
}
