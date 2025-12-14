/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96467
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (short)-2666))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((short)-2639), ((short)2668))))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) ((unsigned short) ((17044689569874646300ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16)))))))));
                        }
                    } 
                } 
                var_17 -= ((/* implicit */signed char) var_1);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) var_11);
                    var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(14112227869845910646ULL)))) ? (((/* implicit */int) arr_17 [i_5] [(unsigned short)4] [i_5] [i_5])) : (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) var_3))))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (((unsigned long long int) ((17044689569874646291ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        for (unsigned short i_8 = 1; i_8 < 17; i_8 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_7]))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_7] [i_7]))) ? (((((/* implicit */int) (short)20008)) - (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (unsigned char)161)) ? (arr_11 [i_7] [(_Bool)1]) : (arr_11 [i_7] [i_8 - 1])))));
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned long long int) (unsigned short)24099);
}
