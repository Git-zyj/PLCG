/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70528
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((((/* implicit */_Bool) (short)26927)) ? (1962746553) : (((((/* implicit */int) (signed char)-72)) ^ (((/* implicit */int) (short)-23110)))))), (((/* implicit */int) max((max(((short)-256), (((/* implicit */short) (signed char)-50)))), (max(((short)235), (((/* implicit */short) (signed char)83))))))))))));
                                arr_12 [i_0] [i_2] [i_2 - 2] [(short)10] = ((/* implicit */short) ((((/* implicit */_Bool) (short)960)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (short)-1))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [(short)4] |= ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)56))))) ? (((/* implicit */int) ((short) (short)-32759))) : (((((/* implicit */_Bool) (signed char)-80)) ? (-587750902) : (((/* implicit */int) (short)256)))));
                    var_21 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)257)) | (((/* implicit */int) (short)-7442))))) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */int) (signed char)-48)) ^ (((/* implicit */int) (short)-17215)))))), (((((/* implicit */_Bool) (short)1456)) ? (((/* implicit */int) (short)26933)) : (((/* implicit */int) (short)18662))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-2127865407), (((/* implicit */int) (short)-256))))) ? ((-(((((/* implicit */int) (short)6963)) >> (((((/* implicit */int) var_10)) + (4365))))))) : (((((/* implicit */int) (short)5776)) | (((/* implicit */int) (short)7891))))));
                    var_23 = ((/* implicit */int) ((short) 1535478283));
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15322)) ? (((/* implicit */int) var_14)) : (2147483647))))))), (var_2)));
}
