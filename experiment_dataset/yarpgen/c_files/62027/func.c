/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62027
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
    var_19 = ((/* implicit */short) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_21 = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) arr_1 [(_Bool)1] [i_0])))) >> (((((/* implicit */int) ((signed char) -6313245333686521905LL))) + (53)))));
        var_22 |= ((/* implicit */signed char) (~((~(((/* implicit */int) arr_1 [(unsigned short)12] [8ULL]))))));
        var_23 &= ((/* implicit */_Bool) ((long long int) arr_1 [i_0] [(signed char)2]));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((arr_2 [i_1] [i_1]) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1] [i_1]))))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_25 = ((/* implicit */short) var_7);
    var_26 = ((/* implicit */long long int) 9498665082456990399ULL);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_27 = (((-(((((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_3])) * (8948078991252561216ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) + (((/* implicit */int) arr_5 [i_2]))))));
                arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) 2620183664U);
                var_28 += ((/* implicit */unsigned short) ((_Bool) ((int) 3996587982U)));
            }
        } 
    } 
}
