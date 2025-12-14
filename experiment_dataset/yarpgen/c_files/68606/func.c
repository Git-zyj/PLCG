/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68606
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
    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (+(((/* implicit */int) var_10))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(var_5)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */int) ((unsigned short) var_2));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 = (+(((((/* implicit */int) var_7)) % (((/* implicit */int) var_9)))));
                                arr_16 [(signed char)16] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))));
                                var_13 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) (~((((-(-268435456))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))));
        arr_20 [i_5] = ((/* implicit */signed char) var_10);
        var_16 *= var_10;
    }
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_3))) ? (max((((/* implicit */int) (signed char)-105)), (66060288))) : (((/* implicit */int) var_6))));
    var_19 &= (+((-(((/* implicit */int) var_2)))));
}
