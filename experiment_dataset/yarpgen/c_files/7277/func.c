/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7277
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
    var_13 *= ((/* implicit */signed char) max((((/* implicit */short) var_5)), (((short) (!(((/* implicit */_Bool) (signed char)-21)))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_14 *= ((/* implicit */short) 0U);
        var_15 = min(((+(((/* implicit */int) arr_0 [i_0 + 1] [(unsigned char)16])))), (((/* implicit */int) ((unsigned char) var_7))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) 347934571U)) || (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)71)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [8] [8])) % (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_3 [i_1])))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) ((unsigned int) (-(((((/* implicit */_Bool) (short)124)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (unsigned char)6)))))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned char) (((!(((/* implicit */_Bool) arr_6 [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-106)) || (((/* implicit */_Bool) arr_10 [i_1] [i_2]))))) : (((/* implicit */int) arr_0 [i_1] [(unsigned char)6]))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */_Bool) ((unsigned int) min((((((/* implicit */int) (signed char)81)) - (((/* implicit */int) (signed char)-81)))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-106)), ((unsigned char)16)))))));
    var_20 = ((/* implicit */_Bool) ((short) var_7));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        for (short i_5 = 2; i_5 < 17; i_5 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (unsigned char)199)))))));
                arr_17 [(unsigned short)18] [i_5] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_16 [(signed char)16] [(signed char)16])))));
                var_23 = (+(max((min((var_9), (((/* implicit */int) arr_11 [i_4])))), (((/* implicit */int) min((((/* implicit */short) arr_12 [i_5])), (arr_11 [i_5])))))));
            }
        } 
    } 
}
