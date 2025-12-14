/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61580
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) max((var_16), (var_13)));
                    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_3] [i_4])) ? ((~(((/* implicit */int) arr_4 [i_1] [i_3])))) : (((/* implicit */int) var_7)))));
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-32767))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)-81), ((signed char)-25)))) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) ((_Bool) 5272185286023047415LL)))));
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (unsigned char)185))))) >> (((var_4) + (1245649439619257499LL))))) % (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_22 -= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)78)) && ((_Bool)1))))));
                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_5]))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_7);
}
