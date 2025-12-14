/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96179
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) min(((_Bool)0), (var_6)))) < (((((/* implicit */_Bool) max((var_4), ((signed char)-126)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_0])))), ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [(signed char)4] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_0])) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((signed char)95), (((/* implicit */signed char) arr_10 [i_0] [i_1 - 1] [i_0]))))) : (((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)46))))))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 1])) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((_Bool)1), (var_6)))) : (((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_12 [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 2] [i_3] [i_0] [i_1])))))));
                                var_13 -= ((/* implicit */signed char) (((_Bool)1) ? ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)96)))) + (((/* implicit */int) (signed char)-97)))) : (min((((/* implicit */int) min((var_5), (((/* implicit */signed char) arr_8 [i_0] [i_1] [(signed char)6]))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))));
                                var_14 -= ((/* implicit */signed char) (~(((/* implicit */int) max((min((((/* implicit */signed char) (_Bool)1)), (var_8))), (((/* implicit */signed char) (_Bool)1)))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-61)))) : (((/* implicit */int) arr_14 [i_0] [i_1 - 1] [(_Bool)1] [i_0] [i_0]))))) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) ((signed char) arr_12 [i_4] [i_0] [(_Bool)1] [i_2] [i_1] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_1 - 2] [i_0])) / (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_4 [i_1]))));
                    arr_17 [i_2] [i_0] [i_0] [i_0] = min(((signed char)122), ((signed char)-99));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */signed char) (!((_Bool)1)));
        arr_21 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_5] [i_5] [i_5])))) : (((/* implicit */int) arr_7 [i_5]))));
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) == ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))) - (((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) var_7);
                    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)116)))) << (((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))));
                    arr_30 [(signed char)3] [i_7] [i_8] = ((/* implicit */_Bool) (signed char)-8);
                }
            } 
        } 
    } 
}
