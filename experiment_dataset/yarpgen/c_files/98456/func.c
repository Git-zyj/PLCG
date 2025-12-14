/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98456
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
    var_11 = var_5;
    var_12 *= var_2;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = (short)-1;
                var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-30779))));
                var_14 = ((/* implicit */short) ((min((((/* implicit */int) (short)(-32767 - 1))), ((-(((/* implicit */int) (short)30779)))))) < (((/* implicit */int) (((-(((/* implicit */int) var_5)))) <= (((/* implicit */int) (short)0)))))));
                var_15 = ((/* implicit */short) max((((/* implicit */int) arr_3 [i_0] [i_0])), (((((/* implicit */int) var_4)) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)1))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (short i_4 = 4; i_4 < 13; i_4 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) (+(((/* implicit */int) max((arr_8 [i_2 - 1] [i_4 - 4]), (((short) arr_9 [i_2] [i_3] [i_3])))))));
                    var_17 ^= ((/* implicit */short) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((arr_7 [i_3]), ((short)-30779)))) : (((/* implicit */int) arr_8 [i_4 + 2] [i_4 + 2])))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_4])) & (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) (short)14336)))) : (((/* implicit */int) max(((short)-25453), ((short)28356))))))));
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                    {
                        var_18 = (short)-25916;
                        var_19 = arr_8 [i_2 - 1] [i_4];
                    }
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) (short)4096)) ? (((/* implicit */int) arr_6 [i_2 - 1])) : (((/* implicit */int) (short)(-32767 - 1))))) & (((/* implicit */int) (short)(-32767 - 1))))))));
                        var_21 -= ((/* implicit */short) ((((/* implicit */int) ((short) (short)-11605))) + (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_16 [i_2 + 1] [i_3]))))));
                        arr_19 [i_3] = (short)(-32767 - 1);
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) - (((((/* implicit */int) (short)30779)) * (((/* implicit */int) (short)0))))))) ? (((/* implicit */int) max((var_6), (var_1)))) : (((/* implicit */int) ((short) arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_4 - 1] [i_4 - 3])))));
                    }
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)4095)) : (((((/* implicit */_Bool) (short)-4097)) ? (((/* implicit */int) (short)16128)) : (((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-3021))))) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) arr_13 [i_2] [i_2] [i_2])))) : (((/* implicit */int) (short)32767)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) (~((-(((/* implicit */int) var_7))))));
}
