/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98706
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_14 = max(((short)-11623), ((short)(-32767 - 1)));
        var_15 = var_13;
        var_16 = ((/* implicit */short) ((((/* implicit */int) var_12)) * (((/* implicit */int) min(((short)14155), (arr_0 [i_0 + 3]))))));
    }
    for (short i_1 = 2; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) max((var_17), (((short) (short)12025))));
        arr_5 [i_1] = ((short) (short)(-32767 - 1));
        arr_6 [i_1] &= ((/* implicit */short) ((((/* implicit */int) ((short) ((short) var_13)))) * (((((/* implicit */int) max((var_4), ((short)-32755)))) / (((((/* implicit */int) (short)-8066)) * (((/* implicit */int) (short)-32755))))))));
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (short i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_18 = var_5;
                            var_19 = ((/* implicit */short) max((var_19), ((short)25792)));
                            var_20 = max(((short)4032), ((short)32755));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) min((var_21), ((short)26043)));
            }
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (short)-25792)))))));
        }
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-9)) % (((/* implicit */int) ((short) var_12)))))) ? (((/* implicit */int) max((((short) (short)24536)), (min((var_8), (var_7)))))) : (((/* implicit */int) ((((/* implicit */int) (short)-21805)) < (((/* implicit */int) (short)-32748)))))));
            arr_21 [i_1] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) (short)-2036)), ((~(((/* implicit */int) var_11))))));
        }
    }
    for (short i_7 = 2; i_7 < 12; i_7 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */short) min((((/* implicit */int) (short)-7715)), (((((/* implicit */_Bool) (short)21805)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-13633))))));
        var_25 = ((/* implicit */short) (-(((/* implicit */int) (short)-1))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-21807)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)31136))))))))))));
        var_27 = ((/* implicit */short) (~(((((/* implicit */int) (short)32767)) | (((/* implicit */int) (short)-26204))))));
    }
    var_28 = ((/* implicit */short) (+(min((((((/* implicit */int) (short)12486)) | (((/* implicit */int) (short)-1)))), (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_13))))))));
    var_29 = ((/* implicit */short) (((-(((/* implicit */int) (short)-1)))) <= (((/* implicit */int) ((short) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) var_2)) + (24884)))))))));
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (short)16324)) ? (((/* implicit */int) (short)17745)) : (((/* implicit */int) (short)9723))));
    var_31 = var_3;
}
