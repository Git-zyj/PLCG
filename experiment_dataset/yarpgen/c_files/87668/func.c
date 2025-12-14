/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87668
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
    var_20 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((arr_2 [i_0]) ? (var_5) : (arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)60594)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)52830)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (2144516827U))))))) : (min((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (max((((/* implicit */unsigned int) (_Bool)0)), (var_12)))))));
                var_21 |= (~(((302375586U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                arr_6 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)52830))))), (arr_0 [i_0 + 1])))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((+((+(((/* implicit */int) var_3))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [(unsigned char)3] [0U] [(short)1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)30590))));
                            arr_13 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 9; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)61666))))), (var_16)))) ? (max((397313999U), (556944887U))) : (((((((/* implicit */_Bool) var_11)) ? (arr_19 [i_7]) : (arr_15 [i_4]))) >> (((((((/* implicit */_Bool) (short)30590)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30591))) : (2177219498U))) - (4294936696U)))))));
                            arr_24 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? ((+(2117747797U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_3 [i_4] [i_4])) : (((/* implicit */int) arr_11 [i_7] [i_5] [i_6] [i_7] [(unsigned short)9] [(signed char)5])))))))))));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)3870)) : (((/* implicit */int) (signed char)-56)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_17 [i_5 - 1] [i_5] [i_5 - 1]), (arr_10 [i_5 - 3] [i_5 - 3])))) ? (((/* implicit */int) min((arr_17 [i_5 + 1] [i_5] [i_5 + 1]), (((/* implicit */unsigned short) var_14))))) : ((~(((/* implicit */int) var_13))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))) : (var_5)));
    var_26 = ((/* implicit */unsigned int) (_Bool)1);
}
