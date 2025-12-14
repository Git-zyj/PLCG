/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62695
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
    var_18 = ((/* implicit */signed char) ((short) 785898399));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (785898388) : (-785898389)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((((/* implicit */int) var_3)) + (((/* implicit */int) arr_0 [i_0])))))), ((-(((/* implicit */int) ((unsigned char) 3240476005448058410LL)))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                        var_20 = ((/* implicit */signed char) ((unsigned short) ((short) ((unsigned char) var_1))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) var_12);
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_21 *= ((/* implicit */short) ((((/* implicit */int) arr_5 [(signed char)10] [10U] [(signed char)10])) & (((/* implicit */int) (signed char)127))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_15);
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) -785898394)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) (+(3715787854978506447ULL)))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 2745244198U))) ? (min((10157257042200638116ULL), (((/* implicit */unsigned long long int) (unsigned short)23717)))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_4])))));
    }
    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) min((3747595704U), (((unsigned int) var_17))))) ? (var_6) : (((/* implicit */unsigned int) var_9))));
}
