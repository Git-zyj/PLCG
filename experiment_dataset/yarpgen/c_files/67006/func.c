/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67006
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
    var_10 += ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (var_6) : (var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 60);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 1691864469);
                            var_11 = (+(((/* implicit */int) max((arr_8 [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3 - 1]), (arr_8 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 + 2])))));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)14)))), (((((/* implicit */_Bool) arr_7 [i_1] [(signed char)8] [i_4])) ? (((/* implicit */int) arr_6 [i_0])) : (var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -60))))) : (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0])) : (-1339762471))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (332992704)))))));
                                var_13 ^= ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_13 [i_0] [i_0])), ((-(((/* implicit */int) arr_2 [(signed char)13] [(signed char)13])))))) + (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [4] [i_0]))))) ? (((/* implicit */int) (signed char)127)) : (-1740887481)))));
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                            {
                                var_14 = (+(((((/* implicit */_Bool) arr_3 [i_1])) ? (332992712) : (((/* implicit */int) arr_13 [i_1] [i_5])))));
                                var_15 *= ((/* implicit */short) ((-332992707) / (1740887480)));
                            }
                            arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_6 [i_2 + 3])) : (((/* implicit */int) arr_6 [i_2 - 1])))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 1740887480)) ? (0) : (((((/* implicit */_Bool) (short)17696)) ? (((((/* implicit */_Bool) -1740887481)) ? (1740887480) : (-951237899))) : (((((/* implicit */_Bool) 73)) ? (58) : (576797103)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -576797103))));
    var_18 = ((/* implicit */signed char) 1740887480);
}
