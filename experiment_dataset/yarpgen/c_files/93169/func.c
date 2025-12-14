/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93169
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned char) var_7)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0 - 1] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (short)-16773)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_7)))) & ((-(((/* implicit */int) var_2))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) min((arr_5 [i_0 + 3] [i_1]), (arr_4 [i_0])))), ((+(((/* implicit */int) arr_4 [i_1]))))))) ? (max((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)197)))), (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (signed char)-8)))))) : ((-(((/* implicit */int) min(((short)-3679), ((short)-2577))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 19; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2] [i_3 - 1])))))));
                arr_11 [i_2] [i_2] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3] [i_3 - 3])) && (((/* implicit */_Bool) var_12)))), ((!(((/* implicit */_Bool) ((signed char) (signed char)-62)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_4)))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)231)) == (((/* implicit */int) var_4)))))));
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_3), ((signed char)11))))))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */int) arr_13 [i_4] [i_4])) + (((/* implicit */int) arr_13 [i_4] [i_4]))))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) max((arr_3 [i_4] [(signed char)16] [i_4]), (var_2)))) > (((/* implicit */int) min((var_9), (arr_10 [i_4] [i_4] [i_4]))))));
    }
    var_21 = (signed char)33;
}
