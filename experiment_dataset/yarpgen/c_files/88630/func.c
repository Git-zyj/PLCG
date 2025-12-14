/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88630
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) -205711260))));
    var_18 ^= ((/* implicit */unsigned int) ((205711260) & (((/* implicit */int) (unsigned char)74))));
    var_19 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-205711245), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_7) : (var_4)))) : ((-(arr_0 [i_0] [i_0])))))) ? ((+(arr_2 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)21))))));
        arr_4 [i_0] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) == (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) var_3))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_7 [i_1 - 1]);
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_12 [i_0] [i_1] [i_2] [i_1 - 1] [i_3])))) ? (((((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2])) >> (((/* implicit */int) min(((_Bool)1), (arr_8 [i_0] [i_1] [i_3])))))) : ((+(((/* implicit */int) var_1)))))))));
                    }
                } 
            } 
        } 
        var_21 |= ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)74)))) == (((/* implicit */int) min((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0]))))));
        arr_14 [i_0] = ((/* implicit */unsigned char) ((_Bool) (~(((var_7) | (((/* implicit */int) var_10)))))));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_28 [i_4] [i_5] [i_5] [i_5] [i_5] [i_6] = min((arr_17 [i_4] [i_4]), ((unsigned char)189));
                        arr_29 [i_4] [i_6] = arr_22 [i_4] [i_6] [i_6] [i_7];
                        var_22 = ((/* implicit */int) ((min(((_Bool)1), ((_Bool)1))) ? (var_16) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_5])))))));
                    }
                } 
            } 
        } 
        arr_30 [i_4] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (unsigned char)29)))));
        var_23 = ((/* implicit */int) (((_Bool)0) ? (((((/* implicit */_Bool) ((var_6) ? (arr_27 [i_4] [12] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_4] [(_Bool)1])))))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_4] [i_4]))))) : (arr_26 [(_Bool)1] [i_4] [i_4] [i_4])));
        var_24 -= ((/* implicit */unsigned char) min((var_8), ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))));
    }
}
