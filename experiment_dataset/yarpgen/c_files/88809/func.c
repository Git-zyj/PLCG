/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88809
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 *= var_10;
                var_19 = arr_0 [i_1] [i_0];
                var_20 = ((/* implicit */short) 127);
                var_21 = max((((/* implicit */int) min((arr_0 [i_0 - 2] [i_0 + 1]), ((short)-29)))), (((((/* implicit */_Bool) -128)) ? (arr_2 [i_1]) : (81006931))));
                arr_5 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-3831)), (var_16)))) ? (((((/* implicit */int) arr_0 [i_0 - 1] [i_1])) + (((/* implicit */int) arr_0 [i_0 + 2] [i_1 + 2])))) : (((/* implicit */int) ((short) (short)-26691)))))) ? (((int) max((((/* implicit */int) arr_3 [i_0] [i_1])), (81006931)))) : (min((((((/* implicit */_Bool) 0)) ? (var_12) : (((/* implicit */int) (short)-7746)))), (((/* implicit */int) arr_3 [i_1 - 4] [i_1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((short) min((5), (267911168))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((-1) + (2147483647))))));
                var_24 *= ((/* implicit */short) max((((132) - (-21))), (min((max((((/* implicit */int) (short)26690)), (426522774))), (max((var_4), (var_4)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (short i_5 = 3; i_5 < 13; i_5 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_4] [i_4] [i_5 - 1] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) ((int) var_1))))));
                            var_25 = max((max((max((-21), ((-2147483647 - 1)))), (962907906))), (((((/* implicit */_Bool) ((short) -62580429))) ? (((/* implicit */int) ((short) (short)32767))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (short)1885))))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 626184690)) ? (((((/* implicit */int) (short)1)) | (2147483647))) : (arr_10 [i_3 + 1] [i_5 - 3] [i_5 - 1])));
                            var_27 = max((arr_0 [i_2] [i_2]), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483639)) ? (((/* implicit */int) (short)(-32767 - 1))) : (-2147483647)))) && (((/* implicit */_Bool) arr_13 [i_3 + 2] [i_5 - 3]))))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (-216912339)))) ? (-7047986) : (((/* implicit */int) min((var_17), ((short)-10454))))))) ? (max((((((/* implicit */int) (short)-32747)) * (((/* implicit */int) (short)-32760)))), (((/* implicit */int) max(((short)32767), (arr_8 [i_3 - 2])))))) : (((((/* implicit */_Bool) max((arr_4 [i_2] [i_2]), (arr_10 [i_2] [i_3] [(short)1])))) ? (((/* implicit */int) ((short) 1510492693))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_2] [i_2])) : (arr_11 [i_2] [(short)12]))))))))));
                        }
                    } 
                } 
                var_29 = min((2147483647), (((((/* implicit */_Bool) ((((/* implicit */int) var_17)) * (((/* implicit */int) (short)32760))))) ? (max((var_16), (var_3))) : (min((-2147483644), (2147483647))))));
            }
        } 
    } 
}
