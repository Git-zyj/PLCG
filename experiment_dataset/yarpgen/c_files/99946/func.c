/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99946
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
    var_13 = ((/* implicit */long long int) ((int) min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_7)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((signed char) (((+(((/* implicit */int) var_6)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(var_10)))))) ? ((((!(((/* implicit */_Bool) 190653310U)))) ? (18010000462970880LL) : (18010000462970880LL))) : (((/* implicit */long long int) (((+(((/* implicit */int) var_0)))) | (((/* implicit */int) var_8)))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) max((min((min((((/* implicit */unsigned int) var_4)), (var_10))), ((+(var_3))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_16 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
                        var_16 = ((/* implicit */unsigned char) var_9);
                        var_17 = var_0;
                    }
                } 
            } 
            var_18 += max((((long long int) (+(((/* implicit */int) var_0))))), (((/* implicit */long long int) min((((_Bool) var_0)), (var_5)))));
        }
        arr_17 [2U] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (max((((/* implicit */unsigned int) var_12)), (var_10))))) > (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
    }
    var_19 |= var_8;
    var_20 = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) / ((+(min((var_10), (((/* implicit */unsigned int) var_12)))))));
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) & ((~(((/* implicit */int) var_2)))))) | (((/* implicit */int) var_7))));
}
